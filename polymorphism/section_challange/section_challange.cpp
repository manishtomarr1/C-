#include<iostream>
#include<vector>
#include<string>
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
public:
	friend std::ostream& operator<<(std::ostream& os, const saving_account& account) {
			os << "[account:" << account.name << ": " << account.balance << "]";
			return os;
			}
	const int interest_rate = 10;
	saving_account(string name_val = "none", double balance_val = 0.0)
	{
		name = name_val;
		balance = balance_val;
	}
	virtual bool deposite(double ammount) override {
		if (ammount < 0)
			cout << "invalid ammount to deposite" << endl;
		else {
			balance = (balance + ((ammount * interest_rate) / 100));
			balance += ammount;
			cout << balance << endl;
			return true;

		}
	}
	virtual bool withdraw(double ammount) override {
		if (balance - ammount < 0 )
			cout << "insufficient balance" << endl;
		else {
			balance -= ammount;
			cout << balance << endl;
			return true;
		}
	}


};

class current_account : public account {
public:
	virtual bool deposite(double ammount) override {
		if (ammount < 0) {
			cout << "invalid ammount to deposite" << endl;
			return false;
		}
		else {
			balance += ammount;
			cout << balance << endl;
			return true;
		}
	}
	
	virtual bool withdraw(double ammount) override {
		if (balance - ammount < 0)
			cout << "insufficient balance" << endl;
		else {
			balance -= ammount;
			cout << balance << endl;
			return true;
		}
	}
};


class checking_account : public account {
	const double ddt{ 1.50 };
	virtual bool deposite(double ammount) override {
		if (ammount < 0)
			cout << "invalid ammount" << endl;
		else {
			balance += ammount;
			//cout << balance << endl;
			return true;
		}
	}
	virtual bool withdraw(double ammount) override {
		if (balance - ammount < 0)
			cout << "insufficient ammount" << endl;
		else {
			balance -= (ammount +ddt);
			cout << balance << endl;
			return true;
		}
	}
};

void dispaly( vector <saving_account*>& acc) {
	for ( auto i : acc)
		cout << acc << endl;
}
int main() {
	account* a1 = new saving_account;
	a1->deposite(1000);
	a1->withdraw(500);
	account* a2 = new current_account;
	a2->deposite(100);
	a2->withdraw(30);
	account* a3 = new checking_account;
	a3->deposite(600);
	a3->withdraw(100);
	a3->withdraw(90);
	return 0;

}