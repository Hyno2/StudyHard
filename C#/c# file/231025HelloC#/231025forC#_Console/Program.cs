using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231025forC__Console
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 1부터 100까지 합
            int sum = 0;
            for (int i = 1; i < 101; i++) {
                sum += i;
            }
            Console.WriteLine(sum);

            //// 가~ 힣까지
            //for(char i = '가'; i <= '힣'; i++)
            //{
            //    Console.Write(i);
            //}

            // foreach 문
            int[] numbers = { 10, 20, 30, 40, 50 };
            // i = numbers 안에 있는 값들을 각각 의미함
            // java의 for(int item : numbers)
            foreach(var i in numbers)
            {
                Console.WriteLine(i);
            }

        }
    }
}
