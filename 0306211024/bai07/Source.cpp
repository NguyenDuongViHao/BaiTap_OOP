#include<iostream>
using namespace std;
#define max 1000

#include<iostream>
using namespace std;

struct Phanso {
	int tuso;
	int mauso;
};

void Nhap(Phanso a[], int &n)
{
	cout << "nhap so luong : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan so thu " << i << " : ";
		cin >> a[i].tuso;
		cin >> a[i].mauso;
	}
}

void Xuat(Phanso a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i].tuso << "/" << a[i].mauso << endl;

	}
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

Phanso TongPs(Phanso a[], int n)
{
	Phanso tong = a[0];

	for (int i = 1; i < n; i++)
	{
		tong.tuso = tong.tuso * a[i].mauso + tong.mauso * a[i].tuso;
		tong.mauso = tong.mauso * a[i].mauso;
	}
	
	return rutgon(tong);

}

Phanso TichPs(Phanso a[], int n)
{
	Phanso tich = a[0];

	for (int i = 1; i < n; i++)
	{
		tich.tuso = tich.tuso * a[i].tuso;
		tich.mauso = tich.mauso * a[i].mauso;
		
	}

	return rutgon(tich);

}


Phanso phanso_max(Phanso a[], int n)
{
	Phanso max_ps = a[0];
	int x, z;

	for (int i = 0; i < n; i++)
	{
		x = max_ps.tuso * a[i].mauso;
		z = a[i].tuso * max_ps.mauso;
		if (x < z)
		{
			max_ps = a[i];
		}

	}
	return max_ps;
}


Phanso phanso_min(Phanso a[], int n)
{
	Phanso min_ps = a[0];
	int x, z;

	for (int i = 0; i < n; i++)
	{
		x = min_ps.tuso * a[i].mauso;
		z = a[i].tuso * min_ps.mauso;
		if (x > z)
		{
			min_ps = a[i];
		}

	}
	return min_ps;
}


void main() 
{
	Phanso A[max];
	int n;

	Nhap(A, n);
	Xuat(A, n);

	Phanso tong= TongPs(A, n);
	cout << "tong : " << tong.tuso << "/" << tong.mauso << endl;

	Phanso tich = TichPs(A, n);
	cout << "tich : " << tich.tuso << "/" << tich.mauso << endl;


	Phanso max_ps = phanso_max(A, n);
	cout << "phan so lon nhat : " << max_ps.tuso << "/" << max_ps.mauso << endl;


	Phanso min_ps = phanso_min(A, n);
	cout << "phan so lon nhat : " << min_ps.tuso << "/" << min_ps.mauso << endl;
	system("pause");
}