using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo
{
    internal class HinhTron : HinhElip
    {
        public override void Nhap()
        {
            Console.Write("Nhập bán kính: ");
            R1 = Convert.ToDouble(Console.ReadLine());
            R2 = R1;
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN HÌNH TRÒN ===");
            Console.WriteLine($"Độ dài bán kính: {R1}");
            Console.WriteLine($"Chu vi: {TinhCV()}");
            Console.WriteLine($"Diện tích: {TinhDT()}");
        }
    }
}
