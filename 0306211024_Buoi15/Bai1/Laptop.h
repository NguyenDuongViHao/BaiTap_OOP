#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"SanPham.h"
class Laptop : public SanPham
{
protected:
	string tenLapTop;
	int dungLuong;
	int size;

public:
	Laptop()
	{
		maLoai = 1;
	}

	void Nhap()
	{
		cout << "--nhap thong tin lap top--" << endl;
		SanPham::Nhap();
		cin.ignore();
		cout << "Nhap ten LapTop: ";
		getline(cin, tenLapTop);
		cout << "nhap dung luong o dia: ";
		cin >> dungLuong;
		cout << "nhap kich thuoc man hinh: ";
		cin >> size;
	}

	void Xuat()
	{
		cout << "==Xuat thong tin LapTop==" << endl;
		SanPham::Xuat();
		cout << "Ten LapTop: " << tenLapTop << endl;
		cout << "Dung luong o dia: " << dungLuong << endl;
		cout << "Kich thuoc man hinh: " << size << endl;
	}

};

