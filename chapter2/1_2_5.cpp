#include <iostream>
#include <string>
using namespace std;

string decimal2Binary(int x)
{
	if(x == 0)
		return "";
	return decimal2Binary(x / 2) + string(1, (x % 2 + '0'));	
}

int main()
{
	cout << decimal2Binary(10) << endl;
	cout << decimal2Binary(4) << endl;
}
