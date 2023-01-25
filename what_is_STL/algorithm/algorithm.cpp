#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<string>
#include<cctype> // for including c style string functions
using namespace std;
	class person {
		string name;
		int age;
	public :
		person() = default;
		person(string nameval, int ageval)
			: name(nameval), age(ageval) {}

// way to compare two objects in stl
		bool operator < (const person& rhs)const { // way to compare two object -> user defined types
			return this->age < rhs.age; // if one person age is less then another person age 
		}
		bool operator == (const person& rhs) const {
			return (this->name == rhs.name && this->age == rhs.age); //compare two persons->when the age of both persons is same
		}
	};
	
// find the element in container
	/*
	* find algorithm do:-
	*                  first we declare the iterator to container 
	*                  find is compare all element to the given element if element is match it return that element
	*                  but if element does not match it gives us the last element of the container
	*/

	void find_test(){
		cout << "\n=====================================" << endl;
		
		vector <int> vec{};
		cout << "how many element" << endl;
		int a;
		cin >> a;
		for (int j = 0; j < a;j++) {
			cout << "enter the element number [" << j + 1 << "] :" << endl;
			int b;
			cin >> b;
			vec.push_back(b);
		}
		cout << "enter the number you wanna to find : " << endl;
		int z;
		cin >> z;
		auto loc = find(begin(vec), end(vec) ,z); // loc is iterator and then the syntax of the find function
		if(loc != end(vec) )
			std::cout << "find the numnber: " << *loc  <<endl;
		else
		 cout << "couldn't find the number " << z << endl;

	//list<person> players{
	//{"manish","24"},
	//{"priyanshu","25"},
	//{"gaurav","23"}
	//};
	//auto loc1 = find(players.begin(), players.end(), person{ "manish","24" });
	//if (loc1 != players.end())
	//	cout << "found " << endl;
	//else
	//	cout << "not found" << endl;
	}

// count the number of element of the container
	void count_test() {
		cout << "\n=========================" << endl;
		vector<int> numbers{ 1,2,3,4,1,4,5,6,1,5,1 };
		int num = count(numbers.begin(), numbers.end(), 1);
		cout << num << " occurence found" << endl;
	}

	void count_if_test(){

//count the number of occurencer of an element in a container		
// based on a predicate of lambda expression

		cout << "\n=================================" << endl;

//count if the element is even
		vector<int> vec{ 2,3,4,6,10,15,16,78 };
		int num = count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0; }); 
		cout << num << " even numbers found" << endl;
		// we use lambda exp here instesd of this we can use any function define bs us with even number logic or that type which we count

// if element is odd
		num = count_if(vec.begin(), vec.end(), [](int a) {return a % 2 != 0; });
		cout << num << " odd number found " << endl;

// if element is greator then 2
		num = count_if(vec.begin(), vec.end(), [](int b) {return b > 2; });
		cout << num << "numbers greater then 2 found" << endl;

	}

// replace occurence of element in the container
	void replace_test() {
		cout << "\n===========================================" << endl;
		vector<int> v{ 1,2,3,1,2 };
		for (auto i : v) {
			cout << i << " ";
		}
		cout << endl;

		replace(v.begin(), v.end(), 1, 10);
		for (auto i : v) {
			cout << i << " ";
		}
		cout << endl;
	}

	void all_of_test() {
		vector<int> vec{ 1,3,5,7,9,1,3,13,19,5 };
		if (all_of(vec.begin(), vec.end(), [](int x) {return x > 10; }))
		cout << "all the element are > 10 " << endl;
	    else
			cout << "not all element are > 10" << endl;
		if (all_of(vec.begin(), vec.end(), [](int x) {return x < 20; }))
			cout << "all the element are < 20 " << endl;
		else
			cout << "not all element are < 20" << endl;
	}

//transform element in the container
	void string_transform_test() {
		cout << "\n====================================" << endl;
		string str1{ "this is a test" }; 
		cout << "before transformation " << str1 << endl;
		transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
		cout << " after transformation :" << str1 << endl;
	}
int main() {
	find_test();
	count_test();
	count_if_test();
	replace_test();
	all_of_test();
	string_transform_test();
		return 0;
}