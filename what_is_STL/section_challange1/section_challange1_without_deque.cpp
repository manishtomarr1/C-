#include<iostream>
#include<deque>
#include<algorithm>
#include<vector>
#include<cctype>
#include<string>
#include<iomanip>
using namespace std;


void func() {
	//deque <string> d;
	cout << "enter any string : ";
	cout << endl;
	string s;
	getline(cin, s);

  s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalpha(c); }), s.end()); // ->another way to delete the non alphabetic charactor
	
	
//auto it = (s.begin());
//  while (it != s.end()) {
//  	if (isalpha(*it) == false)
//  		s.erase(it);
//  	it++;
//  }
	transform(s.begin(), s.end(), s.begin(), ::toupper); // convert to upper case

	string rev= string(s.rbegin(), s.rend());
	
	if (s == rev)
		cout << "string " << s << " is palindrome" << endl;
	else
		cout << "string " << s << " is not palindrome" << endl;

}
int main() {
	func();
	return 0;
}