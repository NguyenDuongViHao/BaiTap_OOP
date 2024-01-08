#include "KhoSach.h"



void main()
{
	KhoSach a;
	a.nhap();
	cout << "loai sach vua nhap " << endl;
	a.xuat();

	cout << "tinh tong tien kho sach : " << a.tinhTongTien() << endl;

	system("pause");

}