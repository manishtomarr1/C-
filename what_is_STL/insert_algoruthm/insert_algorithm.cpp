#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void func () {
	vector < int> vec1{ 1,2,3,4 };
	vector<int> vec2{ 5,6,7 };
	auto it = vec2.begin();
	auto a = vec2.at(0);
	vec2.insert(1, vec1.begin(), vec1.end());
	while (it != vec2.end()) {
		cout << *it;
		it++;
	}
}int main() {
	func();
	return 0;
}