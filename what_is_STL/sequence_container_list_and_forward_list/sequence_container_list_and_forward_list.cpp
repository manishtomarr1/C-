// we cannot access the elements of list through the ".at" and "[]" 
#include<iostream>
#include<list>
#include<iterator> // for std:: advance
#include<algorithm>
#include<string>
using namespace std;

class person {
	friend ostream& operator << (ostream& os, const person& p);
	string name;
	int age;
public :
	person() : name{ "unknown" }, age{ 0 } {}
	person(string nameval, int ageval)
		: name(nameval) , age(ageval){
}
	bool operator < (const person& rhs) const {
		return this->age < rhs.age;
	}
	bool operator ==(const person& rhs) const {
		return (this->name == rhs.name && this->age == rhs.age);
	}
};

ostream& operator<< (ostream& os, const person& p) {
	os << p.name << ":" << p.age;
	return os;
}

template <typename T>
void display (const list<T> &l) {
	cout << "[ ";
	for (const auto& i : l) {
		cout << i << " ";
	}
	cout << "]";
	cout << endl;
}

void test1() {
	cout << "\ntest1===========================================" << endl;
	list<int> l{ 1,2,3,4,5 };
	display(l);

	list<string> l1;
	l1.push_back("back");
	l1.push_front("front");
	display(l1);

	list<int> i2;
	i2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	display(i2);

	list<int> i3(10, 100);
	display(i3);

}

void test2() {
	cout << "\ntest2===================================" << endl;

	list<int> l{ 1,2,3,4,5,6,7,8,9,10 };
	display(l);
	cout << "size: " << l.size() << endl;

	cout << "front element: " << l.front() << endl;
	cout << "back element: " << l.back() << endl;

	l.clear();
	display(l);
	cout << "size : " << l.size() << endl; 
}

void test3() {
	cout << "\ntest3=============================" << endl;

	list<int> l{ 1,2,3,4,5,6,7,8,9,10 };
	display(l);

	l.resize(5);
	display(l);

	l.resize(10);
	display(l);

	list<person> persons;
	persons.resize(5); // uses the person default constructor
	display(persons);

}

void test4() {
	cout << "\ntest4==============================" << endl;

	list<int> l{ 1,2,3,4,5,6,7,8,9,10 };
	display(l);
	auto it = find(l.begin(), l.end(), 5);
	if (*it != l.back()) {
		l.insert(it, 100);
	}
	display(l);
	//it = address of 5 here;

	list<int> l2{ 1000,2000,3000 };
	l.insert(it, l2.begin(), l2.end()); 
	display(l);
	
	//it = address of 5 here;
	advance(it, -4); // point to the 100
	cout << *it << endl;
	//now it became the address of 100 here

	l.erase(it); // remove the 100 - iterator bacame invalid
	display(l);
}

void test5() {
	cout << "\ntest5==========================================" << endl;

	list<person> stooges{
		{"larry",18},
		{"moe" , 16},
		{"curly", 18},
	};

	display(stooges);
	string name;
	int age{};
	cout << "\nenter the name of the next stooges: ";
	getline(cin, name);
	cout << "\nenter there age :";
	cin >> age;

	stooges.emplace_back(name,age);
	display(stooges);

	// insert manish before moe
	auto it = find(stooges.begin(), stooges.end(), person{ "moe",16 });
	if (it != stooges.end())
		stooges.emplace(it,"manish", 22);
	display(stooges);

}

void test6() {
	cout << "\ntets6=================================" << endl;

	list<person> stooges{
		{"manish" ,22 },
		{"kallu",29},
		{"bolu" , 25 }
	};

	display(stooges);
	stooges.sort();
	display(stooges);
}

int main() {
	test1();
	test2();
    test3();
    test4();
    test5();
    test6();
	return 0;
}
