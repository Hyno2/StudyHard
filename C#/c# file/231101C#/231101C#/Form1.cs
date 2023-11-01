using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101C_
{
    public partial class Form1 : Form 
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Animal a = new Animal();
            a.age = 10;
            label1.Text = "나이" + a.age;
            a.eat();
            a.sleep();
            //a.born(); // protected 이므로 외부(상속받지않은클래스)에서 호출 불가

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Cat c = new Cat(); // 생성자안에서 자동으로 born호출
            c.age = 10;
            label2.Text = "고양이 나이"+c.age;
            c.eat();
            c.sleep();
            c.meow();
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Dog d = new Dog();// 생성자안에서 자동으로 born호출
            d.age = 12;
            d.color = "White";
            label3.Text = "개의 나이" + d.age + "\n"; 
            label3.Text += "개의 털 색" + d.color;
            d.eat();
            d.sleep();
            d.bark();
           

        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<Animal> zoo = new List<Animal>();
            zoo.Add(new Animal());
            zoo.Add(new Animal());
            zoo.Add(new Dog());
            zoo.Add(new Dog());
            zoo.Add(new Cat());
            zoo.Add(new Cat());

            foreach(var item in zoo)
            {
                item.sleep();
                item.eat();
                if(item is Cat) // 타입체크 : is
                {
                    (item as Cat).meow();   // 형변환 : as
                }
                if(item is Dog) {
                (item as Dog).bark();
                }
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            // 다형성 : 왼쪽 = 오른쪽의 관계가
            //          오른쪽 is 왼쪽
            // ex       핸드폰 p = new 스마트폰
            // ex       스마트폰 is 핸드폰 O
            //          핸드폰 is 스마트폰 X
            Animal a = new Dog(); // Dog is Animal
            Animal b = new Cat(); // Cat is Animal

            a.age = 1;
            a.eat();
            a.sleep();
            // a는 Dog인스턴스이므로 Dog로형변환이 가능하다
            // bark 는 Dog에만 있기에 형변환 해야함
            ((Dog)a).bark();
            // b는 Cat인스턴스이므로 Cat로 형변환가능
            // meow 는 Cat에만 있기에 형변환 해야함
            ((Cat)b).meow(); 

            // 형변환 2번째 방법
            if(b is Dog)
            {
                // 여기서도 세가지 방법이있다
                //1
                ((Dog)b).bark();
                //2
                (b as Dog).bark();
                //3
                var test = b as Dog;
                if(test != null)
                { test.bark(); }
            }

            List<Animal> animals = new List<Animal>()
            {
                new Dog(), new Cat(), new Dog() 
            };
            
            foreach(var item in animals)
            {
                item.eat();
                item.sleep();
                if(item is Dog)
                {
                    (item as Dog).bark();
                }
                if( item is Cat)
                {
                    (item as Cat).meow();
                }
            }

            





        }

        private void button6_Click(object sender, EventArgs e)
        {
            // Age는 인스턴스 별로 다들 각자 다름
            // count는 Age, Dog,Cat 이 공유하고있다
            Cat cat = new Cat();   
            Dog dog = new Dog();
            Animal animal = new Animal();
            cat.age = 5;
            dog.age = 7;
            animal.age = 50;
            Cat.count++;
            Dog.count++;
            Animal.count++;
            MessageBox.Show("count값 : "+ Animal.count);
            MessageBox.Show("count값 : "+ Cat.count);
            MessageBox.Show("count값 : "+ Animal.count);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            new Animal().wash();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Cat c = new Cat();
            
            (c as Animal).wash();
            
        }

        private void button9_Click(object sender, EventArgs e)
        {
            new Dog().wash();
        }
    }
}
