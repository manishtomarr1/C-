#include<iostream>
#include<memory>
using namespace std;
class base {
public:
	int data;
	virtual void get_data(int a) = 0;
	virtual void set_data() = 0;
};
class derived : public base {
	virtual void get_data(int d) override {
		cout << "hello i am get data from derrived" << endl;
		data = d;
	}
	virtual void set_data() override {
		cout << "set data from derrived" << endl;
		cout << "data is : " << data << endl;
	}
};
int main() {
//shared_ptr <int> p1{ new int{ 100 } };
//cout << p1.use_count() << endl;
//shared_ptr <int> p2;
//p2 = p1;
//cout << p1.use_count() << endl;
//cout << p2.use_count() << endl;
//p1.reset();
//cout << "reset" << endl;
//cout << p1.use_count() << endl;
//cout << p2.use_count() << endl;

	cout << "polymorphism" << endl;

	shared_ptr <base> p3{ new derived };
	p3->get_data(12);
	p3->set_data();
	return 0;

}
