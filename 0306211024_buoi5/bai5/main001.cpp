#include "IntArray.h"



void main()
{
	IntArray a;
	cout << "default constructor : array a is : ";
	a.outPut();

	cout << endl;

	cout << "input array a : " << endl;
	a.inPut();

	IntArray b(a);
	cout << "copy constructor : array b is : ";
	b.outPut();

	cout << endl;

	IntArray c(8);
	cout << "parameterized constructor #1: array c is : ";
	c.outPut();
	cout << endl;

	int arr[] = { 9, -2 , 0 ,6, -14 };
	IntArray d(5, arr);
	cout << "parameterized constructor #2: array d is : ";
	d.outPut();

	cout << endl;

	system("pause");
}