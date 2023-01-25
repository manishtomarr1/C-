#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<array>
#include<algorithm>
using namespace std;

// display any vector of integer using range based for loop 

void display(const vector <int>& vec) {
	cout << "[ ";
	for (auto& i : vec) {
		cout << i << " ";
	}
	cout << "]" << endl;

}

void test1() {
	cout << "\n========================================\n" << endl;
	vector<int>num1{ 1,2,3,4,5 };
	auto it = num1.begin(); //point to 1 -> it is the iterator, is not a pointer, it is the object 
	cout << *it << endl;

	it++;
	cout << *it << endl; // 2

	it += 2;
	cout << *it << endl; // 4

	it -= 2;
	cout << *it << endl; // 2

	it = num1.end() - 1; // 5  ->point to the last element of container because end() is the possition of the last+1.
	cout << *it << endl;
}

void test2() {

	//display all vector element through iterators

	vector<int> vecc{};
	cout << "how many element you wanna to fill : " << endl;
	int a;
	cin >> a;
	int b;
	
	for (int i = 0; i < a; i++) {
		cout << "enter the element at possition [" << i + 1 << "]" << endl;
		cin >> b;
		vecc.push_back(b);
	}
	cout << "\n=======================================\n" << endl;
	cout << "[ ";
	vector <int> ::iterator it = vecc.begin(); // decleare a iterator to the vector
	while (it != vecc.end()) {
		cout << *it << " ";
		it++;
	}
	cout << "]";
	cout << endl;

// change all vector elewment to 0

	cout << "\n change all vector elewment to 0 \n" << endl;
	it = vecc.begin(); // because it is pointing to vecc.end() that's why we change to vecc.begin()
	while (it!= vecc.end()) {
		*it = 0;
		it++;
	}

	display(vecc);
}

void test3() {

	//using a const iterator -> we cannot change the element of container through iterator
	
	vector<int> vec1{};
	cout << "how many element you wanna to fill : " << endl;
	int a;
	cin >> a;
	int b;

	for (int i = 0; i < a; i++) {
		cout << "enter the element at possition [" << i + 1 << "]" << endl;
		cin >> b;
		vec1.push_back(b);
	}
	cout << "\n===========================\n" << endl;
	cout << "[ ";

	vector <int> ::const_iterator it1 = vec1.begin();
	//auto it1=vec1.cbegin(); // these two lines are same we use one from these two for declearing constant iterator

	while (it1 != vec1.end()) {
		cout << *it1 << " ";
		it1++;
	}
	cout << "]";
	cout << endl;

	//compilar erroe while change the elememnt
	while (it1 != vec1.end()) {
		//*it1 = 0; // comp[ilar error : read only
		
		it1++;
	}
}

void test4() {
	cout << "\n===============reverse iterators===============\n";
//more iterators
//more iterators
//using the reverse iterators
	 //-> display the vector in reverse order
	vector<int> vec2{ 1,2,3,4,5 };
	vector<int> ::reverse_iterator it3 = vec2.rbegin(); // reverse iterator over vector ints starts at last index value i.e 5 
	// auto it3=vec2.rbegin();
	while (it3 != vec2.rend()) {
		cout << *it3 << endl;
		it3++;
	}

	
// const reverse iterators over a list

	cout << "\n================list===============\n";
	list<string> name{ "manish", "priyanshu", "gaurav", "vishesh" };
	list<string> ::const_reverse_iterator it4 = name.crbegin();
	//auto it4 = name.crbegin(); // iterate over the list of strings point to vishesh

	cout << *it4 << endl; // // vishesh
	it4++; //point to gaurav
	cout << *it4 << endl; // gaurav

	it4 = name.crbegin();
	cout << "\ndisplay whole list\n" << endl;
	while (it4 != name.crend()) {
		cout << *it4 << endl;
		it4++;
	}

//iterate over a map
	cout << "\n=================map=======================\n" << endl;
map<string, string> favorites{
	{"manish","c++"},
	{"priyanshu", "dsa"},
	{"gaurav", "js"},
	{"vishesh","gandu"}
};
auto it5 = favorites.begin(); //iterate over map of string , string pairs
 while (it5 != favorites.end()) {
	 cout << it5->first << " " << it5->second << endl;
	 it5++;
}
 }

void test5(   ) {
	//iterate over a subset of a container
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	auto start = vec.begin() + 2;
	auto finish = vec.end() - 3;
	while (start != finish) {
		cout << *start << endl;
		start++;
	}
}
int main() {

	//test1();
	//test2();
    //test3();
	//test4();
	test5();
	return 0;
}
