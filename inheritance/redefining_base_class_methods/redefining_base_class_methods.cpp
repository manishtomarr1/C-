#include<iostream>
using namespace std;
class account {
protected :
	double balance{0.0};
public :
	account();
	account(double balance);
	void deposite(double ammount);
	void withdraw(double ammount);
 };
account :: account ()
	: account(0.0) { // delegate constructor from overloaded constructor.

}
account::account(double balance)
	: balance(balance) { // jo args pass krenge wo uppar wale balance me jayega.
	cout << "total ammount : " << balance << endl;
}
void account::deposite(double ammount) {
	balance += ammount;
	cout << "total ammount remaining : " << balance << endl;
}
void account::withdraw(double ammount) {
	if (balance - ammount >= 0)
	{
		balance -= ammount;
		cout << "ammount debited : " << ammount << endl;
		cout << "remanining ammount : " << balance << endl;
	}
	else
		cout << "insufficient funds!" << endl;
}
class saving_account : public account {
protected :
	double instrest_rate{0};
	 
public :
	saving_account();
	saving_account(double balance, double instrest_rate);
	void deposite(double ammount);
	// withdraw is inherited 

 };
saving_account::saving_account(double balance, double instrest_rate) 
	: account(balance), instrest_rate{ instrest_rate }{ // initilisation list here we call base constructor and assign value of instrest_rate in 
	                                                // respected variable.
}
saving_account::saving_account()
	: saving_account(0.0, 0.0) { // delegating from uppar wala constructor

}
void saving_account::deposite(double ammount){
	ammount = ammount + (ammount * instrest_rate / 100);
	cout << "your instrest rate is :" << instrest_rate << endl;
	account::deposite(ammount); //syntax for inherit the base class method kyuki hme yha balance mae dalni thi value toh code copy na krke 
	                            // inherit kr lia.
	cout << "total mount available : " << balance << endl; // ab yha updated balance call hoga uppar wale function ka nhi.
	}
int main() {
	account a1(1000);
	a1.deposite(1000);
	a1.withdraw(1800);
	//a1.withdraw(500);
	saving_account s1(1000,6.0);
	s1.deposite(1000);
    s1.withdraw(500); // yeh account wala withdraw yhi kaam krega inherited hogya yha.
   
	return 0;
}