#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector <int> vec{ 1,2,3,4,5,6,0,9,8,7 };
	int sum = 9;

	for (int i = 0; i < vec.size(); i++) {
		int cal_sum;
		for (int j = i + 1; j < vec.size(); j++) {
			cal_sum = vec.at(i) + vec.at(j);
			if (cal_sum == sum)
				cout << "[ " << vec.at(i) << " " << vec.at(j) << " ]" << endl;
		}
		
	}
	return 0;
}