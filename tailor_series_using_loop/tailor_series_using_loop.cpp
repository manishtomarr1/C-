#include<iostream>
using namespace std;

double e(int x, int term) {

	double pow=1;
	double fact=1;
	double result = 1;

	for (int i = 1; i <= term; i++) {

		fact *= i;
		pow *= x;
		result += (pow / fact);

	}

	return result;
}

int main() {

	cout << e(2, 10) << endl;

	return 0;
}