#include "QuadraticEquation.h"


void main()
{
//khoitao
	QuadraticEquation pt1;
	cout << pt1 << endl;
//copy
	QuadraticEquation pt2(pt1);
	cout << pt2 << endl;

	QuadraticEquation pt3(2, 3, 1);
	cout << pt3 << endl;



// CalcValue
	cout << pt3.CalcValue(2) << endl;


// pt bac hai
	pt3.Solve();
	cout << endl;

//=
	pt1 = pt3;
	cout << pt1 << endl;



//+= -=
	QuadraticEquation pt4;
	 pt1 += pt3;
	cout << pt1 << endl;
	pt1 -= pt3;
	cout << pt1 << endl;

//++ --
	cout << "cong cong";
	cout << ++pt1;
	cout << pt1++;

	cout << "tru tru ";
	cout << --pt1;
	cout << pt1--;




// == != > >= < <=

	cout << "==" << endl;
	if (pt1 == pt3)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	
	cout << "!=" << endl;

	if (pt1 != pt3)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	cout << ">" << endl;

	if (pt1 > pt3)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	cout << ">=" << endl;

	if (pt1 >= pt3)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}
	
	cout << "<" << endl;

	if (pt1 < pt3)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	cout << "<=" << endl;

	if (pt1 <= pt3)
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

	
	

	system("pause");

	

	
	
}