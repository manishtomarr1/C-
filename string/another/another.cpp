#include<iostream>
#include<cstring> // for c style function
#include<cctype> // for the character-based function
using namespace std;
int main() {
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};
	//cout << first_name << endl; // display garbage 
	cout << "please enter your first name : " << endl;
	cin >> first_name;
	cout << "enter your last name: " << endl;
	cin >> last_name;
	cout << "--------------------" << endl;

	cout << "hello " << first_name << " your first name has " << strlen(first_name) << " charactors" << endl; //strlen() give lenght of string
	cout << "and your last name, " << last_name << " has " << strlen(last_name) << " charactors" << endl;

	strcpy(full_name,first_name); // copy full name to first name
	strcat(full_name, " ");// concinate full name and a space
	strcat(full_name, last_name); // concinate full name to last name
	cout << "your full name is : " << full_name << endl; // give full name and last name.

 //cout << "---------------------------------" << endl;
 //cout << "enter your full name: " << endl; //if we give manish tomar
 //cin >> full_name;
 //cout << full_name << endl; // give manish only it give the string before space

	cout << "enter your full name : " << endl;
	cin.getline(full_name, 50); // give the combined name i.e before or after space, here 50 is the limit which you going to be read
	cout << "your full name is : " << full_name << endl;

	cout << "---------------------------------------" << endl;
	strcpy(temp, full_name);
	if (strcmp(temp, full_name) == 0)
		cout << temp << " and " << full_name << " are the same" << endl;
	else
		cout << temp << " and " << full_name << " are not same" << endl;
	return 0;

}














