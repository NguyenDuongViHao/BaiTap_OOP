#include "PhanSo.h"

void main()
{



	PhanSo a;
	

	a.Xuat();
	cout << endl;

	a.Nhap();
	PhanSo b(a);
	b.Xuat();

	cout << endl;
	PhanSo c(2, 3);
	c.Xuat();
	cout << endl;

	cout << "cong hai phan so" << endl;
	a.TongPs(c).Xuat();
	
	system("pause");
}
