#pragma once
#include "ThoiGian.h"

class SinhVien
{



	private:

		SinhVien* data;
		int length;

		char hoTen[50];
		char Mssv[50];
		ThoiGian ngaySinh;
		float DLT;
		float DTH;
		float DTB;

	public:




		void nhapSV()
		{
			cin.ignore();
			cout << "nhap ho ten : ";
			cin.getline(hoTen, 50);
			cout << "nhap mssv : ";
			cin.getline(Mssv, 50);
			cout << "nhap ngay sinh : " << endl;
			ngaySinh.nhapThoiGIan();
			cout << "nhap DLT : ";
			cin >> DLT;
			cout << "nhap DTH : ";
			cin >> DTH;
			DTB = (DLT + DTH) / 2;
			cin.ignore();
		}


		void xuatSV()
		{
			cout << "ho ten : " << hoTen << endl;
			cout << "mssv : " << Mssv << endl;
			cout << "ngay sinh : " << endl;
			ngaySinh.xuatThoiGian();
			cout << endl;
			cout << "DLT : " << DLT << endl;
			cout << "DTH : " << DTH << endl;
			cout << "DTB : " << DTB << endl;
		}



		void nhapMang()
		{
			cout << "nhap so luong sinh vien ";
			cin >> length;
			data = new SinhVien[length];
			for (int i = 0; i < length; i++)
			{
				cout << "sinh vien thu " << i + 1 << endl;
				data[i].nhapSV();

			}
		}


		void xuatMang()
		{
			for (int i = 0; i < length; i++)
			{
				data[i].xuatSV();
			}
		}

		//diem ly thuyet max, min

		int SV_DLT_max()
		{
			float max = data[0].DLT;
			int dem;
			for (int i = 0; i < length; i++)
			{
				if (data[i].DLT > max)
				{
					dem = i;
					max = data[i].DLT;

				}
			}
			return dem;
		}


		void xuat_hoten(int x)
		{
			cout << data[x].hoTen;
		}


		int SV_DLT_min()
		{
			float min = data[0].DLT;
			int dem = 0;
			for (int i = 0; i < length; i++)
			{
				if (data[i].DLT < min)
				{
					dem = i;
					min = data[i].DLT;

				}
			}
			return dem;
		}

		//diem thuc hanh max, min
		int SV_DTH_max()
		{
			float max = data[0].DTH;
			int dem;
			for (int i = 0; i < length; i++)
			{
				if (data[i].DTH > max)
				{
					dem = i;
					max = data[i].DTH;

				}
			}
			return dem;
		}


		int SV_DTH_min()
		{
			float min = data[0].DTH;
			int dem = 0;
			for (int i = 0; i < length; i++)
			{
				if (data[i].DTH < min)
				{
					dem = i;
					min = data[i].DTH;

				}
			}
			return dem;
		}



		//diem trung binh max, min
		int SV_DTB_max()
		{
			float max = data[0].DTB;
			int dem;
			for (int i = 0; i < length; i++)
			{
				if (data[i].DTB > max)
				{
					dem = i;
					max = data[i].DTB;

				}
			}
			return dem;
		}

		int SV_DTB_min()
		{
			float min = data[0].DLT;
			int dem = 0;
			for (int i = 0; i < length; i++)
			{
				if (data[i].DTB < min)
				{
					dem = i;
					min = data[i].DTB;

				}
			}
			return dem;
		}


		void Sv_lontuoi_nhat()
		{
			for (int i = 0; i < length; i++)
			{
				if (data[i].ngaySinh.soSanhThoiGian(data[i + 1].ngaySinh) == 2)
				{
					cout << data[i].hoTen << " ";
				}
			}
		}


		void Sv_nhotuoi_nhat()
		{
			for (int i = 0; i < length; i++)
			{
				if (data[i].ngaySinh.soSanhThoiGian(data[i + 1].ngaySinh) == 1)
				{
					cout << data[i].hoTen << " ";
				}
			}
		}



		void DLT_duoi5()
		{
			for (int i = 0; i < length; i++)
			{
				if (data[i].DLT < 5)
				{
					cout << " sinh vien duoi 5 : " << endl;
					cout << "ten : " << data[i].hoTen << endl;
					cout << "mssv : " << data[i].Mssv << endl;
				}
			}
		}

		void DTH_duoi5()
		{
			for (int i = 0; i < length; i++)
			{
				if (data[i].DTH < 5)
				{
					cout << " sinh vien duoi 5 : " << endl;
					cout << "ten : " << data[i].hoTen << endl;
					cout << "mssv : " << data[i].Mssv << endl;
				}
			}
		}


};















