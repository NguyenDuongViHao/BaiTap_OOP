#pragma once
#include "Header.h"


class DaGiac
{
private:
	int length;
	Diem* Dinh;
public:

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

		for (int i = 0; i < length-1; i++)
		{
			cv = cv + Dinh[i].tinhKC(Dinh[i + 1]);
		}
		return cv;
	}
};

