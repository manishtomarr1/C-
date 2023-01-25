#include <iostream>
using namespace std;
int main() {
    int a;
    const int dollar {100};
    const int quator {25};
    const int dime {10};
    const int nickle {5};
    
    int reminder;
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
    total_quator = (a%dollar)/25;
    cout << "quator :" <<  total_quator << endl;
    total_dime = (a%quator)/10;
    cout << "dime :" << total_dime << endl;
    total_nickle = (a%dime)/5;
    cout << "nickle :" << total_nickle << endl;
    total_pennies= (a%nickle)/1;
    cout << "pennies :" << total_pennies;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
    
    
}