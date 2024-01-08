#pragma once
#include <iostream>
using namespace std;



int UCLN(int a, int b);


class PhanSo
{
private:
	int tuso;
	int mauso;
public:


	PhanSo()
	{
		tuso = 0;
		mauso = 1;
	}

	PhanSo(PhanSo& ps)
	{
		tuso = ps.tuso;
		mauso = ps.mauso;
	}


	PhanSo(int tuso, int mauso)
	{
		this->tuso = tuso;
		this->mauso = mauso;
	}
	

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





	PhanSo rutgon()
	{
		int uc = UCLN(tuso, mauso);
		tuso = tuso / uc;
		mauso = mauso / uc;
		return *this;
	}

	PhanSo TongPs(PhanSo b)
	{
		PhanSo tong;	
		tong.tuso = tuso * b.mauso + mauso * b.tuso;
		tong.mauso = mauso * b.mauso;
		tong.rutgon();
		return tong;
	}


	PhanSo TichPs(PhanSo b)
	{
		PhanSo tich;
		tich.tuso = tuso * b.tuso;
		tich.mauso = mauso * b.mauso;
		tich.rutgon();
		return tich;
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


