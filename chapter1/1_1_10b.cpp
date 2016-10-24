#include <iostream>
#include <cmath>
using namespace std;

const int FIRST_WIN = 0;
const int SECOND_WIN = 1;

int gcd(int m, int n)
{
	if(!n)
		return m;
	return gcd(n, m % n);
}

/**
 * 模拟下辗转相减法，可知，游戏的总步数就是辗转相减法的步数。
 */
int EuclidGame(int m, int n)
{
	int g = gcd(m, n);
	int delta = abs(m - n);
	if(delta / g % 2)
		return SECOND_WIN;
	return FIRST_WIN;
}

int main()
{
	cout << EuclidGame(2, 4) << endl;
	return 0;
}
