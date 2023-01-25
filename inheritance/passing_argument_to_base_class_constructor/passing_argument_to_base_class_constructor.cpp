/*
- we can not inherit the property of base class constrctor but we can call the constructor
in the derived class.
-when we make the object of derived cass consructor the base class constructor calls automatically
lakin usse phle we can pass the base constructor in initilised list of derived class jbhi call hoga 
wrna nhi.
*/
#include<iostream>
using namespace std;
class base {
	int value;
public :
	base() : value{ 0 } {
		cout << "base no arg" << endl;
		string a;
		cout << "enter your name" << endl;
		cin >> a;
		cout << "hello " << a << " how are you" << endl;
	}
	base(int v) : value{ v } {
		cout << "int base cnstr" << endl;
	}
	~base() {
		cout << "base distructor" << endl;
	}
};
class derived : public base {
	int doubled_value;
public :
	derived ()
		: base{}, doubled_value{ 0 } {
		cout << "derived no arg cnstd" << endl;
	}
	derived (int x)
		: base{ x }, doubled_value{ x * 2 }{
		cout << doubled_value << endl;
		cout << "derived int cnstr" << endl;
	}
	~derived() {
		cout << "derived disctr" << endl;
	}
}; 
int main() {
      derived d1;
	//derived d1(100);
	return 0;
}

