#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findunique(vector<int>vec) {

	sort(vec.begin(), vec.end());

	int i = 0;
	int count = 1;
	
	while (i < vec.size()) {
		if (i < vec.size() - 1) {
			if (vec.at(i) == vec.at(i + 1)) {
				count++;
				i++;
			}

			if (count == 1) {
				return vec.at(i);
				break;
			}

			else if (vec.at(i) != vec.at(i + 1)) {
				count = 1;
				i = i + 1;
			}
		}
		if (i == vec.size() - 1) {
			return vec.at(i);
			break;
		}
	}
}

int main() {
	vector<int> vec{ 2,3,4,3,4,2,5};

	cout << findunique(vec) << endl;
	return 0;
}