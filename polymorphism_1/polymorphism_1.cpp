#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector <int> temp_fer;
vector <int> temp_cal;

void display(vector<int> vec) {

	cout << "[ ";
	for (auto& i : vec) {
		cout << i << " ";
	}
	cout << "]" << endl;
}

vector <int> convert(int start, int end, int gap) {

	for (int i = start; i <= end; i += gap) {
		temp_fer.push_back(i);
	}

	auto calcious = 0;

	for (int i = 0; i < temp_fer.size(); i++) {

		calcious = (temp_fer.at(i) - 32) * 5 / 9;
		temp_cal.push_back(calcious);
	}

	display(temp_cal);

	return temp_fer;
}

int main() {

	convert(0, 100, 20);
	return 0;
}
