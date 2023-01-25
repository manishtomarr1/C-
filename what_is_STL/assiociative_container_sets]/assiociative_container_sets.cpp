#include<set>
#include<iostream>
#include<string>
using namespace std;
class person {
	friend ostream& operator << (ostream& os, const person& p);
	string name;
	int age;
public:
	person() : name{ "unknown" }, age{ 0 } {
	}
	person(string nameval, int ageval)
		:name(nameval), age(ageval) {
	}
	bool operator == (const person& rhs) const {
		return (this->name == rhs.name && this->age == rhs.age);
	}
};

ostream& operator << (ostream& os, const person& p) {
	os << p.name << ":" << p.age;
	return os;
}

template<typename T>
void display(const set <T> s) {
	cout << "[ ";
	for (const auto& i : s)
		cout << i << " ";
	cout << "]" << endl;
}         \

void test1() {
	cout << "test1==================================" << endl;
	set<int> s1{ 1,4,3,5,2, };
	display(s1);

	s1 = { 1,2,3,1,1,2,2,3,3,4,5 };
	display(s1);

	s1.insert(0);
	s1.insert(10);

	display(s1);

	if (s1.count(10)) // true if element present in the set
		cout << "10 is in the set" << endl;
	else
		cout << "10 is not in the set" << endl;

	auto it = s1.find(5);
	if (it != s1.end())
		cout << "found :" << *it << endl;

	s1.clear();
	display(s1);

}

void test2() {
	cout << "\ntest2=====================================" << endl;
	set<person> stooges{
		{"larry" ,1},
		{"moe" , 3},
		{"curly" ,2}
	};
	display(stooges);

	stooges.emplace("james", 30);
	display(stooges);

    stooges.emplace("manish", 30); //no-> 30 allready exist
    display(stooges);
    
    auto it = stooges.find(person{ "moe", 2 });
    if (it != stooges.end())
    	stooges.erase(it);
    
    display(stooges);
    
     it = stooges.find(person("XXXX", 50)); // remove james
    
    if (it != stooges.end());
    stooges.erase(it);
    display(stooges);

}

void test3() {
	cout << "\ntest3=================================" << endl;

	set<string> s{ "A","B","C" };
	display(s);
	auto result = s.insert("D");
	display(s);

	cout << boolalpha << endl;
	cout << "first: " << *(result.first);
	cout << "second : " << (result.second);

	cout << endl;

	result = s.insert("A");
	result = s.insert("a");
	display(s);

	cout << boolalpha;
	cout << "first: " << *(result.first) << endl;
	cout << "second: " << result.second << endl;

}
int main() {
	test1();
	//test2();
	test3();
	
	return 0;
}