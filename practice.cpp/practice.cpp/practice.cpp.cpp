#include<iostream>
using namespace std;

class base {

public :

	virtual void func()  {
		cout << "hello from base" << endl;
	}
};

class child : public  base {

public :

	virtual void func()  {

		cout << "hello from child class" << endl;
	}
};

class check {
public :

	check() {
		cout << "how are you" << endl;
	}

	void hello() {
		cout << "hello" << endl;
	}
};

class another_check : public check {

public :
	void come() {
		int a = 12;
		int &b = a;
		hello();
		check();
	}
};

int main() {

	base b1;

	b1.func();

	child c1;
	c1.func();

	base * b2 = new child;

	b2->func();

	another_check ac;
	ac.come();
	return 0;

}