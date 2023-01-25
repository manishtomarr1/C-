// element are stored internally as a vector by default.
//element stored in the decreasing order -> the greatest number at on the top.
//no iterator are supported

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class person {
	friend ostream& operator << (ostream& os, const person& p);
	string name;
	int age;
public:
	person() :name{ "unknown" }, age{0}{}
	person(string nameval ,int ageval): name(nameval) , age(ageval){}
	bool operator < (const person& rhs) const {					 //for compare two objet in STL we use these methods overload == and < operator
		return this->age < rhs.age;	//jiski age jayda wo on the top							 //for compare two objet in STL we use these methods overload == and < operator
	}															 //for compare two objet in STL we use these methods overload == and < operator
	bool operator == (const person& rhs) const {				 //for compare two objet in STL we use these methods overload == and < operator
		return (this->name == rhs.name && this->age == rhs.age); //for compare two objet in STL we use these methods overload == and < operator
	}
};

ostream& operator << (ostream& os, const person& p) { 	// friend function use to display the object overloading << operator
	os << p.name << ":" << p.age;						// friend function use to display the object overloading << operator
	return os;											// friend function use to display the object overloading << operator
}

template <typename T>
void display(priority_queue <T> pq) {
	cout << "[";
	
	while (!pq.empty()) {
		T elem = pq.top();
		pq.pop();
		cout << elem  << " ";
}
	cout << "]" << endl;
}

void test1() {
	cout << "test1======================================" << endl;
	priority_queue <int> pq;
	for (int i : {1, 2, 3, 23, 45, 65, 76, 2, 3, 1, 67, 54, 89, 98, 34,23})
	pq.push(i);

	display(pq);

	cout << "size: " << pq.size() << endl;
	cout << "top : " << pq.top() << endl;

	pq.pop();// erase top (largest) element
	display(pq);
	cout << "top : " << pq.top() << endl;
	cout << "size: " << pq.size() << endl;
}

void test2() {
	cout << "\ntest2===================================" << endl;

	priority_queue<person> pq;
	pq.push(person{ "a", 10 });
	pq.push(person{ "b", 1 });
	pq.push(person{ "c", 14 });
	pq.push(person{ "g", 18 });	
	pq.push(person{ "e", 7 });
	pq.push(person{ "f", 27 });
	pq.emplace("d", 28);

	display(pq);
}

int main() {
	test1();
	test2();
	return 0;
}
