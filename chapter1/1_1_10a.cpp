#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a, int b)
{
	while(a != b)
	{
		if(a < b)
			swap(a, b);
		int tmp = a - b;
		a = tmp;
	}
	return a;
}

int main()
{
	cout << gcd(3, 9) << endl;
	cout << gcd(28, 7) << endl;
	cout << gcd(100, 10000) << endl;
	cout << gcd(35, 14) << endl;
	return 0;
}
