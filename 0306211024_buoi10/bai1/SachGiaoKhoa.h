#pragma once
#include "Sach.h"


class SachGiaoKhoa:public Sach
{
private:
	string tenMon;
	int namXB;
public:

	SachGiaoKhoa()
	{
		maLoai = 1;
	}

	void nhap()
	{
		Sach::nhap();
		cin.ignore();
		cout << "nhap ten mon : ";
		getline(cin, tenMon);
		cout << "nhap nam xuat ban : ";
		cin >> namXB;
	
		
	}

	void xuat()
	{
		Sach::xuat();
		
		cout << "ten mon : " << tenMon << endl;
		
		cout << "nam xuat ban : " << namXB << endl;
		
	}

	
};

