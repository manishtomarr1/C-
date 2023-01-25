#include<algorithm>
#include<iostream>
#include<string>
#include<cctype>
using namespace std; 

string convert(string example) {
	char check = example[0];
	if (isupper(check)) {
		transform(example.begin(), example.end(), example.begin(), ::toupper);
		return example;
	}
	if (islower(check)) {
		transform(example.begin(), example.end(), example.begin(), ::tolower);
		return example;
	}
}

int main() {

	cout << "enter any string : " << endl;
	string str;
	getline(cin, str);

	cout << convert(str) << endl;

	return 0;
}