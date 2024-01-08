#pragma once
#include "Sach.h"
class TieuThuyet:public Sach
{
private:
	string tenTacGia;
public:

	TieuThuyet()
	{
		maLoai = 3;
	}

	void nhap()
	{
		Sach::nhap();
		cin.ignore();
		cout << "nhap ten tac gia : ";
		getline(cin, tenTacGia);
		
	}

	void xuat()
	{	
		Sach::xuat();
		cout << "ten tac gia : " << tenTacGia << endl;	
	}

	
};

