#include <iostream>
using namespace std;

int extendGcd(int a, int b, int* x, int* y)
{
	if(!b)
	{
		*x = 1, *y = 0;
		return a;
	}
	int res = extendGcd(b, a % b, x, y);
	int tmp = *x;
	*x = *y;
	*y = tmp - (a / b) * (*y);
	return res;
}

void Diophantus(int a, int b, int c)
{
	int *tmpX = new int(0);
	int *tmpY = new int(0);
	int gcd = extendGcd(a, b, tmpX, tmpY);
	int x = c / gcd * (*tmpX + b / gcd);
	int y = c / gcd * (*tmpY - a / gcd);
	cout << "x = " << x << ", y = " << y << endl;
}

int main() 
{
	Diophantus(2, 3, 4);
	return 0;
}
