#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void display(vector<string>vec) {
	cout << "[ ";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}

	cout << "]" << endl;
}

void question(vector<string>strips) {

	sort(strips.begin(), strips.end());
	display(strips);
	
	int total = 0;
	int i = 0;
	int j = 1;

	while (total < strips.size()) {

		cout << strips[i][j];
		i++;

		if (i > strips.size() - 1) {
			total++;
			j++;
			i = 0;
			cout << endl;
		}
	}
}



int main() {

	vector<string> vec{ "3manish","5gaurav","1shivan","6amittr","8vishet","9ghaplu" };

	question(vec);
	return 0;
}