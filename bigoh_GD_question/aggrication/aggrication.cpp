/*
* has a relationship i.e doctor has patient, or agar patient na aaye yah delete ho jaye esse doctor ko koi fark nhi padega
*/
#include<iostream>
using namespace std;

class patient{

public :
	string name;

	string getname(string* nameval) {
		name = *nameval;

		return name;
	}

};
class doctor {

public :

	void checkpatient(patient* p1) {

		cout << "patient name : " << p1->name << endl;
	}
};

int main() {
	{
		string name = "manish";

		patient p1;
		p1.getname(&name);

		{
			doctor d1;
			d1.checkpatient(&p1);
		}

	}

	return 0;

}