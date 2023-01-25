#include<iostream>
#include<string>
using namespace std;
class student {
public :
	string name;
	int marks1;
	int marks2;
	int marks3;
	int age;
public:
	void get_value(string a, int b, int c , int d , int e) {
		name = a;
		marks1 = b;
		marks2 = c;
		marks3 = d;
		age = e;
	}
	
};
int display_sum(const student& s1) {
	int sum{ 0 };
	sum = (s1.marks1 + s1.marks2 + s1.marks3);
	//cout << sum << endl;
	return sum;
}
int main() {
	student s;
	s.get_value("manish", 10, 13, 13, 28);
	display_sum(s);
	return 0;


}