#include "DaGiac.h"


void main()
{
	DaGiac a;

	a.nhapDinh();

	cout << endl;

	a.xuatDinh();

	cout << endl;
	float kq = a.tinhChuVi_daGiac();
	cout << "tinh chu vi da giac : " << kq;
	
	system("pause");
}
