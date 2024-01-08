#include "SinhVien.h"

void main()
{
	SinhVien a;
	SinhVien b;


	cout << "nhap thong tin sinh vien a" << endl;
	a.nhapSV();


	cout << "nhap thong tin sinh vien b " << endl;
	b.nhapSV();

	cout << endl;
	cout << "thong tin sinh vien a" << endl;
	a.xuatSV();
	cout << endl;
	cout << "thong tin sinh vien b" << endl;
	b.xuatSV();


	cout << "diem trung binh lon nhat : ";
	a.DiemTB_max(b);

	cout << endl;


	cout << "sinh vien lon tuoi : ";
	a.SV_LonTuoi(b);
	cout << endl;
	system("pause");
}
