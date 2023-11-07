using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231107C__ParkingCarManager
{
    public class ParkingCar
    {
        public string parkingSpot { get; set; } // 주차 공간
        public string carNumber { get; set; } // 차 번호
        public string driverName { get; set; } // 차주 이름
        public string phoneNumber { get; set; } // 차주 연락처
        public DateTime parkingTime { get; set; } // 주차 시간
    }
}
