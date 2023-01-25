#include<iostream>
#include<cmath>
using namespace std;
void pointer( int * a, int * b) {
	int sum= ((*a) + (*b));
	int diff = ((*a) - (*b)); 
	cout <<sum << " " << abs(diff) << endl;
}
int main() {
	 int c;
	 int d;
	cout << "enter the value of a: \n";
	cin >> c;
	cout << "enter the value of b : \n";
	cin >> d;
	pointer(&c , &d);
	return 0;
}