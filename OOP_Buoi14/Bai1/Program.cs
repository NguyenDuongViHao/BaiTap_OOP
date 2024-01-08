using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;

            NongTrai n = new NongTrai();
            n.Nhap();
            n.Xuat();

            Console.WriteLine("Tổng lượng thịt: " + n.TinhTongLuongThit());
            Console.WriteLine("Tổng lượng sữa: " + n.TinhTongLuongSua());
            Console.WriteLine("Tổng lượng trứng: " + n.TinhTongLuongTrung());
            Console.WriteLine("Vật nuôi nặng nhất: ");
            n.TimVatNuoiNangNhat().Xuat();
        }
    }
}
