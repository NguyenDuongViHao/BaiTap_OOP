#include "ArrPhanSo.h"


void main()
{

	ArrPhanSo a;
	cout << "gia tri mac dinh cua a la : " << endl;
	a.xuatArr();

	cout << "nhap a : " << endl;
	a.nhapArr();

	ArrPhanSo b(a);
	cout << "xuat b : " << endl;
	b.xuatArr();

	cout << endl;

	ArrPhanSo c(3);
	cout << "xuat c : " << endl;
	c.xuatArr();

	cout << endl;

	
	

	system("pause");
}