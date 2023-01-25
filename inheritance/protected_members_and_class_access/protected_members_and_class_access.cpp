/*
- KEHNE KA MATLAB YEH HAI JO BASE CLASS MAE PRIVATE HAI WO KHI B ACCESS NHI HO  SAKTA 
-OR JO BASE CLASS MAE PUBLIC RHEGA WO WO CHILD CLASS MAE BHI PUBLIC RHEGA SAME AS WITH PROTECTED
-PROTECTED KO ACCESS KR SKTE HAI DERIVED CLASS MAE 
*/
#include<iostream>
using namespace std;
class base {
	// note that friend of base class have access to all
public :
	int a=100;
	void display() {
		cout << a << " " << b << " " << c << endl;
	}
protected:
	int b = 0;
private:
	int c = 0;
	
};
class derived : public base {
	// note that the friend of derived have access to only what derived has access to.
	// a will be public here
	//b will be protected here
	// c will not be accessible
public : 
	void access_base_member() {
		a = 100; //ok
		b = 200;//ok
		// c = 300; // not accissible
	}
};
int main() {
	cout << "base members access from base objects" << endl;
	base b1;
	b1.a = 100;
	 // b1.b = 200; yeh kbhi nhi hoga because yeh dono private and protected hain.
	  // b1.c = 300;
	b1.display();
	cout << "base member access from derived objects " << endl;
	derived d1;
	d1.a = 10;
	//d1.b = 200;// error
	//d1.c = 300;// error
	d1.display();
	d1.access_base_member();
	d1.display();

	return 0;
 }