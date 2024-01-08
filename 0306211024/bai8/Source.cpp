#include <iostream>
#include <conio.h>
using namespace std;
#define max 1000







struct ThoiGian {
	int ngay;
	int thang;
	int nam;
};

struct SinhVien {
	char Hoten[50];
	int Mssv;
	ThoiGian NgaySinh;
	float DLT;
	float DTH;
	float TB;
};







void nhapTHoiGian(ThoiGian& a)
{
	cout << "nhap ngay : ";
	cin >> a.ngay;
	cout << "nhap Thang : ";
	cin >> a.thang;
	cout << "nhap nam : ";
	cin >> a.nam;
}


void xuatThoiGian(ThoiGian a)
{
	cout << a.ngay << " " << a.thang << " " << a.nam;
}


bool namNhuan(ThoiGian a)
{
	if (a.nam % 400 == 0 || a.nam % 4 == 0 && a.nam % 100 != 0)
	{
		return true;
	}
	return false;
}


int ngayTrongThang(ThoiGian a)
{
	int ngayhople;
	switch (a.thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		ngayhople = 31;
	}break;

	case 4:
	case 6:
	case 9:
	case 11:
	{
		ngayhople = 30;
	}break;


	case 2:
	{
		if (namNhuan(a))
		{
			ngayhople = 29;
		}
		else
		{
			ngayhople = 28;
		}
	}
	default:
		break;
	}
	return ngayhople;
}



bool thoiGianHopLe(ThoiGian a)
{
	if (a.nam < 1)
	{
		return false;
	}
	if (a.thang < 1 || a.thang > 12)
	{
		return false;
	}
	if (a.ngay < 1 || a.ngay > ngayTrongThang(a))
	{
		return false;
	}
	return true;
}


int soSanhThoiGian(ThoiGian a, ThoiGian b)
{
	if (a.nam > b.nam)
	{
		return 1;
	}
	else if (a.nam == b.nam)
	{
		if (a.thang > b.thang)
		{
			return 1;
		}
		else if (a.thang == b.thang)
		{
			if (a.ngay > b.ngay)
			{
				return 1;
			}
			else if (a.ngay == b.ngay)
			{
				return 3;
			}
			else
			{
				return 2;
			}
		}
	}
	else
	{
		return 2;
	}

}



void nhapSV(SinhVien& a)
{
	cin.ignore();
	cout << "nhap ho ten : ";
	cin.getline(a.Hoten, 50);
	cout << "nhap MSSV : ";
	cin >> a.Mssv;
	cout << "nhap Ngay Sinh : " << endl;
	nhapTHoiGian(a.NgaySinh);
	cout << "nhap DLT : ";
	cin >> a.DLT;
	cout << "nhap DTH : ";
	cin >> a.DTH;
	a.TB = (a.DLT + a.DTH) / 2;
	cin.ignore();
}


void xuatSV(SinhVien a)
{
	cout << "ho ten : " << a.Hoten << endl;
	cout << "mssv : " << a.Mssv << endl;
	cout << "ngay sinh : " << endl;
	xuatThoiGian(a.NgaySinh);
	cout << endl;
	cout << "DLT : " << a.DLT << endl;
	cout << "DTH : " << a.DTH << endl;

	cout << "DTB : " << a.TB << endl;
}



void DiemTB_max(SinhVien a, SinhVien b)
{
	if (a.TB > b.TB)
	{
		cout << a.Hoten;
	}
	else
	{
		cout << b.Hoten;
	}
}


void SV_LonTuoi(SinhVien a, SinhVien b)
{
	if (soSanhThoiGian(a.NgaySinh, b.NgaySinh) == 1)
	{
		cout << b.Hoten;
	}
	if (soSanhThoiGian(a.NgaySinh, b.NgaySinh) == 2)
	{
		cout << a.Hoten;
	}

}

//==============


void nhapMangSV(SinhVien a[], int& n)
{
	cout << " nhap so luong sinh vien : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "sinh vien thu " << i << " " << endl;
		nhapSV(a[i]);
	}
}


void xuatMangSV(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "sinh vien " << i << endl;
		xuatSV(a[i]);
	}
}



void DLT_max(SinhVien a[], int n)
{
	int LT_max = a[0].DLT;

	for (int i = 0; i < n; i++)
	{
		if (a[i].DLT > LT_max)
		{
			cout << "sinh vien co diem LT cao nhat : " << a[i].Hoten << endl;
		}
	}

}


void DLT_min(SinhVien a[], int n)
{
	int min_lt = a[0].DLT;
	for (int i = 0; i < n; i++)
	{
		if (a[i].DLT < min_lt)
		{
			cout << "sinh vien co diem LT thap nhat : " << a[i].Hoten << endl;
		}
	}
}



void DTH_max(SinhVien a[], int n)
{
	int max_th = a[0].DLT;

	for (int i = 0; i < n; i++)
	{
		if (a[i].DLT > max_th)
		{
			cout << "sinh vien co diem Th cao nhat : " << a[i].Hoten << endl;
		}
	}

}


void DTH_min(SinhVien a[], int n)
{
	int min_th = a[0].DLT;
	for (int i = 0; i < n; i++)
	{
		if (a[i].DLT < min_th)
		{
			cout << "sinh vien co diem Th thap nhat : " << a[i].Hoten << endl;
		}
	}
}



void Dtb_max(SinhVien a[], int n)
{
	int max_tb = a[0].TB;
	for (int i = 0; i < n; i++)
	{
		if (a[i].TB > max_tb)
		{
			cout << "sinh vien co diem Tb cao nhat : " << a[i].Hoten << endl;
		}
	}
}

void Dtb_min(SinhVien a[], int n)
{
	int min_tb = a[0].TB;
	for (int i = 0; i < n; i++)
	{
		if (a[i].TB < min_tb)
		{
			cout << "sinh vien co diem Tb thap nhat : " << a[i].Hoten << endl;
		}
	}
}




void DLT_duoi5(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].DLT < 5)
		{
			cout << " sinh vien duoi 5 : " << endl;
			cout << "ten : " << a[i].Hoten << endl;
			cout << "mssv : "<< a[i].Mssv << endl;
		}
	}
}



void DTH_duoi5(SinhVien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].DTH < 5)
		{
			cout << " sinh vien duoi 5 : " << endl;
			cout << "ten : " << a[i].Hoten << endl;
			cout << "mssv : " << a[i].Mssv << endl;
		}
	}
}


void main()
{

	SinhVien a[max];
	int n;
	int chon;


	do {

		cout << "1.nhap sv " << endl;
		cout << "2.xuat sv " << endl;
		cout << "3.diem li thuyet cao nhat " << endl;
		cout << "4.diem li thuyet thap nhat " << endl;
		cout << "5.diem thuc hanh cao nhat " << endl;
		cout << "6.diem thuc hanh thap nhat " << endl;
		cout << "7.diem trung binh cao nhat " << endl;
		cout << "8.diem trung binh thap nhat " << endl;
		cout << "9.diem li thuyet duoi 5" << endl;
		cout << "10.diem thuc hanh duoi 5" << endl;

		cout << "chon chuc nang  : ";
		cin >> chon;


		switch (chon)
		{
		case 1:
		{
			nhapMangSV(a, n);
		}break;

		case 2:
		{
			xuatMangSV(a, n);
		}break;


		case 3:
		{
			cout << endl;
			DLT_max(a, n);

		}break;

		case 4:
		{
			cout << endl;
			DLT_min(a, n);

		}break;


		case 5:
		{
			cout << endl;
			DTH_max(a, n);

		}break;


		case 6:
		{
			cout << endl;
			DTH_min(a, n);


		}break;


		case 7:
		{
			cout << endl;
			Dtb_max(a, n);


		}break;

		case 8:
		{
			cout << endl;
			Dtb_min(a, n);

		}break;


		case 9:
		{
			DLT_duoi5(a, n);
		}break;


		case 10:
		{
			DTH_duoi5(a, n);
		}break;
		default:
			break;
		}

	} while (_getch() != 27);










	nhapMangSV(a, n);

	cout << endl;
	xuatMangSV(a, n);

	system("pause");
}