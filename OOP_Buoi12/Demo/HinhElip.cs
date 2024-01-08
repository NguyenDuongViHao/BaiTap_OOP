using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo
{
    internal class HinhElip : HinhHoc
    {
        public double R1 { get; set; }

        public double R2 { get; set; }

        public override void Nhap()
        {
            Console.Write("Nhập bán trục lớn: ");
            R1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Nhập bán trục nhỏ: ");
            R2 = Convert.ToDouble(Console.ReadLine());
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN HÌNH ELIP ===");
            Console.WriteLine($"Độ dài 2 bán trục: {R1} và {R2}");
            Console.WriteLine($"Chu vi: {TinhCV()}");
            Console.WriteLine($"Diện tích: {TinhDT()}");
        }

        public override double TinhCV()
        {
            return 2 * Math.PI * Math.Sqrt((R1 * R1 + R2 * R2) / 2);
        }

        public override double TinhDT()
        {
            return Math.PI * R1 * R2;
        }
    }
}
