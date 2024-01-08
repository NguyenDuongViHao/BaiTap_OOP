#pragma once
#include "Diem.h"

class DaGiac
{
private:
	int length;
	Diem* Dinh;
public:

	DaGiac()
	{
		length = 0;
		Dinh = new Diem[length];
	}

	DaGiac(const DaGiac& d)
	{
		length = d.length;
		Dinh = new Diem[length];
		for (int i = 0; i < length; i++)
		{
			Dinh[i] = d.Dinh[i];
		}
	}


	DaGiac(int n)
	{
		length = n;
		Dinh = new Diem[length];
		for (int i = 0; i < length; i++)
		{
			Diem();
		}
	}


	DaGiac(int n, Diem* arr)
	{
		length = n;
		Dinh = new Diem[length];
		for (int i = 0; i < length; i++)
		{
			Dinh[i] = arr[i];
		}
	}


	~DaGiac()
	{
		delete[]Dinh;
	}



		void nhapDinh()
		{
			cout << "nhap so luong dinh : ";
			cin >> length;
			Dinh = new Diem[length];
			for (int i = 0; i < length; i++)
			{
				cout << "nhap toa do dinh thu " << i + 1 << " ";
				Dinh[i].nhapDiem();
			}
		}


		void xuatDinh()
		{
			for (int i = 0; i < length; i++)
			{
				Dinh[i].xuatDiem();
			}
		}


		float tinhChuVi_daGiac()
		{
			float cv = Dinh[0].tinhKC(Dinh[length - 1]);

			for (int i = 0; i < length - 1; i++)
			{
				cv = cv + Dinh[i].tinhKC(Dinh[i + 1]);
			}
			return cv;
		}

};

