#pragma once
#include <iostream>
using namespace std;


class IntArray
{
private:
	int length;
	int* data;

public:


	IntArray()
	{
		length = 0;
		data = new int[length];
	}


	IntArray(const IntArray& arr)
	{
		length = arr.length;
		data = new int[length];
		for (int i = 0; i < length; i++)
		{
			data[i] = arr.data[i];
		}
	}


	IntArray(int n)
	{
		length = n;
		data = new int[length];
		for (int i = 0; i < length; i++)
		{
			data[i] = 0;
		}
	}


	IntArray(int n, int* a)
	{
		length = n;
		data = new int[length];
		for (int i = 0; i < length; i++)
		{
			data[i] = a[i];
		}
	}



	~IntArray()
	{
		delete[]data;
	}


	void inPut()
	{
		cout << "input array's length : ";
		cin >> length;

		data = new int[length];
		cout << "input values : ";

		for (int i = 0; i < length; i++)
		{
			cin >> data[i];
		}
	}


	void outPut()
	{
		for (int i = 0; i < length; i++)
		{
			cout << data[i] << " ";
		}
	}

};

