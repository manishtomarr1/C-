#include<deque>
#include<vector>
#include<cctype>
#include<algorithm>
#include<iostream>
using namespace std;

template<typename T>
void display() {
	vector<T> vec;
	cout << "[ ";
	for (const auto& i : vec)
		cout << i;
	cout << "]";
	cout << endl;
}

bool is_palandrome(const string &s) {
	deque <char> d;

}
