#include "Vector.h"

void main()
{
	Vector2D v;
	
	v.xuat();
	v.nhap();
	
	Vector2D a(v);
	a.xuat();

	Vector2D b(2, 3);

	b.xuat();

	system("pause");
}
