#pragma once
#include<iostream>
using namespace std;
#include"SanPham.h"
#include "Laptop.h"
#include"Smartphone.h"
#include"SmartTV.h"

class KhoHang
{
private:
	int n;
	SanPham** ds;
public:

	void Nhap()
	{
		cout << "Nhap so luong san pham: ";
		cin >> n;
		ds = new SanPham * [n];
		system("cls");
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap thong tin san pham thu " << i + 1 << endl;
			cout << "\t1.LapTop" << endl;
			cout << "\t2.SmartPhone" << endl;
			cout << "\t3.SmartTV" << endl;
			cout << "chon loai san pham: ";
			int chon; 
			cin >> chon;
			switch (chon)
			{
				case 1: ds[i] = new Laptop(); break;
				case 2: ds[i] = new Smartphone(); break;
				case 3: ds[i] = new SmartTV(); break;
			}
			ds[i]->Nhap();
			system("cls");
		}
	}

	void Xuat()
	{
		cout << "--Kho hang gom co: " << endl;
		for (int i = 0; i < n; i++)
		{
			ds[i]->Xuat();
			cout << endl;
		}
	}

	int TinhTongTien()
	{
		int tong = 0;
		for (int i = 0; i < n; i++)
		{
			tong += ds[i]->TinhTongTien();
		}
		return tong;
	}

	int TinhTongTien(int maLoai) {
		int tong = 0;
		for (int i = 0; i < n; i++) 
		{
			if (ds[i]->Get_MaLoai() == maLoai) 
			{
				tong += ds[i]->TinhTongTien();
			}
		}
		return tong;
	}

	SanPham* TimSpReNhat()
	{
		SanPham* min = ds[0];
		for (int i = 0; i < n; i++)
		{
			if (ds[i]->Get_GiaTien() < min->Get_GiaTien())
			{
				min = ds[i];
			}
		}
		return min;
	}
};

