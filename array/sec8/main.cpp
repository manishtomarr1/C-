#include <iostream>
using namespace std;
int main() {
    int a;
    const int dollar {100};
     int quator;
     int dime;
     int nickle;
     int pennies;
    int total_dollar;
    int total_quator;
    int total_dime;
    int total_nickle;
    int total_pennies;
    cout << "1 dollar = 100 cent" << endl << "1 quator = 25 cent" << endl << "1 dime = 10 cent" << endl << "1 nikle = 5 cent" << endl << "1 pennies = 1 cent" << endl;
    cout << "enter your amount in cent: ";
    cin >>a;
    total_dollar = a/dollar;
    cout << "dollar :" << total_dollar << endl;
    quator = (a%dollar);
    total_quator = quator/25;
    cout << "quator :" << total_quator << endl;
    total_dime = (quator%25);
    dime= (total_dime/10);
    cout << "dime :" << dime << endl;
    total_nickle = (total_dime%10);
    nickle = (total_nickle/5);
    cout << "nickle :" << nickle << endl;
    total_pennies = (total_nickle%5);
    pennies = (total_pennies/1);
    cout << "pennies :" <<  pennies;
    
return 0;
}
    
    
    

