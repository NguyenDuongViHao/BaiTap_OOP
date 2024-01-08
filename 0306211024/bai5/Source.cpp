#include<iostream>
using namespace std;





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
	if (a.nam == b.nam)
	{
		if (a.thang > b.thang)
		{
			return 1;
		}
		if (a.thang == b.thang)
		{
			if (a.ngay > b.ngay)
			{
				return 1;
			}
			if (a.ngay == b.ngay)
			{
				return 3;
			}

		}
	}
	return 2;

}



void nhapSV(SinhVien& a)
{
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


void main()
{
	SinhVien A, B;

	nhapSV(A);

	cout << endl;
	nhapSV(B);


	cout << "\nthong tin cua sinh vien A " << endl;
	xuatSV(A);

	cout << "thong tin cua sinh vien B " << endl;
	xuatSV(B);


	cout << "\nSV co diem tb lon nhat : ";
	DiemTB_max(A, B);

	cout <<endl;
	cout << "SV lon tuoi nhat : ";
	SV_LonTuoi(A, B);
	system("pause");
}