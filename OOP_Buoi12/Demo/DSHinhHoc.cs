using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Demo
{
    internal class DSHinhHoc
    {
        public List<HinhHoc> DS { get; set; }

        public DSHinhHoc()
        {
            DS = new List<HinhHoc>();
        }

        public void Nhap()
        {
            while (true)
            {
                Console.Clear();
                Console.WriteLine("1. Hình chữ nhật");
                Console.WriteLine("2. Hình vuông");
                Console.WriteLine("3. Hình elip");
                Console.WriteLine("4. Hình tròn");
                Console.WriteLine("0. KẾT THÚC");
                Console.Write("Chọn loại hình: ");
                int luaChon = Convert.ToInt32(Console.ReadLine());
                if (luaChon == 0)
                {
                    break;
                }
                HinhHoc h = new HinhChuNhat();
                switch (luaChon)
                {
                    case 1:
                        h = new HinhChuNhat();
                        break;
                    case 2:
                        h = new HinhVuong();
                        break;
                    case 3:
                        h = new HinhElip();
                        break;
                    case 4:
                        h = new HinhTron();
                        break;
                }
                h.Nhap();
                DS.Add(h);
            }            
        }

        public void Xuat()
        {
            foreach (var item in DS)
            {
                item.Xuat();
                Console.WriteLine();
            }
        }

        public double TinhTongCV()
        {
            double tong = 0;
            foreach (var item in DS)
            {
                tong += item.TinhCV();
            }
            return tong;
        }

        public double TinhTongDT()
        {
            double tong = 0;
            foreach (var item in DS)
            {
                tong += item.TinhDT();
            }
            return tong;
        }
    }
}
