#include <iostream>
using namespace std;

bool powerof3(int n)
{
	if (n <= 0)
		return false;
	if (n % 3 == 0)
		return powerof3(n / 3);
	if (n == 1)
		return true;
	return false;
}
bool PowerOf2Or3(int n)
{

	if (n == 1)
		return true;

	else if (n % 2 != 0)
		return powerof3(n);
	else if (n == 0)
		return false;

	return PowerOf2Or3(n / 2);
}


int main()
{
	//int n = 62;
	//int m = 27;
	//
	//if (PowerOf2Or3(n) == 1)
	//	cout << "True" << endl;
	//
	//else cout << "False" << endl;
	//
	//if (PowerOf2Or3(m) == 1)
	//	cout << "True" << endl;
	//
	//else
	//	cout << "False" << endl;
	//
	cout << boolalpha << endl;
	cout << PowerOf2Or3(62) << endl;
	cout << PowerOf2Or3(64) << endl;
	cout << PowerOf2Or3(27) << endl;
	
	return 0;
}