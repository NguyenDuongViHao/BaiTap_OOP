using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    class VatNuoi
    {
        public int MaSo { get; set; }

        public string Ten { get; set; }

        public bool GioiTinh { get; set; }  // true là đực, false là cái

        public double CanNang { get; set; }

        public virtual void Nhap()
        {
            Console.Write("Nhập mã số: ");
            MaSo = Convert.ToInt32(Console.ReadLine());
            Console.Write("Nhập tên: ");
            Ten = Console.ReadLine();
            Console.Write("Nhập giới tính (1 là đực, 0 là cái): ");
            GioiTinh = Convert.ToBoolean(Convert.ToInt32(Console.ReadLine()));
            Console.Write("Nhập cân nặng: ");
            CanNang = Convert.ToDouble(Console.ReadLine());
        }

        public virtual void Xuat()
        {
            Console.WriteLine("Mã số: " + MaSo);
            Console.WriteLine("Tên: " + Ten);
            Console.WriteLine("Giới tính: " + (GioiTinh ? "Đực" : "Cái"));
            Console.WriteLine("Cân nặng: " + CanNang);
        }

        public virtual double TinhLuongThit()
        {
            return 0;
        }

        public virtual double TinhLuongSua()
        {
            return 0;
        }

        public virtual int TinhLuongTrung()
        {
            return 0;
        }
    }
}
