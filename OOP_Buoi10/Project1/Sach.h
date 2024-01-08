#pragma once
#include<iostream>
using namespace std;
#include<string>

class Sach {
protected:
	int maSach;
	string tenSach;
	int tonKho;
	int giaTien;
	int maLoai;
public:
	virtual int Get_GiaTien() { return giaTien; }
	virtual int Get_MaLoai() { return maLoai; }

	virtual void Nhap() {
		cout << "Nhap ma sach: ";
		cin >> maSach;
		cout << "Nhap ten sach: ";
		cin.ignore();
		getline(cin, tenSach);
		cout << "Nhap so luong ton kho: ";
		cin >> tonKho;
		cout << "Nhap gia tien: ";
		cin >> giaTien;
	}

	virtual void Xuat() {
		cout << "Ma sach: " << maSach << endl;
		cout << "Ten sach: " << tenSach << endl;
		cout << "So luong ton kho: " << tonKho << endl;
		cout << "Gia tien: " << giaTien << endl;
	}

	virtual int TinhTongTien() {
		return tonKho * giaTien;
	}
};

