#include<iostream>
#include<memory>
using namespace std;
class base {
	int data;
public:
	virtual void get_data() = 0;
	virtual void show_data() = 0;
};
class derived : public base {
public:
	virtual void get_data() override {
		cout << "derived class get data" << endl;
	}
	virtual void show_data() override {
		cout << "derived class show data" << endl;
	}
};
int main() {
	unique_ptr <base> b1 = make_unique <derived>();
	b1->get_data();
	b1->show_data();
	return 0;
}