#include "Diem.h"


void main()
{
	Diem a;
	Diem b;

	cout << "nhap diem a : ";
	a.nhapDiem();

	cout << "nhap diem b : ";
	b.nhapDiem();

	cout << "hai diem vua nhap : ";
	a.xuatDiem();
	b.xuatDiem();

	cout << "khoang cach hai diem : " << a.tinhKC(b) << endl;

	system("pause");
}