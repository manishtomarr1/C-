#include<iostream>
using namespace std;
int main() {
	int num;
	int deno;
	int result;
	cout << "enter num : " << endl;
	cin >> num;
	cout << "enter deno : " << endl;
	cin >> deno;
	try {
		if (deno == 0) {
			throw deno;
		}
		else
			result = num / deno; {
			cout << result;
		}
	}
	catch (int ex) {
		cout << "division not occur " << endl;
	}
	return 0;
}