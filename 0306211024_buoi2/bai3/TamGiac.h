#pragma once
#include "Diem.h"
class TamGiac
{
private: 
	Diem A;
	Diem B;
	Diem C;

public:

	void nhapTG()
	{
		cout << "nhap diem A : ";
		A.nhapDiem();
		cout << "nhap diem B : ";
		B.nhapDiem();
		cout << "nhap diem C : ";
		C.nhapDiem();
	}


	void xuatTG()
	{
		cout << "toa do 3 dinh cua Tam Giac : ";
		A.xuatDiem();
		cout << ", ";
		B.xuatDiem();
		cout << ", ";
		C.xuatDiem();
	}


	float tinhChuVi()
	{
		float AB, BC, CA, chuvi;

		AB = A.tinhKC(B);
		BC = B.tinhKC(C);
		CA = C.tinhKC(A);

		chuvi = AB + BC + CA;
		return chuvi;
	}



	float tinhDT()
	{
		float AB, BC, CA, p;

		AB = A.tinhKC(B);
		BC = B.tinhKC(C);
		CA = C.tinhKC(A);

		p = (AB + BC + CA)/2;

		float s;
		s= sqrt(p * (p - AB) * (p - BC) * (p - CA));

		return s;
	}

	bool TamGiacVuong()
	{
		float AB, BC, CA;
		AB = A.tinhKC(B);
		BC = B.tinhKC(C);
		CA = C.tinhKC(A);

		if (AB * AB == BC * BC + CA * CA || BC * BC == AB * AB + CA * CA || CA * CA == AB * AB + BC * BC)
		{
			return true;
		}
		return false;
	}


};

