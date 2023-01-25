#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void intersection(vector<int> vec1, vector<int>vec2) {

	
	vector<int>intersection;
	int sizeof1 = vec1.size();

	int i = 0;
	int j = 0;
	while (i < sizeof1) {
		if (vec1.at(i) == vec2.at(j)) {
			if (vec1.at(i) == vec2.at(j) && i == vec1.size() - 1) {
				break;
			}
			intersection.push_back(vec2.at(j));
			j=0;
			i++;
			if (j == vec2.size()) {
				j = 0;
				i++;
			}
		}
		else if (vec1.at(i) != vec2.at(j)) {
			j++;
			if (j == vec2.size()) {
				j = 0;
				i++;
			}
		}
	}

	sort(intersection.begin(), intersection.end());
	for (int i = 0; i < intersection.size(); i++) {
		cout << intersection.at(i) << " ";
	}
	


}

int main() {

	vector<int>vec1{ 10,10 };
	vector<int>vec2{ 10 };

	intersection(vec1, vec2);

	return 0;

}