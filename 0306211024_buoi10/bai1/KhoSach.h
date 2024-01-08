#pragma once
#include "Sach.h"
#include "SachGiaoKhoa.h"
#include "TieuThuyet.h"
#include "TruyenTranh.h"

class KhoSach
{
private:
	int n;
	Sach** s;

public:

	void nhap()
	{
		cout << "nhap so luong : ";
		cin >> n;
		s = new Sach * [n];
		system("cls");
		for (int i = 0; i < n; i++)
		{
			cout << "sach thu " << i + 1 << endl;
			cout << "\t1. Sach Giao Khoa" << endl;
			cout << "\t2. Truyen Tranh" << endl;
			cout << "\t3. Tieu Thuyet" << endl;

			int luachon;
			cout << "chon loai sach";
			cin >> luachon;

			switch (luachon)
			{
			case 1:
			{
				s[i] = new SachGiaoKhoa();
			}break;

			case 2: 
			{
				s[i] = new TruyenTranh();
			}break;

			case 3:
			{
				s[i] = new TieuThuyet();
			}break;

			default:
				return;
			}

			s[i]->nhap();
			system("cls");
		}
	}

	void xuat()
	{
		for (int i = 0; i < n; i++)
		{
			s[i]->xuat();
			cout << endl;
		}
	}

	int tinhTongTien()
	{
		int tong = 0;
		for (int i = 0; i < n; i++)
		{
			tong = tong + s[i]->tinhTongTien();
		}
		return tong;
	}


	int tinhTongTien(int maLoai)
	{
		int tong = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i]->get_maloai() == maLoai)
			{
				tong = tong + s[i]->tinhTongTien();
			}		
		}
		return tong;
	}

	

};

