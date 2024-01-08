#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"SanPham.h"
class SmartTV : public SanPham
{
protected:
	string tenTV;
	int size;
public:
	SmartTV()
	{
		maLoai = 3;
	}

	void Nhap()
	{
		cout << "--nhap thong tin SmartTV--" << endl;
		SanPham::Nhap();
		cin.ignore();
		cout << "Nhap ten TV: ";
		getline(cin, tenTV);
		cout << "nhap kich thuoc man hinh ";
		cin >> size;
	}

	void Xuat()
	{
		cout << "==Xuat thong tin SmartTV==" << endl;
		SanPham::Xuat();
		cout << "Ten TV: " << tenTV << endl;
		cout << "Kich thuoc man hinh: " << size << endl;
	}
};

