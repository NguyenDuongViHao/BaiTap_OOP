#pragma once

#include<iostream>
using namespace std;
#include<string>
#include"Sach.h"

class TieuThuyet : public Sach {
protected:
	string tenTacGia;
public:
	TieuThuyet() {
		maLoai = 3;
	}

	virtual void Nhap() {
		cout << "=== Nhap thong tin Tieu thuyet ===" << endl;
		Sach::Nhap();
		cout << "Nhap ten tac gia: ";
		cin.ignore();
		getline(cin, tenTacGia);
	}

	virtual void Xuat() {
		cout << "=== Thong tin Tieu thuyet ===" << endl;
		Sach::Xuat();
		cout << "Ten tac gia: " << tenTacGia << endl;
	}
};

