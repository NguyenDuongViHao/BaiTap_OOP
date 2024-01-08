#include<iostream>
using namespace std;

struct Diem {
	float x;
	float y;
};


struct TamGiac {
	Diem A;
	Diem B;
	Diem C;
};




void NhapDiem(Diem& d) {
	cin >> d.x;
	cin >> d.y;
}

void XuatDiem(Diem d)
{
	cout << "(" << d.x << " , " << d.y << ")";
}

float  TinhKC(Diem d1, Diem d2)
{
	return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}




void nhapTamGiac(TamGiac & a)
{
	cout << "nhap dinh a : ";
	NhapDiem(a.A);
	cout << "nhap dinh b : ";
	NhapDiem(a.B);
	cout << "nhap dinh c : ";
	NhapDiem(a.C);
}

void xuatTamGiac(TamGiac a)
{
	cout << "toa do 3 dinh cua tam giac : ";
	XuatDiem(a.A);
	cout << ", ";
	XuatDiem(a.B);
	cout << ", ";
	XuatDiem(a.C);
}

//chuvi
float tinhChuVi(TamGiac a)
{
	float AB, BC, CA, P;
	AB = TinhKC(a.A, a.B);
	BC = TinhKC(a.B, a.C);
	CA = TinhKC(a.C, a.A);


	P = AB + BC + CA;
	return P;

}


float tinhDTTamGiac(TamGiac a)
{
	float AB, BC, CA, p, S;
	AB = TinhKC(a.A, a.B);
	BC = TinhKC(a.B, a.C);
	CA = TinhKC(a.C, a.A);

	p = (AB + BC + CA) / 2;

	S = sqrt(p * (p - AB) * (p - BC) * (p - CA));

	return S;
}

bool TamGiacVuong(TamGiac a)
{
	float AB, BC, CA;
	AB = TinhKC(a.A, a.B);
	BC = TinhKC(a.B, a.C);
	CA = TinhKC(a.C, a.A);

	if (AB * AB == BC * BC + CA * CA || BC * BC == AB * AB + CA * CA || CA * CA == AB * AB + BC * BC)
	{
		return true;
	}
	return false;
}

void main()
{
	TamGiac T;
	

	nhapTamGiac(T);

	xuatTamGiac(T);
	
	cout << "chu vi : " << tinhChuVi(T) << endl;
	cout << "dien tich : " << tinhDTTamGiac(T) << endl;

	if (TamGiacVuong(T))
	{
		cout << "Tam Giac ABC la tam giac vuong";
	}
	else
	{
		cout << "ko phai la tam giac vuong";
	}
	system("pause");
}
