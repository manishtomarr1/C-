#include<iostream>
#include<vector>
#include<string>
using namespace std;
string a;
string large_string(vector <string> str) {
	
	for (int i = 0; i < str.size(); i++) {
		 a = str.at(0);
		string b = str.at(i);
		if (b.length() > a.length()) {
			a = b;
		}
		else {
			a = a;
		}
	}
	cout << a << endl;
	return a;
}

int main() {
	vector <string> a{ "manish", "and" , "durgansh",  "pursuing", "masters", "of", "computer", "applications" };

	large_string(a);

	return 0;
      
}