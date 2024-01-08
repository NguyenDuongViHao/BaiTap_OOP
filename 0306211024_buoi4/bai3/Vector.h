#pragma once
#include <iostream>
using namespace std;


class Vector2D
{
private:
	float x;
	float y;
public:


	Vector2D()
	{
		x = 0;
		y = 0;
	}
	

	Vector2D(Vector2D& v)
	{
		x = v.x;
		y = v.y;
	}

	Vector2D(float x, float y)
	{
		this->x = x;
		this->y = y;
	}


	void nhap()
	{
		cin >> x >> y;
	}

	void xuat()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}

	float TinhModule()
	{
		return sqrt(x * x + y * y);
	}

	Vector2D congVector(Vector2D v)
	{
		Vector2D kq;
		kq.x = x + v.x;
		kq.y = y + v.y;
		return kq;
	}


	Vector2D truVector(Vector2D v)
	{
		Vector2D kq;
		kq.x = x - v.x;
		kq.y = y - v.y;
		return kq;
	}

	float tichVoHuong(Vector2D v)
	{
		return x * v.x + y * v.y;
	}

	bool vuongGoc(Vector2D v)
	{
		return tichVoHuong(v) == 0;
	}

};



