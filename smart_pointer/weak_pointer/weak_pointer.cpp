#include<iostream>
#include<memory> // header file used for smart pointer
using namespace std;
class B; // forward declaration
class A {
	shared_ptr <B> b_ptr;
public :
	void set_B(shared_ptr <B>& b) {
		b_ptr = b;
	}
	A() {
		cout << "A constructor" << endl;
	}
	~A(){ cout << "A destructor" << endl; }
 };
class B {
	weak_ptr <A> a_ptr; // by using this we dont face the memory leak
public :
	void set_A(shared_ptr <A> &a) {
		a_ptr = a;
	}
	B() {
		cout << "B constructor" << endl;
	}
	~B() { cout << "B destructor" << endl; }
};
int main() {
       shared_ptr <A> a = make_shared <A>(); // make weak to break the strong circular reference
       shared_ptr <B> b =make_shared <B>();
       a->set_B(b);
       b->set_A(a);
	// destructor is not called bacause watch count not be equal to zero.
	

	return 0;
}