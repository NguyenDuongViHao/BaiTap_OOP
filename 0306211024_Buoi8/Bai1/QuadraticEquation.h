#pragma once
#include <iostream>
using namespace std;


class QuadraticEquation
{
private:
	float a;
	float b;
	float c;
	
public:


	void set_a(float value)
	{
		if (value == 0)
		{
			a = 1;
		}
		else
		{
			a = value;
		}
		
	}

	void set_b(float value)
	{
		b = value;
	}

	void set_c(float value)
	{
		c = value;
	}
	
	QuadraticEquation()
	{
		a = 1;
		b = 1;
		c = 1;
	}

	QuadraticEquation(QuadraticEquation& Q)
	{
		a = Q.a;
		b = Q.b;
		c = Q.c;
	}

	QuadraticEquation(float a, float b, float c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}


	float CalcValue(int x)
	{
		return (a * x * x) + (b * x) + c;
	}


	void Solve()
	{
		float delta;
		float x1;
		float x2;
		float x;
		delta = b * b - 4 * a * c;
	
		if (a == 0)
		{
			if (b == 0)
			{
				cout << "phuong trinh vo nghiem";
			}
			else
			{
				cout << "phuong trinh co mot nghiem : " << -c / b << endl;
			}
		}
		else
		{

			if (delta > 0)
			{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				cout << "phuong trinh co hai nghiem : x1= " << x1 << ", x2= " << x2 << endl;
			}
			else if (delta ==0)
			{
				x = -b / 2*a;
				cout << "phuong trinh co nghiem duy nhat : x= " << x << endl;
			}
			else
			{
				cout << "phuong trinh vo nghiem" << endl;
			}
		}
	}


	QuadraticEquation& operator= ( QuadraticEquation Q)
	{
		a = Q.a;
		b = Q.b;
		c = Q.c;
		return *this;
	}

	QuadraticEquation& operator+ (QuadraticEquation Q)
	{
		QuadraticEquation cong;
		cong.a = a + Q.a;
		cong.b = b + Q.b;
		cong.c = c + Q.c;

		return cong;
	}

	QuadraticEquation& operator- (QuadraticEquation Q)
	{
		QuadraticEquation tru;
		tru.a = a - Q.a;
		tru.b = b - Q.b;
		tru.c = c - Q.c;

		return tru;
	}

	QuadraticEquation& operator+= (QuadraticEquation Q)
	{
		a = a + Q.a;
		b = b + Q.b;
		c = c + Q.c;
		return *this;
	}

	QuadraticEquation& operator-= (QuadraticEquation Q)
	{
		a = a - Q.a;
		b = b - Q.b;
		c = c - Q.c;
		return *this;
	}

	
	QuadraticEquation operator++ ()
	{
		c++;
		return *this;
	}
	
	QuadraticEquation operator++ (int)
	{
		QuadraticEquation temp = *this;
		++(*this);
		return temp;
	}


	
	QuadraticEquation operator-- ()
	{
		c--;
		return *this;
	}
	
	QuadraticEquation operator-- (int)
	{
		QuadraticEquation temp = *this;
		--(*this);
		return temp;
	}



	bool operator==(QuadraticEquation Q)
	{
		if (a == Q.a)
		{
			if (b == Q.b)
			{
				if (c == Q.c)
				{
					return true;
				}
			}
		}
		return false;
	}

	bool operator!=(QuadraticEquation Q)
	{
		return !(*this == Q);
	}


	bool operator>(QuadraticEquation Q)
	{
		if (a > Q.a)
		{
			if (b > Q.b)
			{
				if (c > Q.c)
				{
					return true;
				}
			}
		}
		return false;
	}


	bool operator>=(QuadraticEquation Q)
	{
		return (*this > Q || *this == Q);
	}

	bool operator<(QuadraticEquation Q)
	{
		return !(*this >= Q);
	}

	bool operator<=(QuadraticEquation Q)
	{
		return (*this < Q || *this ==Q);
	}


	friend ostream& operator<< (ostream& outPut, const QuadraticEquation& Q)
	{
		outPut << Q.a << "x^2 + " << Q.b << "x + " << Q.c << " = 0" << endl;
		return outPut;
	}

	friend istream& operator>> (istream& inPut, QuadraticEquation& Q)
	{
		cout << "nhap a : ";
		inPut >> Q.a;
		cout << "nhap b : ";
		inPut >> Q.b;
		cout << "nhap c : ";
		inPut >> Q.c;
		return inPut;
	}

};

