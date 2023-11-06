using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace BookManager
{
    public partial class Form3 : Form
    {
        public Form3()
        {
            InitializeComponent();
            dataGridView1.DataSource = null;
            if (DataManager.users.Count > 0)
            {
                dataGridView1.DataSource = DataManager.users;
            }
            dataGridView1.CellClick += DataGridViewCellClick;
            button1.Click += AddUser;
            // 무명델리게이트
            button2.Click += delegate (object s, EventArgs e)
            {
                try
                {
                    // Single : 괄호 안에 있는 메소드 조건을
                    // 만족하는 객체의 위치를 가져옴
                    // 만약 조건을 충족하는 객체가 없으면
                    // Exception을 발생
                    // 여기서 리턴된 u느 DataManager.users 안에있는
                    // 요소의 위치참조하므로
                    // u.Name을 바꾸면 users에 있는 객체의 Name이 변경
                    User u = DataManager.users.Single
                    (x => x.Id == textBox1.Text);
                    u.Name = textBox2.Text;
                    try
                    {
                        // ID = 1 Name = 이동준이라는 사람이 책 빌렸는데
                        // Id = 1 사람이 김동준으로 이름을 바꿨다면
                        // book의 username 도 바꿔야한다
                        Book b = DataManager.books.Single(x => x.userId == textBox1.Text);
                        b.userName = textBox2.Text;
                        // 2번쨰
                        //Book b = DataManager.books.Single(delegate(Book x) { x.userId == textBox1})

                        // 3번째 메소드사용
                        //Book b = DataManager.books.Single(findBook);
                    }
                    catch (Exception)
                    {

                        
                    }
                }
                catch (Exception)
                {
                    MessageBox.Show("없는 ID!");

                }
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = DataManager.users;
                DataManager.Save();
            };
            button3.Click += (s, e) =>
            {
                try
                {
                    User u = DataManager.users.Single(x => x.Id == textBox1.Text);
                    DataManager.users.Remove(u);
                    dataGridView1.DataSource = null;
                    if (DataManager.users.Count > 0)
                    {
                        dataGridView1.DataSource = DataManager.users;
                    }
                    DataManager.Save();
                }
                catch (Exception)
                {


                }
            };
        }

        //private bool findBook(Book book)
        //{
        //    return book.userId == textBox1.Text;
        //}

        private void DataGridViewCellClick(object sender, DataGridViewCellEventArgs e)
        {
            User u = (sender as DataGridView).CurrentRow.DataBoundItem as User;
            textBox1.Text = u.Id;
            textBox2.Text = u.Name;
        }
        private void AddUser(object s, EventArgs e)
        {
            // Exists : 메소드를 매개변수로 하는 메소드
            // 괄호안에 들어가는 메소드는 리턴타입이 True False여한다
            // 여기서 x는 users에 있는 모든 사용자를 의미
            // 모든 사용자 중에서 textBox.Text랑 일치하는 Id를 가진사용자가
            // 한명이라도 있으면 true 리턴
            // 그러면 Exists 자체도 true를 리턴
            // x=>x.id==textBox1.Text : 이거 자체로 람다 형테 메소드
            // 매개변수는 User 타입 변수
            if (DataManager.users.Exists(x => x.Id == textBox1.Text))
            {
                MessageBox.Show("해당 ID 이미 있음");
            }
            else
            {
                User u = new User() { Id = textBox1.Text, Name = textBox2.Text };
                DataManager.users.Add(u);
                dataGridView1.DataSource = null;
                dataGridView1.DataSource = DataManager.users;
                DataManager.Save();
            }
        }


    }
}
