#include<iostream>
#include<string>
#include<vector>
using namespace std;
class account {
public :
	virtual void withdraw(double ammount) { // use virtual function for polymorphism jis function ko override krna hai usko virtual banayenge. virtual keyword used for dynamic binding

		cout << "in account::withdraw" << endl;
	}
	virtual ~account() { // better practice for declearing virtaul distructor memory leak or resource bach jayege -> good practice 
		cout << "account distructor" << endl;
	}
};
class checking : public account {
public :
	virtual void withdraw(double ammount) { // not a requriment for adding virtual keyword in derived classes but best practise to do
		cout << "in checking::withdraw" << endl;
	}
	virtual ~checking() {
		cout << "checking distructor" << endl; // sbki class ka bnega virual lagana is the best practice
	}
};
class saving : public account {
public :
	virtual void withdraw(double ammount) {
		cout << "in saving::withdraw" << endl;
	}
	virtual ~saving() {
		cout << "saving distructor" << endl; // sbki class ka bnega virual lagana is the best practice
	}
};
class trust : public account {
public :
	virtual void withdraw(double ammount) {
		cout << "in trust::withdraw" << endl;
	}
	virtual ~trust() {
		cout << "trust distructor" << endl; // sbki class ka bnega virual lagana is the best practice
	}
};
int main() {
	cout << "===pointer==="<< endl;
	account *a1 = new account(); // kyuki function virtual hai toh dynamic binding hogi 
	account *a2 = new saving();
	account *a3 = new trust();
	account* a4 = new checking();
	
	 
	a1->withdraw(1000); // account ka call hoga
	a2->withdraw(1000);// saving ka call hoga
	a3->withdraw(1000);// trust ka call hoga
	a4->withdraw(1000);// checking ka call hoga

	account* ptr;  //using refrence in dynamic polymorphism
	trust t1;	   
	ptr = &t1;	   
	ptr->withdraw(1000);// call the withdraw function from trust.

	cout << "==clean up==" << endl;
	delete a1;
	delete a2;
	delete a3;
	delete a4;

	return 0;
}