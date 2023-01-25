// - agar object constant hai toh method ko bhi constant hoona pdega.
#include<iostream>
#include<string>
using namespace std;
class student {
private :
	string name;
	int marks;
	int age;
public :
	int anything;
	student(string a = "none" , int b =0 , int c=0) // default value of construction
		: name (a) , marks (b) , age (c){ // called the initilisation list
		name = a; 
		marks = b;
		age = c;
		cout << name << " " << marks << " " << age << endl;
	}
	void set_name(string a= "none") const {
		cout << a
			<< endl;
	 }
	string get_name() const { // syntax for declare the method as constant 
		return name;
	}

};
void display_name(const student& obj) {
	cout << obj.get_name() << endl;
}
int main() {
	const student s1; // koi b change nhi hooga object k sath like 
	//s1.anything = 15; // yeh kbhi nhi ho skta because object constant hai.
	s1.set_name ("manish"); // aisa bhi nhi kr skte. because object is constant. . tbhi kr skte hai jb method ko constant liya ho.
	display_name(s1);

	return 0;
}