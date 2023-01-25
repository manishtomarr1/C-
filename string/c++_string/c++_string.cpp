#include<iostream>
#include<string> // important
#include<iomanip>
using namespace std;
int main() {

	string s0; // empety & no garbage
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "kiwi" };
	string s4{ "apple" };
	string s5{ s1 }; // Apple
	string s6{ s1,0,3 }; // App
	string s7{ 10, 'X' }; // XXXXXXXXXX

	cout << s0 << endl; // no garbage
	cout << s0.length() << endl; // empty string
	cout << s1.length() << endl;

// comparison 
	cout << "\ncomparison" << endl;
	cout << boolalpha << endl;
	cout << s1 << " == " << s5 << ":" << (s1 == s5) << endl; //true Apple==Apple
	cout << s1 << " == " << s2 << ":" << (s1 == s2) << endl;//false Apple!= Banana
	cout << s1 << " != " << s2 << ":" << (s1 != s2) << endl;// true Apple!=Banana
	cout << s1 << " < " << s2 << ":" << (s1 < s2) << endl;//true Apple<Banana
	cout << s2 << " > " << s1 << ":" << (s2 > s1) << endl;// true Banana>Apple
	cout << s4 << " < " << s5 << ":" << (s4 < s5) << endl;//false apple>Apple
	cout << s1 << " == " << "Apple" << ":" << (s1 == "Apple") << endl;// true Apple==Apple

// assignment
	cout << "\nassignment" << endl;
	s1 = "watermelon";
	cout << "s1 is now: " << s1 << endl; // watermelon
	s2 = s1;
	cout << "s2 is now: " << s2 << endl;// watermelon

	s3 = "frank";
	cout << "s3 is now: " << s3 << endl; // frank
	
	s3[0] = 'c';
	cout << "s3 change first letter to 'c: " << s3 << endl; // crank
	s3.at(0) = 'p';
	cout << "s3 change first letter to 'p: " << s3 << endl; //prank

//concatenation
	s3 = "muskmelon";
	cout << "\nconcatenation" << endl;

	s3 = s5 + " and " + s2 + " juice";; // apple and watermelon juice
	cout << "s3 is now: " << s3 << endl; // apple and watermelon juice

	//s3 = "nice " + " cold" + s5 + "juice"; // compilar error -> here "nice" and "cold" is c style string literal we cannot concinate these using '+' operator
	
// for loop
	cout << "\nlooping\n" << endl;
	s1 = "Apple";
	for (size_t i{ 0 }; i < s1.length(); ++i) { //-> size_t is like we loop through string we know that i is not negative here so the perfect way to declare i
		cout << s1.at(i); //or s1[i] Apple
		cout << endl;
	}
	// range based for loop
	cout << "\nrange based foor loop\n" << endl;
	for (char i : s1) // for every charactor i through s1 
		cout << i;// print i
	cout << endl;

// substring
	cout << "\nsubstring\n" << endl;
	s1 = "this is a test";
	cout << s1.substr(0, 4) << endl; // this
	cout << s1.substr(5, 2) << endl; // is
	cout << s1.substr(8, 6) << endl; // a test

// erase
	cout << "\nerase\n" << endl;

	s1 = "this is a test";
	s1.erase(0, 5);// erese this from s1
		cout << "s1 is now : " << s1 << endl; //is a test

// getline
		cout << "\ngetline\n" << endl;

		string full_name;

		cout << "enter your full name : " << endl;
		getline(cin, full_name);
		cout << "your full name is : " << full_name << endl;

//find
		cout << "\nfind\n" << endl;

		s1 = "the secret word is boo";
		string word;

		cout << "enter the word to find: " << endl;
		cin >> word;

		int possition = s1.find(word);
		if (possition != string::npos)
			cout << "found " << word << " at possition: " << possition << endl;
		else
			cout << "sorry, " << word << " not found" << endl;
		cout << endl;
		return 0;
}