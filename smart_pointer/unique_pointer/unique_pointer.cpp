#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class test {
	int data;
public :
	test()  : data{ 0 } { // initilised constructor
		cout << "test constructor : " << data << endl;
	 }
	test(int d) :data{ d } 
	{
		cout << "test constructor :  " << data << endl;
	}
	int get_data() const { return data; }
	~test() { cout << "test distructor for : " << "(" << data << ")" << endl; }
};
int main() {
//test* t1 = new test{ 1000 }; // here if we dont delete this pointer distructor is never call because this is on heap 
// delete t1;
// now we use unique pointer
unique_ptr<test> t1{ new test {100} }; // syntax for declearing unique pointer here we dont requriment of delete
// use of make_unique function 
unique_ptr <test> t2 = make_unique <test>(1000); // here we dont use new delete and all other things

unique_ptr <test> t3;
 //t1 = t3; we dont do this we cannot assign unique pointers
t1 = move(t3); // t3 in now null ptr
if (!t1) // here we test t1 that t1 is point anywhere or not.. here in this case we test for t1 not pointing anywhere '!' using this
	cout << "t1 not pointing anywhere" << endl;
return 0;
}

