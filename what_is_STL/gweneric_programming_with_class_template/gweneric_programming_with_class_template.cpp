#include<iostream>
#include<string>
#include<vector>
using namespace std;
template<typename T>
class item {
private:
	string name;
	T value;
public:
	item(string name) : name(name) {
		cout << "name" << endl;
	}
	item(string name_val, T value_val)                                             
		: name(name_val), value(value_val) {}
	string get_name() const {
		return name;
	}
	T get_value()const {
		return  value;
	}
};
template<typename T1 , typename T2>//template perameter list
struct my_pair {
	T1 first;
	T2 second;
	//T third;
};
int main() {
	item<int> item1{ "frank",1 };
	cout << item1.get_name() << " " << item1.get_value() << endl;

	item<string> item2{ "manish" , "c++" };
	cout << item2.get_name() << " " << item2.get_value() << endl;

    item<item<string>> item3{ "manish" ,{"c++", "student"} }; // here value be an the item object
    cout << item3.get_name() << " "
    	<< item3.get_value().get_name() << " "
    	<< item3.get_value().get_value() << endl;

	//item item3("manish"); -> we cannot make any constructor without template in template class

	cout << "\n===============================\n" << endl;
	vector<item<double>> vec{};
	vec.push_back(item<double>("manish", 100.00));
	vec.push_back(item<double>("priyanshu",106.00));
	vec.push_back(item<double>("gaurav", 107.00));
	for (const auto& a : vec)
		cout << a.get_name() << " " << a.get_value() << endl;

	cout << "\n================================\n" << endl;
	my_pair <string, int> p1{ "frank",100 };
	my_pair <int,double> p2{ 190,100.14 };

	cout << p1.first << endl;
	cout << p2.second << endl;

	return 0; 
}