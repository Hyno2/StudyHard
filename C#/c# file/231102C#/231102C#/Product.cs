using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231102C_
{
    public class Product : IComparable<Product>
    {
        public string name {  get; set; }
        public int price {  get; set; }

        public int CompareTo(Product other)
        {
            // CompareTo의 결과가 양수 음수냐에 따라 어디로 정렬할지 결정이된다
            // Sort함수에서 내부적으로 CompareTo를 호출함
            // 구체적으로 어디서 언제 어떻게 호출하는지는 모름
            return price.CompareTo(other.price); // price와 다른 price들을 비교해준다
            //throw new NotImplementedException();
        }

        public override string ToString()
        {
            //return base.ToString();
            return "제품명: " + name + "가격: "+ price;
        }
    }
}
