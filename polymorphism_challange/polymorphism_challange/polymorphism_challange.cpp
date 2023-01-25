#include<iostream>
#include<string>
#include<vector>
using namespace std;
class account {
protected : 
	string name;
	double balance{ 0.0 };
public :
	virtual bool deposite(double ammount) = 0;
	virtual bool withdraw(double ammount) = 0;
};
class saving_account : public account {
public :
	int int_rate = 10;
	saving_account(string name_val = "unnamed account", double bal_val = 0.0)
	 {
		name = name_val;
		balance = bal_val;
		cout << balance << endl;
	}
	virtual bool deposite(double ammount) override {
		if (ammount < 0)
			cout << "invalid ammount" << endl;
		else {
			balance += (ammount) * (int_rate / 100);
			cout << balance << endl;
			return true;
		}
	}
	virtual bool withdraw(double ammount) override {
		if ((ammount - balance) < 0)
			cout << "insufficient ammount for withdraw" << endl;
		else
			balance -= ammount;
		cout << balance << endl;
		return true;

	}
};
class current_account : public account {
public :
	virtual bool deposite(double ammount) override  {
		if (ammount < 0)
			cout << "invalid ammount" << endl;
		else {
			balance += (ammount);
			cout << balance << endl;
			return true;
		}
	}
	virtual bool withdraw(double ammount) override {
		if ((ammount - balance) < 0)
			cout << "insufficient ammount for withdraw" << endl;
		else
			balance -= ammount;
		cout << balance << endl;
		return true;

	}
	
};
class trust_account : public account {
protected :
	const double ddt{ 1.50 };
public :
	virtual bool withdraw(double ammount) override {
		if ((ammount - balance) < 0)
			cout << "insufficient ammount for withdraw" << endl;
		else {
			balance -= ammount + ddt;
			cout << balance << endl;
			return true;
		}
}
	virtual bool deposite(double ammount) override {
		if (ammount < 0)
			cout << "invalid ammount" << endl;
		else {
			balance += (ammount);
			cout << balance << endl;
			return true;
		}
	 }

};
class checking_account : public account {
	const double ddt{ 50 };
	bool deposite(double ammount) {
		if (balance + ammount >= 5000) {
			ammount = (ammount + ddt);
			balance += ammount;
			cout << balance << endl;
		}
		else {
			balance += ammount;
			cout << balance << endl;
		}
		

		return true;
	}
};
int main() {
//account* a1 = new saving_account;
//a1->deposite(1000);
//a1->withdraw(500);
//return 0;
//
//account* a2 = new current_account;
//a2->deposite(1000);
//a2->withdraw(500);
	saving_account a1;
	a1.deposite(1000);
	a1.withdraw(700);
	return 0;
 }