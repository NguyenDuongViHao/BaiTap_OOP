#include "DaGiac.h"


void main()
{
	DaGiac a;
	cout << "gia tri mac dinh cua a la";
	a.xuatDinh();

	cout << endl;

	cout << "nhap a : ";
	a.nhapDinh();

	cout << endl;

	DaGiac b(a);
	cout << "xuat b : ";
	b.xuatDinh();

	cout << endl;

	DaGiac c(4);
	cout << "xuat c : ";
	c.xuatDinh();

	system("pause");
}