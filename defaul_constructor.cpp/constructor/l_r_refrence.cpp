#include<iostream>
using namespace std;
void func(int && x) { // jb esko main mae call krenge tb koi value dene pdege esko koi variable nhi kyuki yeh x k address ka ref hai jo value hi lega
	cout << x << endl;
}
void func(int &a) { // yha yeh function want the address of another variable because here in perameter we pass an address
	cout << a << endl;
	if (a > 10) {
		a = 100;
		cout << a << endl;
	}
 }
int main() {
	int a = 19;
 	int x{ 100 }; //this is l value.
	int& l_ref = x; // this is l value refrence
	l_ref = 10; //  x or l_ref both will change here
	cout << x << endl;
	int && r_ref = 100; // r value reference yha r_ref mae "x" nhi de skte
	cout << r_ref << endl;
	cout << "address of r_ref is " << "" << &r_ref << endl;
	r_ref = 300;
	cout << r_ref << endl;
	r_ref = x;// yha "x" de skte hain.
	cout << r_ref << endl;
	//int && x_ref = x; yeh bhi allow nhi hai. KYUKI  r value refrence mae l value nhi daal skte.
	func(2000);
	func(a); // yha address wala call hoga function
	return 0;
}
