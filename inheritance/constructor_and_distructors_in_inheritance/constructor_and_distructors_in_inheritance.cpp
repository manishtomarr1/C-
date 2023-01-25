#include<iostream>
using namespace std;
class base {
private :
	int value;
public :
	base() 
		: value{ 0 } {
	
		cout << "base no arg constructor calls" << endl;
	}
	base(int x)
		: value{ x } {
		cout << "base(int) overloded constructor  calls" << endl;
	}
	~base() {
		cout << "base distructor calls" << endl;
	}
};
class derived : public base {
private :
	int doubled_value;
public :
	derived()
		: doubled_value{ 0 } {
		cout << "derived no arg cnstr" << endl;
	}
	derived(int val)
		: doubled_value{ val*2 } {
		cout << "derived (val) constructor calls" << endl;
		cout << doubled_value << endl;
	}
	~derived() {
		cout << "derived distructor" << endl;
	}
}; int main() {
	derived d3(1000);
	derived d1;
	base b1;
    base b2(12);
	derived d2(15);
	return 0;
}