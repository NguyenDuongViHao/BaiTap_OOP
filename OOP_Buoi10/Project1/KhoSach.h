#pragma once

#include<iostream>
using namespace std;
#include"Sach.h"
#include"SachGiaoKhoa.h"
#include"TruyenTranh.h"
#include"TieuThuyet.h"

class KhoSach {
private:
	int n;
	Sach** ds;
public:
	void Nhap() {
		cout << "Nhap so luong dau sach: ";
		cin >> n;
		ds = new Sach * [n];
		system("cls");
		for (int i = 0; i < n; i++) {
			cout << "Nhap thong tin cuon sach thu " << i + 1 << ":" << endl;
			cout << "\t1. Sach giao khoa" << endl;
			cout << "\t2. Truyen tranh" << endl;
			cout << "\t3. Tieu thuyet" << endl;
			cout << "Chon loai sach: ";
			int luaChon;
			cin >> luaChon;
			switch (luaChon) {
			case 1: ds[i] = new SachGiaoKhoa(); break;
			case 2: ds[i] = new TruyenTranh(); break;
			case 3: ds[i] = new TieuThuyet(); break;
			}
			ds[i]->Nhap();
			system("cls");
		}
	}

	void Xuat() {
		cout << "Kho sach gom co:" << endl << endl;
		for (int i = 0; i < n; i++) {
			ds[i]->Xuat();
			cout << endl;
		}
	}

	int TinhTongTien() {
		int tong = 0;
		for (int i = 0; i < n; i++) {
			tong += ds[i]->TinhTongTien();
		}
		return tong;
	}

	int TinhTongTien(int maLoai) {
		int tong = 0;
		for (int i = 0; i < n; i++) {
			if (ds[i]->Get_MaLoai() == maLoai) {
				tong += ds[i]->TinhTongTien();
			}
		}
		return tong;
	}

	Sach* TimSachReNhat() {
		Sach* min = ds[0];
		for (int i = 1; i < n; i++) {
			if (ds[i]->Get_GiaTien() < min->Get_GiaTien()) {
				min = ds[i];
			}
		}
		return min;
	}


	
};

