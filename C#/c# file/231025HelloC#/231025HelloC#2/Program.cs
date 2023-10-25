using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231025HelloC_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // charAT(n)이랑 똑같음
            //Console.WriteLine("안녕하세요"[0]);
            
            // exam 1
            Console.Write("몇인치: ");
            int a = int.Parse(Console.ReadLine());
            // a가 1일때 2.54cm 을출력
            Console.WriteLine($"{a}inch = {a * 2.54}cm");
            
            // exam 2 
            Console.Write("몇 킬로: ");
            int b = int.Parse(Console.ReadLine());
            // b가 1일때 2.20462262pound 를 출력
            Console.WriteLine($"{b}kg = {b * 2.20462262}pound");

            // exam 3
            Console.Write("원의 반지름: ");
            int c = int.Parse(Console.ReadLine());
            // PI는 3.14
            // 둘레는  2*PI*반지름
            // 넓이는  PI*반지름*반지름
            double PI = 3.14;
            double round = 2 * PI * c;
            double area = PI * c * c;
            Console.WriteLine($"반지름 = {c}");
            Console.WriteLine($"둘레 = {round}");
            Console.WriteLine($"넓이 = {area}");




        }
    }
}
