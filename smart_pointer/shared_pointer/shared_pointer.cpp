#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class test {
	int data;
public:
	test() : data{ 0 } { // initilised constructor
		cout << "test constructor : " << data << endl;
	}
	test(int d) :data{ d }
	{
		cout << "test constructor :  " << data << endl;
	}
	int get_data() const { 
		cout << "hello i am get_data your data is : " << data << endl;
		return data; }
	~test() { cout << "test distructor for : " << "(" << data << ")" << endl; }
	
};
void func(shared_ptr <test> t ) {
	cout << t.use_count() << endl;
}
int main() {
	shared_ptr <test> t1 = make_shared <test>(1000);
	func(t1);
	{
		shared_ptr <test> t2 = t1;
		cout << "use count of t1 after t2 : " << t1.use_count() << endl;
		{
			shared_ptr <test> t3 = t1;
			cout << "use count of t1 after t3 : " << t1.use_count() << endl;
			t1.reset();
		}
		cout << "use count of t1 after reset : " << t1.use_count() << endl;
	}
	cout << "use count of t1 : " << t1.use_count() << endl;
	return 0;
}