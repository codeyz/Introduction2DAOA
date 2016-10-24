/**
证明欧几里得算法 gcd(m, n) = gcd(n, m % n)

证明：
1. 假设d为m和n的公约数，且m = kn + r(k 为非负整数)，那么 d | m, d | n。
因为r = m - kn = m % n，所以d | r，所以d是n和r的公约数。

2. 假设d为n和r的公约数，因为m = r + kn，因此d | m。所以，d是m和n的公约数。

综上所述，d即是(m, n)的公约数，也是(n, m % n)的公约数，即这两者的公约数是一样的，那么
其最大公约数也必定相等。
**/

int gcd(int m, int n)
{
	if(!n)
		return m;
	return gcd(n, m % n);
}
