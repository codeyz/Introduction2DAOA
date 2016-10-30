#include <iostream>
#include <vector>
using namespace std;

void dividorSieve(vector<int>& vec, int n)
{
	for(int i = 1; i <= n; ++i)
	{
		for(int j = i;j <= n; j += i)
			++vec[j];
	}
}

/**
 * It depends the number of dividors of x
 */
int main()
{
	int n = 10;
	vector<int> vec(n + 1, 0);
	dividorSieve(vec, n);
	// c stands for close, while o stands for open
	for(size_t i = 1; i < vec.size(); ++i)
		if(vec[i] % 2)
			cout << " o ";
		else
			cout << " c ";
	cout << endl;
	return 0;
}
