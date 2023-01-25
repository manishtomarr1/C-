#include<iostream>
using namespace std;
class account { // this is the base class
public :
	double ammount_avalible{ 0 };
	void deposite(double ammount);
	void withdraw(double ammount);
};
void account::deposite(double ammount) {
	ammount_avalible = ammount;
	cout << "ammount deposite : " << ammount << endl;
}
void account::withdraw(double withdraw) {
	if (withdraw > ammount_avalible)
		cout << "dont have sufficient ammount enter valid ammount :  " << endl;
	else {
		cout << "ammount withdraw : " << withdraw << endl;
		cout << "avalible ammount : " << (ammount_avalible - withdraw) << endl;
	}

}
// now we derived saving account for an account class 
class saving_account  : public account { // syntax class new class_name : access specifier of that from from we want to derived and thr name of that class
	using account::withdraw;                               // called derived class.
public :
	void deposite(double ammount);
	void withdraw(double withdraw);
};
void saving_account::deposite(double ammount) {
	ammount_avalible = ammount; // yeh jo ammount_avalible data member hai yeh inherit hua hai base class se derived class mae .
	cout << "ammount deposite : " << ammount << endl;
 }
void saving_account::withdraw(double ammount) {
	if (ammount > ammount_avalible)
		cout << "dont have sufficient ammount enter valid ammount :  " << endl;
	else if ((ammount_avalible - ammount) < 1000)
		cout << "you do not withdraw money because of minimum ammount" << endl;
	else {
		cout << "ammount withdraw : " << ammount << endl;
		cout << "avalible ammount : " << (ammount_avalible - ammount) << endl;
	}
}
int main() {
	// made a base class object 
	account a1;
	a1.deposite(2000);
	a1.withdraw(1200);
	cout << endl;
	// create object dynamically
	account* acc{ nullptr };
	acc = new account;
	acc->deposite(1200);
	acc->withdraw(800);
	delete acc;
	// now create object for the derived class 
	cout << endl;
	saving_account s_ac;
	s_ac.deposite(2000.12);
	s_ac.withdraw(1100);
	// create abject dynamically
	cout << endl; 
	saving_account* sav_ac{nullptr};
	sav_ac = new saving_account;
	sav_ac->deposite(3000);
	sav_ac->withdraw(2000);
	delete sav_ac;
	return 0;
}