using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo
{
    internal class HinhChuNhat : HinhHoc
    {
        public double A { get; set; }

        public double B { get; set; }

        public override void Nhap()
        {
            Console.Write("Nhập chiều dài: ");
            A = Convert.ToDouble(Console.ReadLine());
            Console.Write("Nhập chiều rộng: ");
            B = Convert.ToDouble(Console.ReadLine());
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN HÌNH CHỮ NHẬT ===");
            Console.WriteLine($"Độ dài 2 cạnh: {A} và {B}");
            Console.WriteLine($"Chu vi: {TinhCV()}");
            Console.WriteLine($"Diện tích: {TinhDT()}");
        }

        public override double TinhCV()
        {
            return (A + B) * 2;
        }

        public override double TinhDT()
        {
            return A * B;
        }
    }
}
