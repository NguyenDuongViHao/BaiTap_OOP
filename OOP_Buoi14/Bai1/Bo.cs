using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    class Bo : VatNuoi
    {
        public double LuongSua { get; set; }

        public override void Nhap()
        {
            Console.WriteLine("=== NHẬP CON BÒ ===");
            base.Nhap();
            Console.Write("Nhập lượng sữa: ");
            LuongSua = Convert.ToDouble(Console.ReadLine());
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN CON BÒ ===");
            base.Xuat();
            Console.WriteLine("Lượng sữa: " + LuongSua);
        }

        public override double TinhLuongThit()
        {
            return 0.8 * CanNang;
        }

        public override double TinhLuongSua()
        {
            return LuongSua;
        }
    }
}
