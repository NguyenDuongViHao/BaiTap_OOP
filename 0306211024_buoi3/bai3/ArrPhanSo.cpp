#include "ArrPhanSo.h"





void main()
{

	ArrPhanSo a;

	a.nhapMang();

	cout << "xuat phan so " << endl;

	a.xuatMang();



	cout << "tinh tong phan so : ";
	a.TongArrPs().Xuat();


	cout << "tinh tich phan so : ";
	a.TichArrPs().Xuat();


	cout << "phan so lon nhat : ";
	a.phanso_max().Xuat();

	cout << "phan so lon nhat : ";
	a.phanso_min().Xuat();



	system("pause");
}