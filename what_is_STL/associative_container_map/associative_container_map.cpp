#include<map>
#include<iostream>
#include<set>
#include<string>
using namespace std;

void display(const map<string, set<int>>& m) {
	cout << "[";
	for (const auto& i : m) {
		cout << i.first << ":[";
		for (const auto& set_element : i.second)
			cout << set_element << " ";
		cout << "] ";
	}
	cout << "] " << endl;
}

template <typename T1, typename T2>
void display(const map <T1,T2> &I) {
	cout << "[ ";
		for (const auto& elem : I) {
			cout << elem.first << ":" << elem.second << " ";
		}
		cout << "] " << endl;
}

void test1() {
	//maps
	cout << "test1==============================" << endl;
	map<string, int> m{ // string->key & int-> value.
		{"larry",3},
		{"moe", 1},
		{"curly",2}
	};
	display(m);

	m.insert(pair<string, int>("anna", 10));
	display(m);

	m.insert(make_pair("manish", 22));
	display(m);// [" "] -> is the key
	display(m);

	m["frank"] += 10;
	display(m);

	m.erase("frank");
	display(m);

	cout << "count for manish : " << m.count("manish") << endl;
	cout << "count for frank: " << m.count("frank") << endl;

	auto it = m.find("larry");
	if (it != m.end());
	cout << "found: " << it->first << ":" << it->second << endl;

	m.clear();

	display(m);
}

void test2() {
	cout << "\ntets2====================================" << endl;

	map<string, set<int>> grades{
		{"larry", {100,90}},
		{"moe", {94}},
		{"curly", {80,90,100}}
	};

	display(grades);

	grades["larry"].insert(95);

	display(grades);

	auto it = grades.find({ "moe" });
	if (it != grades.end()) // found "moe"
	{
		it->second.insert(1000); // insert 1000 into moe's value
		                         // it->first is the key and it->second is the value
	}
	display(grades);
}
int main() {
	test1();
	test2();
	return 0;
}