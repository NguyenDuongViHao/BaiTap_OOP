#pragma once
#include<iostream>
using namespace std;

class ThoiGian
{
private:
	int Day;
	int Month;
	int Year;
public:


	void nhapThoiGIan()
	{
		cout << "nhap ngay : ";
		cin >> Day;
		cout << "nhap thang : ";
		cin >> Month;
		cout << "nhap nam : ";
		cin >> Year;

	}

	void xuatThoiGian()
	{
		cout << Day << " " << Month << " " << Year;
	}


	bool namNhuan()
	{
		if (Year % 400 == 0 || Year % 4 == 0 && Year % 100 != 0)
		{
			return true;
		}
		return false;
	}


	int ngayTrongThang()
	{
		int ngayhople;
		switch (Month)
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
			if (namNhuan())
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


	bool thoiGianHopLe()
	{
		if (Year < 1)
		{
			return false;
		}
		if (Month < 1 || Month > 12)
		{
			return false;
		}
		if (Day < 1 || Day > ngayTrongThang())
		{
			return false;
		}
		return true;
	}


	int soSanhThoiGian(ThoiGian a)
	{
		if (Year > a.Year)
		{
			return 1;
		}
		if (Year == a.Year)
		{
			if (Month > a.Month)
			{
				return 1;
			}
			if (Month == a.Month)
			{
				if (Day > a.Day)
				{
					return 1;
				}
				if (Day == a.Day)
				{
					return 3;
				}
			}
		}
		return 2;
	}
};

