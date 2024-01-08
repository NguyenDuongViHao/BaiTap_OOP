#pragma once
#include "Sach.h"

class TruyenTranh:public Sach
{
private:
	int namXB;
public:

	TruyenTranh()
	{
		maLoai = 2;
	}

	void nhap()
	{
		Sach::nhap();
		cout << "nhap nam xuat ban : ";
		cin >> namXB;	
	}

	void xuat()
	{
		Sach::xuat();
		cout << "nam xuat ban : " << namXB << endl;

	}


};

