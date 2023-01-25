#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    int c;
    string b;
cout << "welcome to the ATM" << endl;
cout << "enter your pin:" << endl;
cin >> a;
cout << "enter your account type:" << endl;
cin >> b;
getline(cin, b);
cout << b << endl;

cout << "withdrawl money" << endl;
cout << "enter amount:";
cin >> c;
cout << c << " " << "amount is debit from your account" << endl;
cout << "thank you using atm";
return 0;





	
}
