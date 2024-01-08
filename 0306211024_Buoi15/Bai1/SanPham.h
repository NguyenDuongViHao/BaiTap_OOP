#pragma once
#include<iostream>
using namespace std;
#include<string>
class SanPham
{
protected:
	int maSo;
	int tonKho;
	int giaTien;
	int maLoai;
public:
	virtual int Get_GiaTien() { return giaTien; }
	virtual int Get_MaLoai() { return maLoai; }

	virtual void Nhap() {
		cout << "Nhap ma so ";
		cin >> maSo;
		cout << "Nhap so luong ton kho: ";
		cin >> tonKho;
		cout << "Nhap gia tien: ";
		cin >> giaTien;
	}

	virtual void Xuat() {
		cout << "Ma so: " << maSo << endl;
		cout << "So luong ton kho: " << tonKho << endl;
		cout << "Gia tien: " << giaTien << endl;
	}

	virtual int TinhTongTien() {
		return tonKho * giaTien;
	}
};

