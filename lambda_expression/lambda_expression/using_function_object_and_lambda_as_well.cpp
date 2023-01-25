#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
struct squre_functor {
	void operator () (int x) { 
		cout << x * x << " ";
	}
};
template <typename T>
struct displayer {
	void operator ()(const T& data) { // here T is the data type -> any datatype
		cout << data << " "; // here if we want to display the object we would have to overload the "<<" operator
	}
};

class multiplier {

private:
	int num{};
public:
	multiplier (int n) : num(n){}
	int operator() (int n) const {
		return n * num;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
	}
};
int main() {
	cout << "test1======================================" << endl;
	squre_functor squre; // creating object of that structor
	squre(4);// use the object as a function thats why it is called the function object -> behind the seen squre.operator()
	
	displayer <int> d1; // object of template structure
	displayer <string> d2;
	d1(100);           //display 100
	d2({ "manish" });  // display manish

	cout << "\ntest2============================" << endl;
	vector<int> vec{ 1,2,3,4,5 };
	vector<string> vec1{ "manish", "sudhanshu" , "ajay"};

	for_each(vec.begin(), vec.end(), squre); // 1,4,9,16,25
	cout << endl;

	for_each(vec.begin(), vec.end(), displayer<int>());// 1,2,3,4,5 
	cout << endl;

	for_each(vec.begin(), vec.end(), d1); // 1,2,3,4,5
	cout << endl;

	for_each(vec1.begin(), vec1.end(), displayer <string>()); // manish , sudhanshu, ajay
	cout << endl;
	
	for_each(vec1.begin(), vec1.end(), d2); // manish , sudhanshu, ajay
	cout << endl;

	// now we doing this same work using lambda here we do not use that temnplate class or those function object and etc

	cout << "\ntest3-> using lambda " << endl;
	for_each(vec.begin(), vec.end(), [](int x) {cout << x * x << " "; }); // 1,4,9,16,25
	cout << endl;

	for_each(vec.begin(), vec.end(), [](int x) {cout << x * 10 << " "; });
	cout << endl; // 10,20,30,40,50

	for_each(vec.begin(), vec.end(), [](int x) {cout << x << " "; }); // 1,2,3,4,5
	cout << endl;

	for_each(vec1.begin(), vec1.end(), [](string x) {cout << x << " "; }); // manish, sudhanshu, ajay
	cout << endl;
	//SO HERE WE USE LAMBDA EXPRESSION WE SEE THAT WE DONT HAVE NEED TO USE TEMPLATES AND FUNCTION OBJECT ONLY WE CREATE A
	//LAMBDA IN THE ALGORITHM AND GET THE SAME OUTPUT AS WE GET USING FUNCTION OBJECT OR TEMPLATE.
	//THATS WHY LAMBDA EXPRESSION IS MORE POWEFULL THEN FUNCTION OBJECT.

	cout << "\ntets4================================" << endl;

	multiplier mult(100);
	vec = { 1,2,3,4,5 };

	//transform changes the vector
    transform(vec.begin(), vec.end(), vec.begin(), mult);
    for_each(vec.begin(), vec.end(), d1); // 100,200,300,400
	cout << endl;

	// doing the same work using lambda
   vec = { 1,2,3,4,5 };
   
	transform(vec.begin(), vec.end(), vec.begin(), [](int x) {return  x * 100; });
	for_each(vec.begin(), vec.end(), [](int x) {cout << x << " "; });

	cout << endl;

	return 0;
}