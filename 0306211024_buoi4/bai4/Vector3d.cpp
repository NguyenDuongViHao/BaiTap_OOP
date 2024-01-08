#include "Vector3d.h"


void main()
{
	Vector3d a;

	a.xuat();

	a.nhap();
	Vector3d b(a);
	b.xuat();


	Vector3d c(3, 4, 5);

	c.xuat();

	system("pause");
}