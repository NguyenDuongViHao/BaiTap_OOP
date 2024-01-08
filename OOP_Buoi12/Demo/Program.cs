using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;

            DSHinhHoc dSHinhHoc = new DSHinhHoc();
            dSHinhHoc.Nhap();

            Console.Clear();
            Console.WriteLine("Danh sách hình vừa nhập:");
            dSHinhHoc.Xuat();

            Console.WriteLine($"Tổng chu vi: {dSHinhHoc.TinhTongCV()}");
            Console.WriteLine($"Tổng diện tích: {dSHinhHoc.TinhTongDT()}");
        }
    }
}
