using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo
{
    internal class HinhVuong : HinhChuNhat
    {
        public override void Nhap()
        {
            Console.Write("Nhập độ dài cạnh: ");
            A = Convert.ToDouble(Console.ReadLine());
            B = A;
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN HÌNH VUÔNG ===");
            Console.WriteLine($"Độ dài cạnh: {A}");
            Console.WriteLine($"Chu vi: {TinhCV()}");
            Console.WriteLine($"Diện tích: {TinhDT()}");
        }
    }
}
