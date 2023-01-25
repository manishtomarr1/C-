#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int global_x{ 1000 };

//capture by value -> default
// the global variable glabal_x cannot be captured beacuse it is not within the reaching scope of the lambda.
//it can however still be accessed from within the lambda using normal name lookup rules.

void test1() {
	cout << "test1========================" << endl;

	int local_x{ 100 };
	//auto l = [global_x]() -> we cannot do this-> we cannot captured global variable.

	auto l = [local_x]() { // if wanna to change the lacal_x inside the lambda we cannot for doing so we must use mutable.
		cout << local_x << endl;
		cout << global_x << endl;
		// local_x += 8; -> we cannot do this here.
		//global_x += 8; -> we can do this -> modity the global variable
	}; 
	l();
}

// captured by value-> mutable
//the captured variable x can only be modify within the lambda by using the mutable keyword.
//note that this modifiability only pertains to the captured variable within the lambda body and not the actual variable.

void test2() {
	cout << "\ntets2========================" << endl;

	int x = 100;
	auto l = [x]() mutable { // we use mutable for modify the local variable-> x, and x is a copy here.
		x += 100;
		cout << x << endl;
	};

	l(); //200
	cout << x << endl;//100-> bacause x is captured by copy by the lambda.

	// where we use l -> value of x is increased by 100.
	// where we use x value of x is remain 100;\

	l();//300
	cout << x << endl; //100

	x += 400;

	l(); //400
	cout << x << endl; //500
}

// capture by reference
// any change made to the captured reference variable within the lambda body will change the actual variable.

void test3() {
	cout << "\ntest3===========================================" << endl;

	int x{ 100 };

	auto l = [&x] {
		x += 100;
		cout << x << endl; // 200
	}; 

	l();// 200
	cout << x << endl; // 200

	l();//300
	cout << x << endl;//300
}

//dafault capture by value -> mutable
//only variables used within the lambda body are captured by value.
//the variable z is not captured by lambda.

void test4() {
	cout << "\ntest4=============================" << endl;

	int x = 100;
	int y = 200;
	int z = 300;// note that z is not captured in the lambda since it is not used .
				// this should produce an 'unused variable' warning when compiling
	auto l = [=]() mutable { // = means that we captured everything by value -> copy.
	// auto l = [x , y]() mutable { -> we use this also it also means that x and y is captured by value.
		x += 100;
		y += 100;
		cout << x << endl;
		cout << y << endl;

	};
	l();

	cout << "\n";
	cout << x << endl;
	cout << y << endl;
}

//default captured by reference 
// this time bacause all three variable - x,y,z are used within the lambda body, all three of them well be captured by ref.

void test5(){
	cout << "\ntest5=========================" << endl;

	int x = 100;
	int y = 200;
	int z = 300;

	auto l = [&]() { // this [&] implise that all variable is captured by reference. 

		x += 100;
		y += 100;
		z += 100;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	};

	l();

	cout << "\n";
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}

//default capture by value, capture by reference

void test6() {
	cout << "\ntest6=============================" << endl;

	int x = 100;
	int y = 200;
	int z = 300;

	auto l = [=, &y]() mutable  { // here captured list means that only 'y' is captured by reference.
     
		x += 100;
		y += 100;
		z += 100;
		cout << x << endl; //200
		cout << y << endl;//300
		cout << z << endl;//400
	};

	l();

	cout << "\n";
	cout << x << endl; //100 -> by value
	cout << y << endl;//300 -> by ref
	cout << z << endl;//300 -> by value
}

//default capture by reference , capture x and z by value
// equivalent to test 6

void test7() {
	cout << "\ntest7===============================" << endl;

	int x = 100;
	int y = 200;
	int z = 300;

	auto l = [&, x, z]() mutable {//capture list -> default by reference only x&y captured by val
		x += 100;
		y += 100;
		z += 100;

		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	};

	l();

	cout << "\n";
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
}

//used for trst8
class person {
	friend ostream& operator << (ostream& os, const person& rhs);
private:
	string name;
	int age;
public :
	person() = default;
	person(string name,int age) : name(name), age(age){}
	person(const person& p) = default;
	~person() = default;
	string get_name() const { return name; }
	void set_name(string name) { this->name = name; }
	int get_age() const { return age; }
	void set_age(int age) { this->age = age; }
	
auto change_person1() { return [this](string new_name, int new_age) {name = new_name, age = new_age; }; }
auto change_person2() { return [=](string new_name, int new_age) {name = new_name, age = new_age; }; }
auto change_person3() { return [&](string new_name, int new_age) {name = new_name, age = new_age; }; }
     
};

ostream& operator << (ostream& os, const person& rhs) {
	os << "[person:" << rhs.name << ":" << rhs.age << "]";
	return os;
}

//

int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	return 0;
}