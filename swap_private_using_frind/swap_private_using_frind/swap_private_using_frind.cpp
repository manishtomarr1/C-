#include<iostream>
using namespace std;
class XYZ;
class ABC {
	int num1{ };
public :
	
	void get_vaue(int a) {
		num1 = a;
		
	}
	friend void swap(ABC, XYZ);
};
class XYZ {
	int num2{};
public :
 void  get_value(int b) {
	 num2 = b;
	}
	friend void swap(ABC, XYZ);
	
};
void swap(ABC a1, XYZ x1) {
	int temp{ 0 };
	temp = a1.num1;
	a1.num1 = x1.num2;
	x1.num2 = temp;
	cout << a1.num1 << endl;
	cout << x1.num2 << endl;
}
int main() {
	ABC obj;
	obj.get_vaue(12);
	XYZ obj1;
	obj1.get_value(15);
	swap(obj, obj1);
	return 0;

}