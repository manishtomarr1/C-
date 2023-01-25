// [] -> empty capture list
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional> // for std:: functions
using namespace std;
class person {
	friend ostream& operator << (ostream& os, const person& rhs); // display the object here we overload "<<"
private:
	string name;
	int age;
public:
	person(string name, int age) : name(name), age(age) {}
	person (const person &p) : name{p.name}, age{p.age}{ } //copy constructor
	~person() = default;
	string get_name()const {
		return name;
	}
	void set_name(string name) {
		this->name = name;
	}
	int get_age() const { return age; }
	void set_age(int age) { this -> age=age; }
};
ostream& operator << (ostream& os, const person& rhs) {
	os << "[person :" << rhs.name << ":" << rhs.age << "]";
	return os;
}

void test1() {
	cout << "test1=======================" << endl;

	[]() {cout << "hii" << endl; }();

	[](int x) {cout << x << endl; }(100);

	[](int x, int y) { cout << x + y << endl; }(100, 200);
}

//using value and reference as lambda parameters
void test2() {
	cout << "\ntest2==================" << endl;

	auto l1 = []() { cout << "hi" << endl; };
	l1();

	int num1 = 100;
	int num2 = 100;

	auto l2 = [](int x, int y) { cout << x + y << endl; };
	l2(10, 20);
	l2(num1, num2);

	auto l3 = [](int& x, int y) {
		cout << "x: " << x << " y: " << y << endl;
		x = 1000;
		y = 2000;
	};
	l3(num1, num2);
	cout << "num1: " << num1 << " num2 : " << num2 << endl;
}

	void test3() {
	cout << "\ntest3========================" << endl;
	person stooges("larry", 18);
	cout << stooges << endl;

	auto l4 = [](person p) { //pass person object by value
		cout << p << endl;
	};
	l4(stooges);

	auto l5 = [](const person& p) { 
		cout << p << endl;
	};
	l5 (stooges);

	auto l6 = [](person& p) { // pass person object by reference
		p.set_name("manish");
		p.set_age(22);
		cout << p << endl;
	};
	l6(stooges);

	cout << stooges << endl;
}

//used for test4 
// using std:: function as a perameter in c++14 and greator
//or
//auto as perameter type in c++20

void filter_vector(const vector <int>& vec, function<bool(int)> func) {//function<bool(int)>func ->called the predicate lmd
	//void filter_vector(const vector <int> &vec, auto func);
	cout << "[ ";
	for (int i : vec) {
		if (func(i))
		cout << i << " ";
	}
	cout << "]" << endl;

}

//passing lambda to A FUNCTION
void test4() {
	cout << "\ntest4=================" << endl;
	vector<int> nums{ 10,20,30,40,50,60,70,80,90,100 };

	filter_vector(nums, [](int x) {return x > 50; }); // this lambda is pass in the filter function and tell
	                                                          // if x>50 return x otherwise not.
	
	filter_vector(nums, [](int x) {return x <= 30; });

	filter_vector(nums, [](int x) {return x >= 30 && x<=60; });
}

//used for test5
auto make_lambda() { // use auto means compilar deduce the return type.-> here return type is lambda
	return []() {cout << "this lambda was made usig the make_lambda function." << endl; };
}
//returning the lambda from a function.
void test5() {
	cout << "\ntest5==========================" << endl;

	auto l5 = make_lambda();

	l5();
}

//using auto in the lambda parameter list
void test6() {
	cout << "\ntest6=========================" << endl;
	auto l6 = [](auto x, auto y) {
		cout << "x: " << x << " y: " << y << endl;
	};
	l6(10, 20);
	l6(100.5, 123.7);

	l6(person("manish", 23), person("sudhanshu",18)); // for passing object operator overloading comes in work-> "&&"
}

//simple lambda example with sort and for_each
void test7() {
	cout << "\ntest7========================" << endl;

	vector<person> stoges{ {"manish" ,23},{"sudhanshu", 18}, {"ajay",26} };

	sort(stoges.begin(), stoges.end(), [](const person& p1, const person& p2) {
		return p1.get_name() < p2.get_name(); //sort vector object according to name-> 'a' comes before 'b' like this
	});

	for_each(begin(stoges), end(stoges), [](const person& p) {
		cout << p << endl;
		});

	cout << endl;

	sort(stoges.begin(), stoges.end(), [](const person& p1, const person& p2) {
		return p1.get_age() < p2.get_age(); //sort vector object according to age-> smallest comes first
		});

	for_each(begin(stoges), end(stoges), [](const person& p) {
		cout << p << endl;
		});
}
void test8() {
	cout << "\ntest8======================" << endl;
	vector <int> vec{ 34,23,1,2,45,67,87,98,54 };
	sort(vec.begin(), vec.end());
	cout << "[ ";
	for (const auto i : vec) {
		cout << i << " ";
	}
	cout << "]" << endl;
   }


	int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7(); 
	test8();
	return 0;
}