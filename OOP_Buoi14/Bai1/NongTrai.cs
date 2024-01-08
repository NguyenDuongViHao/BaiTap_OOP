using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai1
{
    class NongTrai
    {
        private List<VatNuoi> DSVatNuoi;

        public NongTrai()
        {
            DSVatNuoi = new List<VatNuoi>();
        }

        public void Nhap()
        {
            Console.Write("Số lượng muốn nhập: ");
            int n = Convert.ToInt32(Console.ReadLine());
            Console.Clear();
            for (int i = 0; i < n; i++)
            {
                Console.WriteLine("NHẬP VẬT NUÔI THỨ " + (i + 1));
                Console.WriteLine("1. Bò");
                Console.WriteLine("2. Heo");
                Console.WriteLine("3. Gà");
                Console.Write("Chọn loại vật nuôi: ");
                int luaChon = Convert.ToInt32(Console.ReadLine());
                VatNuoi v = new VatNuoi();
                switch (luaChon)
                {
                    case 1: v = new Bo(); break;
                    case 2: v = new Heo(); break;
                    case 3: v = new Ga(); break;
                }
                v.Nhap();
                DSVatNuoi.Add(v);
                Console.Clear();
            }
        }

        public void Xuat()
        {
            foreach (var item in DSVatNuoi)
            {
                item.Xuat();
                Console.WriteLine();
            }
        }

        public double TinhTongLuongThit()
        {
            //double tong = 0;
            //foreach (var item in DSVatNuoi)
            //{
            //    tong += item.TinhLuongThit();
            //}
            //return tong;

            return DSVatNuoi.Sum(i => i.TinhLuongThit());
        }

        public double TinhTongLuongSua()
        {
            return DSVatNuoi.Sum(i => i.TinhLuongSua());
        }

        public int TinhTongLuongTrung()
        {
            return DSVatNuoi.Sum(i => i.TinhLuongTrung());
        }

        public VatNuoi TimVatNuoiNangNhat()
        {
            //VatNuoi max = DSVatNuoi[0];
            //foreach (var item in DSVatNuoi)
            //{
            //    if (item.CanNang > max.CanNang)
            //    {
            //        max = item;
            //    }
            //}
            //return max;

            double maxCanNang = DSVatNuoi.Max(i => i.CanNang);
            return DSVatNuoi.Where(i => i.CanNang == maxCanNang).FirstOrDefault();
        }
    }
}
