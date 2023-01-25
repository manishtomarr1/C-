//double ended queue -> we work on the front and we also work on the back
#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

// template function to display any deque

template<typename T>
void display(deque<T>& d) {
	cout << "[ ";
	for (const auto& i : d) {
		cout << i << " ";
	}
	cout << "]" << endl;
}

void test1() {
	cout << "\ntest1==============================" << endl;

	deque<int> d{ 1,2,3,4,5 };
	display(d);

	d = { 2,4,5,6 };
	display(d);

	deque<int> d1(10, 100); // ten 100 store in deque
	display(d1);

}

void test2() {
	//push and pops
	cout << "\ntest2==================================" << endl;

	deque<int> d{ 0,0,0 };
	display(d);


	d.push_back(10);
	d.push_back(20);
	display(d);

	d.push_front(100);
	d.push_front(200);
	//first add 100 at front then add 200 at front both are store at front 100 is not delete when 200 is add.
	display(d);

	cout << "front: " << d.front() << endl; //200
	cout << "back : " << d.back() << endl; // 20
	cout << "size : " << d.size() << endl; // 7

	d.pop_back(); // delete last element
	d.pop_front();// delete front element
	display(d);
}

void test3() {
	//insert all even number into the back of the deque and all odd number into the front of the deque
	cout << "\ntest3==================================" << endl;

	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	deque<int> d1{};
	for (const auto& i : vec) {
		if (i % 2 == 0)
			d1.push_back(i);
		else
			d1.push_front(i);
	}
	display(d1);

}

void test4() {
	//push front vs back ordering
	cout << "\ntest4=================================" << endl;

	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	deque<int> d;

	for (const auto& i : vec) {
		d.push_front(i); // 10 9 8 7 6 5 4 3 2 1 bacause i store in front first 1 is store in front{1} then 2 store in front{2,1}
	}

	display(d);

	d.clear(); // delete all element of the deque

	for (const auto& i : vec) {
		d.push_back(i); // 1,2,3,4,5,6,7,8,9,10
	}

	display(d);
}

void test5() {
	cout << "\ntest5=========================================" << endl;
	// same as test 4 but here use copy algorithm

	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	deque <int> d;

	copy(vec.begin(), vec.end(), front_inserter(d));
	display(d);

	d.clear();

	copy(vec.begin(), vec.end(), back_inserter(d));
	display(d);
}
int main() {
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}