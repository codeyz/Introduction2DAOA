#include <iostream>
using namespace std;

const int numOfIterator = 10000;

/**
 * find an x that x^2 = a
 * reference: https://zh.wikipedia.org/wiki/%E7%89%9B%E9%A1%BF%E6%B3%95
 */
double NewtonMethod(double a)
{
	double x = a;
	int i = numOfIterator;
	while(i--)
	{
		x = 1.0 / 2 * (x + a / x);
	}
	return x;
}

int main() 
{
	cout << NewtonMethod(8) << endl;
	cout << NewtonMethod(4) << endl;
	cout << NewtonMethod(2) << endl;
	return 0;
}
