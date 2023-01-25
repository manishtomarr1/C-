#include<iostream>
using namespace std;

class birthday {
public :
	int day, month, year;
};
class person {
public :
	birthday b1;

	void display() {
		b1.day = 16;
		b1.month = 7;
		b1.year = 1998;

		cout << "birthday date is : " << b1.day << "/" << b1.month << "/" << b1.year << endl;
	}
};

int main() {

	person p1;
	p1.display();

	return 0;

}