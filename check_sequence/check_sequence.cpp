#include<iostream>
#include<vector>
using namespace std;

bool check_sequence(vector <int>& vec) {
	int num = vec.size();
	int start = 0;
	int first = vec.at(0);
	int second = vec.at(1);
	int incpoint = 0;
	int count = 0;

	if (vec.at(0) < vec.at(1)) {

		for (int i = 2; i < vec.size(); i++) {

			if (vec.at(i) > vec.at(i - 1) && vec.at(i)) {
				i = i;
			}

			else
				return false;
		}

		return true;
	}

	if (vec.at(0) > vec.at(1)) {

		auto it = vec.begin();

		for (int i = 2; i < vec.size(); i++) {

			if (vec.at(i) > vec.at(i - 1) && vec.at(i)) {

				count = i;
			}

			else if (vec.at(i) < vec.at(i - 1) && vec.at(i)) {

				incpoint = vec.at(i);
				count = i;
				break;
			}
		}

		for (int i = count; i < vec.size(); i++) {

			if (i == vec.size() - 1)
				return true;

			if (i && vec.at(i + 1) > vec.at(i) ) {
				i = i;
			}
			 
			else
				return false;
		}

		return true;
	}

}

int main() {

	vector <int> vec{ 4,3,1,5,6,7,8,9,10 };
	cout << boolalpha;
	cout << check_sequence(vec) << endl;

	return 0;
}

