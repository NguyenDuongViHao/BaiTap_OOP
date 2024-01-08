#include<iostream>
using namespace std;


struct ThoiGian {
	int ngay;
	int thang;
	int nam;
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
	if(a.nam == b.nam)
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


void main()
{
	ThoiGian A, B;
	cout << "ngay A" << endl;
	nhapTHoiGian(A);
	cout << "ngay B" << endl;
	nhapTHoiGian(B);

	cout << "\nthoi gian A" << endl;
	xuatThoiGian(A);
	cout << "\nthoi gian B" << endl;
	xuatThoiGian(B);

	cout << endl;
	if (thoiGianHopLe(A) && thoiGianHopLe(B))
	{
		cout << " thoi gian hop le";
	}
	else
	{
		cout << "thoi gian ko hop le";
	}


	cout << endl;
	if (soSanhThoiGian(A, B) == 1)
	{
		cout << "ngay A lon hon ngay B";
	}
	if(soSanhThoiGian(A, B) == 2)
	{
		cout << "ngay B lon hon ngay A";
	}
	
	if((soSanhThoiGian(A, B) == 3))
	{
		cout << "hai ngay bang nhau";
	}

	system("pause");
}