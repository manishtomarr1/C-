#include<iostream>
#include<iomanip>
using namespace std;
int a=0;
int b = 0;

void simple(int x, int y) {// give simple result in 0 and 1 , 0 for false and 1 for true.

	a = x;
	b = y;

	cout << (a == b) << endl;
	cout << (a != b) << endl;
}

void set_true_false(int x, int y) { // give true and false in place of one and 1.
	a = x;
	b = y;

	cout << boolalpha;
	cout << "\nusing boolalpha" << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;

	cout << noboolalpha; // use for 0 and 1 
	cout << "\nusing noboolalpha" << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;

}

void setf_method (int x, int y) {

	a = x;
	b = y;

	cout.setf(ios::boolalpha);//ios is a class & boolaplha is the flag that defind in the class.
	cout << "\nusing setf method" << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
}

void change_base(int x) {

	a = x;

	cout << "\nbase changing method" << endl;
	cout << dec << a << endl; // in base 10
	cout << hex << a << endl;// display hexadecimal value
	cout << oct << a << endl;// display octal value
}

int main() {
	a = 255;
	b = 20;

	simple(a, b);
	set_true_false(a, b);
	setf_method(a, b);
	change_base(a);
		
	return 0;
}
