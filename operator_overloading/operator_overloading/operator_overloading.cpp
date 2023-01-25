#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class mystring {
private:
	char* str;
public:
	mystring();
	mystring(const char* s);
	mystring(const mystring & source);
	~mystring();
	void display() const;
	int get_lenght() const;

};
// no arg constructor
mystring::mystring() 
	//: str{ nullptr }  // matlab str mae nullptr assigned kra .
{    
	str = nullptr; // ese bhi le skte hai.
	str = new char[1];
	*str = '\0'; // means we make [] 
	std :: cout << "no arg constructor call\n";
	std:: cout << *str << endl;
 }
// overloaded constructor
mystring::mystring(const char* s)
	: str{ nullptr } {
	// str{ nullptr }; // yeh kyu nhi kr skte?
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[strlen(s) + 1]; // strlen(string_name) is the function which tells us the lenght of the string. +1 isliuye kra kyuki end me \0 k liye hota hai space termination k liye
		strcpy_s (str,sizeof str ,s); // strcpy (jisme copy krna hai , jo copy krna hai) is the function which copy one string to another string
		std::cout << "overloaded constructor calls\n";
		std::cout << str << endl;
	
	}
}
// copy constructor 
	mystring::mystring(const mystring & obj) 
	:str{ nullptr }
	{
		// here we do deep copy
		str = new char[strlen(obj.str) + 1]; // yeh yha se overloaded constructor pe jayega then wha str mae hello fill hai wohi call kia hai yha bs
		strcpy_s (str,sizeof str , obj.str);
	}
// distructor 
mystring:: ~mystring() {
	delete[] str; // here we free the memory jo function out of scope hota rhega uski memory heap me se free hoti rhege.
std::cout << "distructor call \n";

}
// display method
void mystring :: display () const { // syntax for declearing the getters from outside the class
	cout << str << ":" << get_lenght() << endl;
} 
int mystring::get_lenght() const {
	return strlen(str);
}
int main() {
	mystring empety;
	mystring s1("manish");
	mystring s2(s1);
	empety.display();
	s1.display();
	return 0;
}