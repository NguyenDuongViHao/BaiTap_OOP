#include "SinhVien.h"
#include <conio.h>


void main()
{
	SinhVien sv;
	int chon;

	do {
		cout << endl;
		cout << "1.nhap sv " << endl;
		cout << "2.xuat sv " << endl;
		cout << "3.diem li thuyet cao nhat " << endl;
		cout << "4.diem li thuyet thap nhat " << endl;
		cout << "5.diem thuc hanh cao nhat " << endl;
		cout << "6.diem thuc hanh thap nhat " << endl;
		cout << "7.diem trung binh cao nhat " << endl;
		cout << "8.diem trung binh thap nhat " << endl;
		cout << "9.sinh vien lon tuoi nhat " << endl;
		cout << "10.sinh vien nho tuoi nhat " << endl;
		cout << "11.diem li thuyet duoi 5" << endl;
		cout << "12.diem thuc hanh duoi 5" << endl;

		cout << "chon chuc nang  : ";
		cin >> chon;


		switch (chon)
		{
		case 1:
		{
			sv.nhapMang();
			cout << endl;
		}break;

		case 2:
		{
			cout << "xuat sinh vien " << endl;
			sv.xuatMang();
		}break;


		case 3:
		{
			cout << endl;
			cout << "Sinh vien co DLT cao nhat : ";
			int kq = sv.SV_DLT_max();
			sv.xuat_hoten(kq);


		}break;

		case 4:
		{

			cout << endl;
			cout << "Sinh vien co DLT cao nhat : ";
			int kq = sv.SV_DLT_min();
			sv.xuat_hoten(kq);

		}break;


		case 5:
		{
			cout << endl;
			cout << "Sinh vien co DTH cao nhat : ";
			int kq = sv.SV_DTH_max();
			sv.xuat_hoten(kq);


		}break;


		case 6:
		{
			cout << endl;
			cout << "Sinh vien co DTH cao nhat : ";
			int kq = sv.SV_DTH_min();
			sv.xuat_hoten(kq);


		}break;


		case 7:
		{
			cout << endl;
			cout << "Sinh vien co DTB cao nhat : ";
			int kq = sv.SV_DTB_max();
			sv.xuat_hoten(kq);



		}break;

		case 8:
		{
			cout << endl;
			cout << "Sinh vien co DTB cao nhat : ";
			int kq = sv.SV_DTB_min();
			sv.xuat_hoten(kq);


		}break;


		case 9:
		{
			cout << endl;
			sv.Sv_lontuoi_nhat();
		}break;


		case 10:
		{
			cout << endl;
			sv.Sv_nhotuoi_nhat();
		}break;


		case 11:
		{
			cout << endl;
			sv.DLT_duoi5();
		}break;


		case 12:
		{
			cout << endl;
			sv.DTH_duoi5();
		}break;


		default:
			break;
		}

	} while (_getch() != 27);













	system("pause");
}
