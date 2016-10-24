#include <iostream>
#include <vector>
using namespace std;

/**
 * @num1 sorted array
 * @num2 sorted array
 * @return the same elements of two arrays
 */
vector<int> findSameElem(const vector<int>& num1, const vector<int>& num2)
{
	int i1,i2;
	i1 = i2 = 0;
	vector<int> result;
	while(i1 < num1.size() && i2 < num2.size())
	{
		if(num1[i1] == num2[i2])
		{
			result.push_back(num1[i1]);
			++i1, ++i2;
		}
		else if(num1[i1] < num2[i2])
			++i1;
		else
			++i2;
	}
	return result;
}

int main()
{
	int a[] = {2, 5, 5, 5};
	int b[] = {2, 2, 3, 5, 5, 7, 7};
	vector<int> num1(a, a + 4);
	vector<int> num2(b, b + 7);
	vector<int> result = findSameElem(num1, num2);
	cout << "there are " << result.size() << " same element(s)" << endl;
	for(size_t i = 0;i < result.size(); ++i)
		cout << result[i] << " ";
	cout << endl;
	return 0;
}
