#include "ThoiGian.h"

void main()
{
	ThoiGian A;
	ThoiGian B;

	cout << "nhap thoi gian A : " << endl;
	A.nhapThoiGIan();
	cout << "nhap thoi gian B : " << endl;
	B.nhapThoiGIan();

	if (A.thoiGianHopLe() && B.thoiGianHopLe())
	{
		cout << "ca hai thoi gian hop le" << endl;
	}
	else
	{
		cout << "thoi gian ko hop le " << endl;
	}


	if (A.soSanhThoiGian(B) == 1)
	{
		cout << "ngay A lon hon ngay B" << endl;
	}
	if(A.soSanhThoiGian(B) == 2)
	{
		cout << "ngay B lon hon ngay A" << endl;
	}
	
	if (A.soSanhThoiGian(B) == 3)
	{
		cout << "ca hai ngay bang nhau " << endl;
	}



	system("pause");
}
