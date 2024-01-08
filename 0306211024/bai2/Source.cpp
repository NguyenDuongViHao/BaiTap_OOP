#include<iostream>
using namespace std;

struct Phanso {
	int tuso;
	int mauso;
};

void Nhap(Phanso& a)
{
	cout << "nhap tu so : ";
	cin >> a.tuso;

	cout << "nhap mau so: ";
	cin >> a.mauso;
}

void Xuat(Phanso a)
{
	cout << a.tuso << "/" << a.mauso;
}


int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

Phanso rutgon(Phanso& a)
{
	int uc = UCLN(a.tuso, a.mauso);
	a.tuso = a.tuso / uc;
	a.mauso = a.mauso / uc;
	return a;
}

Phanso TongPs(Phanso a, Phanso b)
{
	Phanso tong;
	tong.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
	tong.mauso = a.mauso * b.mauso;
	return rutgon(tong);

}

Phanso HieuPs(Phanso a, Phanso b)
{
	Phanso hieu;
	hieu.tuso = a.tuso * b.mauso - a.mauso * b.tuso;
	hieu.mauso = a.mauso * b.mauso;
	return rutgon(hieu);

}

Phanso TichPs(Phanso a, Phanso b)
{
	Phanso tich;
	tich.tuso = a.tuso * b.tuso;
	tich.mauso = a.mauso * b.mauso;
	return rutgon(tich);

}

Phanso ThuongPs(Phanso a, Phanso b)
{
	Phanso thuong;
	thuong.tuso = a.tuso * b.mauso;
	thuong.mauso = a.mauso * b.tuso;
	return rutgon(thuong);

}

void main() {
	Phanso a;
	Phanso b;
	Nhap(a);
	Nhap(b);

	cout << "phan so vua nhap: ";
	Xuat(a);

	cout << ",";

	Xuat(b);
	cout << endl;

	cout << "tong 2 phan so: ";
	Xuat(TongPs(a, b));
	cout << endl;

	cout << "hieu 2 phan so: ";
	Xuat(HieuPs(a, b));
	cout << endl;

	cout << "tich 2 phan so: ";
	Xuat(TichPs(a, b));
	cout << endl;

	cout << "thuong 2 phan so: ";
	Xuat(ThuongPs(a, b));
	cout << endl;
	system("pause");
}