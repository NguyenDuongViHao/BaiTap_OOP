#pragma once

#include<iostream>
using namespace std;
#include<string>
#include"Sach.h"

class SachGiaoKhoa : public Sach {
protected:
	string tenMon;
	int namXuatBan;
public:
	SachGiaoKhoa() {
		maLoai = 1;
	}

	virtual void Nhap() {
		cout << "=== Nhap thong tin Sach giao khoa ===" << endl;
		Sach::Nhap();
		cout << "Nhap ten mon: ";
		cin.ignore();
		getline(cin, tenMon);
		cout << "Nam xuat ban: ";
		cin >> namXuatBan;
	}

	virtual void Xuat() {
		cout << "=== Thong tin Sach giao khoa ===" << endl;
		Sach::Xuat();
		cout << "Ten mon: " << tenMon << endl;
		cout << "Nam xuat ban: " << namXuatBan << endl;
	}
};

