using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    class Heo : VatNuoi
    {
        public override void Nhap()
        {
            Console.WriteLine("=== NHẬP CON HEO ===");
            base.Nhap();
        }

        public override void Xuat()
        {
            Console.WriteLine("=== THÔNG TIN CON HEO ===");
            base.Xuat();
        }

        public override double TinhLuongThit()
        {
            return 0.6 * CanNang;
        }
    }
}
