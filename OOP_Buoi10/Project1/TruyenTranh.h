#pragma once

#include<iostream>
using namespace std;
#include"Sach.h"

class TruyenTranh : public Sach {
protected:
	int namXuatBan;
public:
	TruyenTranh() {
		maLoai = 2;
	}

	virtual void Nhap() {
		cout << "=== Nhap thong tin Truyen tranh ===" << endl;
		Sach::Nhap();
		cout << "Nam xuat ban: ";
		cin >> namXuatBan;
	}

	virtual void Xuat() {
		cout << "=== Thong tin Truyen tranh ===" << endl;
		Sach::Xuat();
		cout << "Nam xuat ban: " << namXuatBan << endl;
	}
};

