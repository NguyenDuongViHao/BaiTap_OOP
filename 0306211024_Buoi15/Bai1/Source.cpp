#include<iostream>
using namespace std;
#include "KhoHang.h"

void main()
{
	KhoHang a;
	a.Nhap();

	a.Xuat();

	cout << "Tong tien: " << a.TinhTongTien() << endl;
	cout << "Tong tien LapTop: " << a.TinhTongTien(1) << endl;
	cout << "Tong tien SmartPhone: " << a.TinhTongTien(2) << endl;
	cout << "Tong Tien SmartTV: " << a.TinhTongTien(3) << endl;
	cout << "-thong tin san pham re nhat: " << endl;
	a.TimSpReNhat()->Xuat();
	cout << endl;

	system("pause");
}