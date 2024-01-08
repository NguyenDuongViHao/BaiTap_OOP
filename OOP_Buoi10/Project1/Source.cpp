#include<iostream>
using namespace std;
#include"KhoSach.h"

void main() {
	KhoSach k;
	k.Nhap();

	k.Xuat();

	cout << "Tong tien: " << k.TinhTongTien() << endl;
	cout << "Tong tien Sach giao khoa: " << k.TinhTongTien(1) << endl;
	cout << "Tong tien Truyen tranh: " << k.TinhTongTien(2) << endl;
	cout << "Tong tien Tieu thuyet: " << k.TinhTongTien(3) << endl;
	cout << "Thong tin cuon sach re nhat:" << endl;
	k.TimSachReNhat()->Xuat();
	cout << endl;
}