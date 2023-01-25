#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector < int > vec) {

	cout << "[ ";
	for (const auto& i : vec) {
		cout << i << " ";

	}
	cout << "]" << endl;    
}

void func(vector <int> vec) {
	int max;
	int large = *max_element(vec.begin(), vec.end());

	display(vec);

	
	int reverse = 0;
	int rightdigit;
	while (large != 0) {
		rightdigit = large % 10;
		reverse = (reverse * 10) + rightdigit;
		large = large / 10;
	}
	
	max = *max_element(vec.begin(), vec.end());

	auto it = vec.begin();

	while (it != vec.end()) {
		if (*it == max) {
			*it = max +reverse;
			break;
		}
		it++;
	}

	display(vec);
}

int main() {

	vector <int > vec{ 2,4,6,7,8,65,6,65,5 };

	func(vec);

	return 0;
}
