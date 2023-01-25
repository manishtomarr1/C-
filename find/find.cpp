#include<iostream>
#include<vector>
using namespace std;

bool find(vector<int>& vec, int num) {
	
	for (int i = 0; i < vec.size(); i++) {
		if (vec.at(i) == num) {
			cout << num << " find : ";
			return true;
			
		}
	}

	return false;
}

int main() {

	vector<int> vec{ 1,4,2,3,6,7,8,9,11 };
	int num = 8;

	cout << boolalpha;

	cout << find(vec, num);

	return 0;

}