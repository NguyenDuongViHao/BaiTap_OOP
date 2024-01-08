#include<iostream>
using namespace std;

struct Diem {
	float x;
	float y;
};

void NhapDiem(Diem&);
void XuatDiem(Diem);

float  TinhKC(Diem d1, Diem d2);

void main()
{
	Diem d1, d2;
	cout << "Nhap diem d1 :";
	NhapDiem(d1);

	cout << "Nhap diem d2: ";
	NhapDiem(d2);

	cout << "diem vua nhap: ";
	XuatDiem(d1);

	cout << ",";
	XuatDiem(d2);
	cout << endl;

	cout << "khoang cach 2 diem : " << TinhKC(d1, d2);
	system("pause");
}

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

