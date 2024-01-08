#pragma once
#include<iostream>
using namespace std;


class Vector3d
{
	private:
		float x;
		float y;
		float z;
	public:


		Vector3d()
		{
			x = 0;
			y = 0;
			z = 0;
		}


		Vector3d(Vector3d& v)
		{
			x = v.x;
			y = v.y;
			z = v.z;
		}

		Vector3d(float x, float y, float z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}


		void nhap()
		{
			cin >> x >> y >> z;
		}

		void xuat()
		{
			cout << "(" << x << "," << y << "," << z << ")" << endl;
		}

		float TinhModule()
		{
			return sqrt(x * x + y * y + z * z);
		}

		Vector3d congVector(Vector3d v)
		{
			Vector3d kq;
			kq.x = x + v.x;
			kq.y = y + v.y;
			kq.z = z + v.z;
			return kq;
		}


		Vector3d truVector(Vector3d v)
		{
			Vector3d kq;
			kq.x = x - v.x;
			kq.y = y - v.y;
			kq.z = z - v.z;
			return kq;
		}

		float tichVoHuong(Vector3d v)
		{
			return x * v.x + y * v.y + z * v.z;
		}

		bool vuongGoc(Vector3d v)
		{
			return tichVoHuong(v) == 0;
		}


		Vector3d tichCoHuong(Vector3d v)
		{
			Vector3d kq;
			kq.x = y * v.z + z * v.y;
			kq.y = z * v.x + x * v.z;
			kq.z = x * v.y + y * v.x;
			return kq;
		}

};






