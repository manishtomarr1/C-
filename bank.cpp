#include<iostream>
#include<string>
using namespace std;
class account {
     private :
		double balance{0};
		public :
			string name;
				void deposite(double b){
					
				balance += b;
				cout << "your available ammount is : " << "" << balance << endl;
				}
				void withdraw(double a ){
					
				if ( a > balance )
				cout << "insufficient balance" << endl;
				else 
				balance -= a;
				cout <<"total available ammount : " << "" << balance << endl;
				}
};
int main () {
	account a1;
	
	a1.deposite(1200);
	a1.withdraw(1400);
	return 0;
	
}
