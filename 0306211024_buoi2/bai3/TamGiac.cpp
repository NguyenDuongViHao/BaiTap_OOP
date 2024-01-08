#include "TamGiac.h"

void main()
{
	TamGiac T;

	cout << "nhap tam giac" << endl;

	T.nhapTG();

	T.xuatTG();

	cout << endl;
	cout << "chu vi : " << T.tinhChuVi() << endl;
	cout << "dien tich : " << T.tinhDT() << endl;

	if (T.TamGiacVuong())
	{
		cout << "ABC la tam giac vuong " << endl;
	}
	else {
		cout << "ko phai la tam giac vuong " << endl;
	}
	system("pause");
}
