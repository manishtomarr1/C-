#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool equal(vector <string> vec1, vector<string> vec2 ) {
	vector<string> v{};
	string a{};
	for (int i = 0; i < vec1.size(); i++) {
		auto it = find(vec2.begin(), vec2.end(), vec1.at(i));
		if (it != vec2.end())
			v.push_back(*it);
	}
	if (v.size() == 0)
		return false;
	if (v.size() != 0)
		return true;
}
int main() {
	vector<string > vec1{ "a", "b", "c", "d", "l" , "h" , "h" , "k"};
	vector<string > vec2{ "v", "z", "p", "h" ,"k"};
	cout << boolalpha;
	cout << equal(vec1, vec2) << endl;
	return 0;
}