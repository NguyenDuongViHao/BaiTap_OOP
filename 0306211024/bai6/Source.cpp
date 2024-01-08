#include <iostream>
using namespace std;
#define max 1000


struct Diem {
	float x;
	float y;
};




void NhapDiem(Diem&);
void XuatDiem(Diem);

float  TinhKC(Diem d1, Diem d2);



void NhapDiem(Diem& d) {
	cin >> d.x;
	cin >> d.y;
}

void XuatDiem(Diem d)
{
	cout << "(" << d.x << " , " << d.y << ")";
}

float  TinhKC(Diem d1, Diem d2)
{
	return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}




void nhapDinh(Diem a[], int &n)
{
	cout << "nhap so dinh cua da giac : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap toa do dinh " << i << " : ";
		NhapDiem(a[i]);
	}
}


float chuvi_dagiac(Diem a[], int n)
{
	float cv = 0;
	int i=0;
	cv = TinhKC(a[n - 1], a[i]);

	for (i; i < n-1; i++)
	{	
		cv = cv + TinhKC(a[i], a[i+1]);

	}
	

	return cv;
}





void main()
{
	Diem a[max];
	int n;

	nhapDinh(a, n);

	float cv = chuvi_dagiac(a, n);
	cout << "chu vi da giac : " << cv << endl;

	system("pause");
}