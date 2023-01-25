#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class person {
	friend ostream& operator << (ostream& os, const person& p);
	string name;
	int age;
public :
	person() = default;
	person(string name, int age)
		: name(name), age(age) {}
		bool operator <(const person & rhs) const {
			return this->age < rhs.age;
		}
		bool operator==(const person& rhs)const {
			return (this->name == rhs.name && this->age == rhs.age);
		}
};

ostream& operator << (ostream& os, const person& p) {
	os << p.name << " " << p.age;
	return os;
}

// use for_each and a lambda expression to display vector elements
void display2(const vector<int>& vec) {
	cout << "[ ";
	for_each(vec.begin(), vec.end(), [](int x) {cout << x << " "; });
	cout << "]" << endl;
}

// template function to display any vector 
template<typename T >
void display(const vector <T>& vec) {
	cout << "[ ";
	for (const auto& elem : vec)
		cout << elem << " ";
	cout << "]" << endl;
}

void test1() {
	cout << "\n=====================================" << endl;

	vector<int> vec{ 1,2,3,4,5 };
	display(vec);

	vec = { 2,4,5,6 };
	display2(vec);

	vector<int>vec1(10, 100); // ten 100's in the vector
	display(vec1);
}

void test2() {
	cout << "\n=============================" << endl;

	vector<int> vec{ 1,2,3,4,5 };
	display(vec);
	cout << "\n vec size: " << vec.size() << endl;
	cout << "\n vec max size : " << vec.max_size() << endl;
	cout << "vec capacity : " << vec.capacity() << endl; 
	// if we inc the capacity of the vector the new vector is create and that vector is doubled in size of the previous vector

	vec.push_back(6);
	display(vec);
	cout << "\n vec size: " << vec.size() << endl;
	cout << "\n vec max size : " << vec.max_size() << endl;
	cout << "vec capacity : " << vec.capacity() << endl;

	vec.shrink_to_fit(); // shrink the memory of the vector to exactly the vector size -> no wastage of memory.
	display(vec);
	cout << "\n vec size: " << vec.size() << endl;
	cout << "\n vec max size : " << vec.max_size() << endl;
	cout << "vec capacity : " << vec.capacity() << endl;

	vec.reserve(100); // reserve 100 block of memory in vector in contigeous -> capacity is now 100. we wont expant untill it hits 101 element
	display(vec);
	cout << "\n vec size: " << vec.size() << endl;
	cout << "\n vec max size : " << vec.max_size() << endl;
	cout << "vec capacity : " << vec.capacity() << endl;

}

void test3() {
	cout << "\ntest3====================================" << endl;

	vector<int> vec{ 1,2,3,4,5 };
	display(vec);

	vec[0] = 100;
	vec.at(1) = 200;

	display(vec);
}

void test4() {
	cout << "\ntest4===============================" << endl;
	vector<person> stooges;

	person p1{ "larry" , 16 };
	display(stooges);

	stooges.push_back(p1);
	display(stooges);

	stooges.push_back(person{ "manish" , 28 });
	display(stooges);

	stooges.emplace_back("curly", 30); 
	display(stooges);
}

void test5() {
	cout << "\ntest5===============================" << endl;

	vector<person> stooges{
		{"larru",12},
		{"moe", 18},
		{"curly", 19},
	};

	display(stooges);
	cout << "\nfront: " << stooges.front() << endl;
	cout << "\nback: " << stooges.back() << endl;

	stooges.pop_back(); // delete last element of vector.
	display(stooges);
}

void test6() {
	cout << "\ntest6===============================" << endl;
	vector<int> vec{ 1,2,3,4,5 };
	display(vec);

	vec.clear(); // clear all vector element 
	display(vec);

	vec = { 1,2,3,4,5,6,7,8,9,10 };
	display(vec);
	vec.erase(vec.begin(), vec.begin()+2); // erase element from first element to 2 element-> erase element before begin+2
	display(vec);

	vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//erase all even number
	auto it = vec.begin();
	while (it != vec.end()) {
		if (*it % 2 == 0)
			vec.erase(it);
		else
			it++; // only increment if not erase

	}

	display(vec);       

}

void test7() {
	cout << "\ntest7=============================" << endl;
	vector <int> vec{ 1,2,3,4,5 };
	vector<int> vec1{ 4,5,6,7,8,9 };

	display(vec);
	display(vec1);
	cout << endl;


	vec1.swap(vec);
	//vec now vec1 & vec1 now vec

	display(vec);
	display(vec1);
}

void test8() {
	cout << "\ntest8=================================" << endl;

	vector <int> vec{ 1,4,7,3,2,8,9,10 };
	display(vec);
     
	sort(vec.begin(), vec.end());
	display(vec);

	reverse(vec.begin(), vec.end()); // now vector sort in reverse order.
	display(vec);
}

void test9() {
	/*
	* back_inserter contrunts a back-insert iterator that inserts new elements
	* at the end of container it applied to. it's a special output iterator
	* it,s awesome!!! and very efficient
	* there is also front_inserter we can use with deque and list
	* copy one list to another using an iterator and back_inserter
	*/

	cout << "\ntest9==================================" << endl;

	vector<int> vec1{ 1,2,3,4,5 };
	vector <int> vec2{ 10,20 };

	display(vec1);
	display(vec2);

	copy(vec1.begin(), vec1.end(), back_inserter(vec2));//element will insert in that vector which pass in back_inserter()
	display(vec1);
	display(vec2);

	// copy if element is even 
	vec1 = { 1,2,3,4,5,6,7,8,9,10 };
	vec2 = { 10,20 };

	display(vec1);
	display(vec2);
	cout << endl;

	copy_if(vec1.begin(), vec1.end(),back_inserter(vec2), [](int x) {return (x % 2 == 0); });
	display(vec1);
	display(vec2);

}

void test10() {
	cout << "\ntest10=================================" << endl;
	//transform over 2 range

	vector<int> vec1{ 1,2,3,4,5,6};
	vector<int> vec2{ 10,20,30,40,50 ,60};
	vector<int> vec4{ 8,9 };
	vector<int> vec3;

	// 1*10,2*20,3*30,4*40,5*50
	transform(vec1.begin(), vec1.end(), vec2.begin(), back_inserter(vec3),
	                                                          	[](int x, int y) {return x * y ; });
	display(vec3);
} 

void test11() {
	//insert vec2 into vec1 before 5
	cout << "\ntest11====================================" << endl;
	vector<int> vec1{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> vec2{ 100,200,300,400,500 };

	display(vec1);
	display(vec2);
	cout << endl;

	auto it = find(vec1.begin(), vec1.end(), 5);
	if (it != vec1.end()) {
		cout << "inserting...." << endl;
		vec1.insert(it, vec2.begin(), vec2.end());
	}
	else {
		cout << "5 not found " << endl;
	}
	display(vec1);

}

int main() {

	//test1();
	//test2();
	//test3();
    //test4();
    //test5();
    //test6();
    //test7();
    //test8();                              
    test9();
    //test10();
	test11();
	return 0;
}