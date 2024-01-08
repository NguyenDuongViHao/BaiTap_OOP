#pragma once
#include "PhanSo.h"
class ArrPhanSo
{

private:
	int length;
	PhanSo* Mps;
public:

	ArrPhanSo()
	{
		length = 0;
		Mps = new PhanSo[length];
	}

	ArrPhanSo(const ArrPhanSo& ps)
	{
		length = ps.length;
		Mps = new PhanSo[length];
		for (int i = 0; i < length; i++)
		{
			Mps[i] = ps.Mps[i];
		}
	}



	ArrPhanSo(int n)
	{
		length = n;
		Mps = new PhanSo[length];
		for (int i = 0; i < length; i++)
		{
			PhanSo();
		}
	}


	ArrPhanSo(int n, PhanSo* arr)
	{
		length = n;
		Mps = new PhanSo[length];
		for (int i = 0; i < length; i++)
		{
			Mps[i] = arr[i];
		}
	}

	~ArrPhanSo()
	{
		delete[]Mps;
	}


	void nhapArr()
	{
		cout << "nhap so luong : ";
		cin >> length;
		Mps = new PhanSo[length];

		for (int i = 0; i < length; i++)
		{
			cout << "nhap phan so thu " << i + 1 << endl;
			Mps[i].Nhap();
		}
	}


	void xuatArr()
	{
		for (int i = 0; i < length; i++)
		{
			Mps[i].Xuat();
		}
	}	
};

