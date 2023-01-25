#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display (vector <int> vecc) {
	cout << "[ ";
	for (const auto& i : vecc) {
		cout << i << " ";
	}
	cout << "]" << endl;

}

void remove_zero(vector <int> vec) {
	int a=0;
	sort(vec.rbegin(), vec.rend());
	display(vec);

	auto it = vec.end();

	while (*it > 0) {
		vec.pop_back();
		it--;
	}

	display(vec);
			
}

int main() {
	vector <int>  vec{ 1,4,6,7,0,8,7,0,6,5,0,6,0,4 };

	remove_zero(vec);

	return 0;
}