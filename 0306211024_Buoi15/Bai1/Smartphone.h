#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"SanPham.h"
class Smartphone : public SanPham
{
protected:
	string tenDT;
	int IMEI;
	int namSX;
public:
	Smartphone()
	{
		maLoai = 2;
	}

	void Nhap()
	{
		cout << "--nhap thong tin SmartPhone--" << endl;
		SanPham::Nhap();
		cin.ignore();
		cout << "Nhap ten dien thoai: ";	
		getline(cin, tenDT);
		cout << "nhap so imei: ";
		cin >> IMEI;
		cout << "nhap nam san xuat: ";
		cin >> namSX;
	}

	void Xuat()
	{
		cout << "==Xuat thong tin SmartPhone==" << endl;
		SanPham::Xuat();
		cout << "Ten dien thoai: " << tenDT << endl;
		cout << "So IMEI: " << IMEI << endl;
		cout << "Nam san xuat: " << namSX << endl;
	}
};

