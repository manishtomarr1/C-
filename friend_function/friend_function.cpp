#include<iostream>
using namespace std;
class second; // forward decleration of class
class one {
public :
	int a;
	one (int num) {
		num = a;
		//return num;
	}
	friend void greator (one, second); // decleration of friend function
};
class second{
public :
	int num2;
	second (int b) {
		num2 = b;
		//return num2;
	}
	friend void greator(one, second);
};
void greator(one o1, second s2) {
	if (o1.a > s2.num2)
		cout << "first number is greator then second " << endl;
	else
		cout << "second number is greator then first " << endl;
}
int main() {
//one o1;
//second s2;
//o1.number(12);
//s2.second_num(15);
	//greator(o1, s2);
	one o1(12);
	second s2(15);
	greator(o1, s2);

	return 0;

}