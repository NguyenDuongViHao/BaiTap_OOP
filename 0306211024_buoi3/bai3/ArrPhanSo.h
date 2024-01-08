#pragma once
#include<iostream>
using namespace std;




int UCLN(int a, int b);

class ArrPhanSo
{

	private:
		int length;
		ArrPhanSo* data;
		int tuso;
		int mauso;
	public:

		void Nhap()
		{
			cout << "nhap tu so : ";
			cin >> tuso;

			cout << "nhap mau so: ";
			cin >> mauso;
		}

		void Xuat()
		{
			cout << tuso << "/" << mauso << endl;
		}





		ArrPhanSo rutgon()
		{
			int uc = UCLN(tuso, mauso);
			tuso = tuso / uc;
			mauso = mauso / uc;
			return *this;
		}

		ArrPhanSo TongPs(ArrPhanSo b)
		{
			ArrPhanSo tong;
			//tong.tuso = 0;
			//tong.mauso = 1;
			tong.tuso = tuso * b.mauso + mauso * b.tuso;
			tong.mauso = mauso * b.mauso;
			return tong.rutgon();

		}


		ArrPhanSo TichPs(ArrPhanSo b)
		{
			ArrPhanSo tich;
			tich.tuso = tuso * b.tuso;
			tich.mauso = mauso * b.mauso;
			return tich.rutgon();

		}


		void nhapMang()
		{
			cout << "nhap so luong : ";
			cin >> length;
			data = new ArrPhanSo[length];
			for (int i = 0; i < length; i++)
			{
				cout << "phan so thu nhat " << endl;
				data[i].Nhap();

			}
		}



		void xuatMang()
		{
			for (int i = 0; i < length; i++)
			{
				data[i].Xuat();
			}
		}



		ArrPhanSo TongArrPs()
		{
			ArrPhanSo tong;

			tong.tuso = 0;
			tong.mauso = 1;

			for (int i = 0; i < length; i++)
			{

				tong = tong.TongPs(data[i]);

			}
			return tong;
		}



		ArrPhanSo TichArrPs()
		{
			ArrPhanSo tich;

			tich.tuso = 1;
			tich.mauso = 1;

			for (int i = 0; i < length; i++)
			{

				tich = tich.TichPs(data[i]);

			}
			return tich;
		}


		ArrPhanSo phanso_max()
		{
			ArrPhanSo max_ps = data[0];
			int x, z;

			for (int i = 0; i < length; i++)
			{
				x = max_ps.tuso * data[i].mauso;
				z = data[i].tuso * max_ps.mauso;
				if (x < z)
				{
					max_ps = data[i];
				}

			}
			return max_ps;
		}


		ArrPhanSo phanso_min()
		{
			ArrPhanSo min_ps = data[0];
			int x, z;

			for (int i = 0; i < length; i++)
			{
				x = min_ps.tuso * data[i].mauso;
				z = data[i].tuso * min_ps.mauso;
				if (x > z)
				{
					min_ps = data[i];
				}

			}
			return min_ps;
		}


};

	int UCLN(int a, int b)
	{
		a = abs(a);
		b = abs(b);
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		return a;
	}




