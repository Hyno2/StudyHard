using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231025IfC__Console
{
    internal class If_Exam
    {
        static void Main(string[] args)
        {
            // 삼항 연산자
            // 물음표와 콜론을 통하여 조건문을 한 줄로 표현하는 것
            int num = int.Parse(Console.ReadLine());
            String result = num % 2 == 0 ? "짝" : "짝이아님";
            // 수식 / 그 수식이 참인경우 " 그 수식이 거짓인 경우
            Console.WriteLine(result);
            // if문

            // switch문
            switch (num)
            {
                case 0:
                    Console.WriteLine("num값은 0");
                    break;
                case 1:
                case 2:
                case 3:
                    Console.WriteLine("num값은 1~ 3!!");
                    break;
                case 4:     // case 밑에 단 한줄의 코드가 있다면 그 밑에는 꼭 break가 필요
                            // Java, C 에선 밑에 break 없어도 돌아는감
                    Console.WriteLine("4");
                    break;
                case 5:
                    Console.WriteLine("5");
                    break;

                default:
                    break;
            }

            // 필요 자료형 2,4 문제에 사용된다
            // DateTime.Now.Year
            // DateTime.Now.Month

            // exam1
            // 사용자에게 태어난 년도를 입력받아 그해의 띠를 출력하는 프로그램을 작성하시오 if
            Console.Write("태어난 년도: ");
            int year = int.Parse(Console.ReadLine());
            if (year % 12 == 0)
            {
                Console.WriteLine("원숭이띠");
            }
            else if (year % 12 == 1)
            {
                Console.WriteLine("닭띠");
            }
            else if (year % 12 == 2)
            {
                Console.WriteLine("개띠");
            }
            else if (year % 12 == 3)
            {
                Console.WriteLine("돼지띠");
            }
            else if (year % 12 == 4)
            {
                Console.WriteLine("쥐띠");
            }
            else if (year % 12 == 5)
            {
                Console.WriteLine("소띠");
            }
            else if (year % 12 == 6)
            {
                Console.WriteLine("호랑이띠");
            }
            else if (year % 12 == 7)
            {
                Console.WriteLine("토끼띠");
            }
            else if (year % 12 == 8)
            {
                Console.WriteLine("용띠");
            }
            else if (year % 12 == 9)
            {
                Console.WriteLine("뱀띠");
            }
            else if (year % 12 == 10)
            {
                Console.WriteLine("말띠");
            }
            else if (year % 12 == 11)
            {
                Console.WriteLine("양띠");
            }

            //exam2
            //현재 년도가 무슨 띠인지 구하는 프로그램을 작성하시오 switch
            int year2 = DateTime.Now.Year;
            Console.Write("올해의 띠는 : ");
            switch (year2 % 12)
            {
                case 0:
                    Console.WriteLine("원숭이띠");
                    break;
                case 1:
                    Console.WriteLine("닭띠");
                    break;
                case 2:
                    Console.WriteLine("개띠");
                    break;
                case 3:
                    Console.WriteLine("돼지띠");
                    break;
                case 4:
                    Console.WriteLine("쥐띠");
                    break;
                case 5:
                    Console.WriteLine("소띠");
                    break;
                case 6:
                    Console.WriteLine("호랑이띠");
                    break;
                case 7:
                    Console.WriteLine("토끼띠");
                    break;
                case 8:
                    Console.WriteLine("용띠");
                    break;
                case 9:
                    Console.WriteLine("뱀띠");
                    break;
                case 10:
                    Console.WriteLine("말띠");
                    break;
                case 11:
                    Console.WriteLine("양띠");
                    break;
            }

            // exam3
            // 사용자에게 현재 월을 입력받아 계절을 출력하는 프로그램을 작성하시오 if문
            // 12,1,2 겨울 3,4,5 봄 6,7,8 여름 9,10,11 가을
            Console.Write("월을 입력해주세요 : ");
            int month = int.Parse(Console.ReadLine());
            if (month == 12 || month == 1 || month == 2)
            {
                Console.WriteLine("겨울");
            }
            else if (month == 3 || month == 4 || month == 5)
            {
                Console.WriteLine("봄");
            }
            else if (month == 6 || month == 7 || month == 8)
            {
                Console.WriteLine("여름");
            }
            else if (month == 9 || month == 10 || month == 11)
            {
                Console.WriteLine("가을");
            }

            //exam4
            //현재 월이 무슨 계절인지 구하는 프로그램을 작성하시오 switch
            int now_month = DateTime.Now.Month;
            Console.Write("현재 계절은 : ");
            switch (now_month)
            {
                case 1: Console.WriteLine("겨울"); break;
                case 2: Console.WriteLine("겨울"); break;
                case 3: Console.WriteLine("봄"); break;
                case 4: Console.WriteLine("봄"); break;
                case 5: Console.WriteLine("봄"); break;
                case 6: Console.WriteLine("여름"); break;
                case 7: Console.WriteLine("여름"); break;
                case 8: Console.WriteLine("여름"); break;
                case 9: Console.WriteLine("가을"); break;
                case 10: Console.WriteLine("가을"); break;
                case 11: Console.WriteLine("가을"); break;
                case 12: Console.WriteLine("겨울"); break;
            }

      

        }
    }
}
