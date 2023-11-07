using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Web.Script.Serialization;

namespace HeyKakaoMap
{
    //REST API 정보 불러오는 것 직관적인 API
    public class KakaoAPI
    {
        public static List<Locale> Search(string text)
        {
            List<Locale> list = new List<Locale>(); // 지역 정보를 불러옴
            string url = "https://dapi.kakao.com/v2/local/search/keyword.json";
            string query = $"{url}?query={text}";
            string restAPIKey = "1576c06ec0381e9e3566e057e7f0b18d";
            string Header = $"KakaoAK {restAPIKey}";
            WebRequest request = WebRequest.Create(query);
            request.Headers.Add("Authorization", Header);

            // 응답받기
            WebResponse response = request.GetResponse();
            Stream stream = response.GetResponseStream();   
            StreamReader reader = new StreamReader(stream,Encoding.UTF8);
            string json = reader.ReadToEnd();
            JavaScriptSerializer js = new JavaScriptSerializer();

            // dynamic : var랑 다르게
            // 선언한뒤에도 자료형을 자유롭게 바꿀 수 있다
            dynamic ex = "이현오";
            ex = 100;

            dynamic dob = js.Deserialize<dynamic>(json);
            dynamic docs = dob["documents"];
            object[] buf = docs;
            int length = buf.Length;

            for(int i = 0;i < length;i++)
            {
                string lname = docs[i]["place_name"];
                double x = double.Parse(docs[i]["x"]);
                double y = double.Parse(docs[i]["y"]);
                list.Add(new Locale(lname, y, x));
            }

            return list;
        }
        
    }
}
