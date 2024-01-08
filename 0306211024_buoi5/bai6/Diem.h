#pragma once
#include<iostream>
using namespace std;
class Diem
{
private:
		float x;
		float y;

public:

	Diem()
	{
		x = 0;
		y = 0;
	}


		void nhapDiem()
		{
			cin >> x >> y;
		}


		void xuatDiem()
		{
			cout << "(" << x << ", " << y << ")" << " ";
		}


		float tinhKC(Diem a)
		{
			return sqrt(pow(x - a.x, 2) + pow(y - a.y, 2));
		}

};

