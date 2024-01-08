#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sach
{
protected:
	int maSach;
	string tenSach;
	int soLuongTonKho;
	int giaTien;
	int maLoai;
public:
	
	virtual int get_giatien()
	{
		return giaTien;
	}
	virtual int get_maloai()
	{
		return maLoai;
	}

	virtual void nhap()
	{
		cout << "nhap ma sach : ";
		cin >> maSach;
		cin.ignore();
		cout << "nhap ten sach : ";
		getline(cin, tenSach);
		cout << "so luong ton kho : ";
		cin >> soLuongTonKho;
		cout << "nhap gia tien : ";
		cin >> giaTien;
	}

	virtual void xuat()
	{
		cout << "ma sach : " << maSach << endl;

		cout << "ten sach : " << tenSach << endl;

		cout << "so luong ton kho : " << soLuongTonKho << endl;

		cout << "gia tien : " << giaTien << endl;

		cout << "tinh tong tien " << tinhTongTien() << endl;
	}

	virtual int tinhTongTien()
	{
		return soLuongTonKho * giaTien;
	}




};

