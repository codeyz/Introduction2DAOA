#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
using namespace std;

int minDistance(vector<int>& num)
{
	sort(num.begin(), num.end());
	assert(num.size() > 1);
	int res = num[1] - num[0];
	for(size_t i = 2;i < num.size(); ++i)
		if(num[i] - num[i - 1] < res)
			res = num[i] - num[i - 1];
	return res;
}

int main()
{
	int num[] = {1, 4, 3, 5, 5, 9, 0};
	vector<int> n1(num, num + 7);
	cout << minDistance(n1) << endl;
	return 0;
}
