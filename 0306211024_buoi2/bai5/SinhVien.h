#pragma once
#include "thoigian.h"


class SinhVien
{
private:
	char Hoten[50];
	int Mssv;
	ThoiGian NgaySinh;
	float DLT;
	float DTH;
	float TB;

public:

	void nhapSV()
	{
			cout << "nhap ho ten : ";
			cin.getline(Hoten, 50);
			cout << "nhap MSSV : ";
			cin >> Mssv;
			cout << "nhap Ngay Sinh : " << endl;
			NgaySinh.nhapThoiGIan();
			cout << "nhap DLT : ";
			cin >> DLT;
			cout << "nhap DTH : ";
			cin >> DTH;
			TB = (DLT + DTH) / 2;
			cin.ignore();
	}


	void xuatSV()
	{
		cout << "ho ten : " << Hoten << endl;
		cout << "mssv : " << Mssv << endl;
		cout << "ngay sinh : " << endl;
		NgaySinh.xuatThoiGian();
		cout << endl;
		cout << "DLT : " << DLT << endl;
		cout << "DTH : " << DTH << endl;

		cout << "DTB : " << TB << endl;
	}


	void DiemTB_max(SinhVien a)
	{
		if (TB > a.TB)
		{
			cout << Hoten;
		}
		else
		{
			cout << a.Hoten;
		}
	}


	void SV_LonTuoi(SinhVien a)
	{
		if (NgaySinh.soSanhThoiGian(a.NgaySinh) == 1)
		{
			cout << a.Hoten;
		}
		if (NgaySinh.soSanhThoiGian(a.NgaySinh) == 2)
		{
			cout << Hoten;
		}
		if (NgaySinh.soSanhThoiGian(a.NgaySinh) == 3)
		{
			cout << Hoten << " va " << a.Hoten;
		}

	}
};

