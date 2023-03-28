#include "MathFunction.h"

int summa(int a, int b)
{
	return a + b;
}

int deduction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

double exponentiation(int a, int b)
{
	double res = 1;
	if (b == 0)
	{
		return res;
	} 
	if(b > 0)
	{
		for (int i = 1; i <= b; i++)
		{
			res = res * a;
		}
		return res;
	}
	if (b < 0)
	{
		double c = 0;
		for (int i = -1; i >= b; i--)
		{
			res = res * a;
		}
		return c = 1 / res;
	}
}