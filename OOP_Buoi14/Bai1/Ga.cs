using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    class Ga : VatNuoi
    {
        public int LuongTrung { get; set; }

        public override void Nhap()
        {
            Console.WriteLine("=== NHẬP CON GÀ ===");
            base.Nhap();
            Console.Write("Nhập lượng trứng: ");
            LuongTrung = Convert.ToInt32(Console.ReadLine());
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN CON GÀ ===");
            base.Xuat();
            Console.WriteLine("Lượng trứng: " + LuongTrung);
        }

        public override double TinhLuongThit()
        {
            return 0.75 * CanNang;
        }

        public override int TinhLuongTrung()
        {
            return LuongTrung;
        }
    }
}
