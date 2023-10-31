using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231031C__Exam4
{
   public class Test2
    {
        // int Powrer(int input) 매개변수 input 제곱해서 반환하는 메서드
        public static int Power(int input)
        {
            return input * input;
        }
        // int Powrer(int input, int count) 매개변수 input count 만큼 제곱해서 반환하는 메서드
        public static int Power(int input, int count)
        {
            int answer = 1;
            for (int i = 0; i < count; i++)
            {
                answer *= input;
            }
            return answer;
        }
        // int SumAll(int end) 0부터 end 사이의 모든 정수를 더하는 메서드
        public static int SumAll(int end)
        {
            int result = 0;
            for (int i = 0; i <= end; i++)
            {
                result += i;
            }
            return result;
        }
        // int SumAll(int start, int end) start부터 end 사이의 모든 정수를 더하는 메서드
        public static int SumAll(int start, int end)
        {
            int result = 0;
            for (int i = start; i <= end; i++)
            {
                result += i;
            }
            return result;
        }
    }
}
