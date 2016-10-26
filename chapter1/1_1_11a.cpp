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

void test(int a, int b)
{
	int *x, *y;
	x = new int(0);
	y = new int(0);
	int g = extendGcd(a, b, x, y);
	cout << a << " * (" << *x << ")" << " + " << b << " * (" << *y << ") = "
		 << "gcd(" << a << ", " << b << ") = " << g << endl;
		 
	if(x)
		delete x;
	if(y)
		delete y;
}

int main() 
{
	test(47, 30);
	test(10, 90);
	return 0;
}
