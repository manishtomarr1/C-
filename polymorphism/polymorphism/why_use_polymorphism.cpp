#include<iostream>
#include<string>
using namespace std;	
class base {
public :
   void say_hello() {
		cout << "hello - i am base class object" << endl;
	}
};
class derived : public base {
public :
	void say_hello() {
		cout << "hello - i am derived class object" << endl;
	}
};
void greetings( base  &obj) {
	cout << "greetings : " ;
	obj.say_hello();
}
int main() {

	base b;
	derived d;
	d.say_hello();
	greetings(b);
	greetings(d); // yha bhi base class ka sayhello call hoga because here we pass the object of base class derived ki object esliye li because it is inherit by base 
    base *ptr = new derived; // this is the base class pointer holds the address of derived object which is created in the heap
	ptr->say_hello();
	return 0;
}