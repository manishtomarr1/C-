#include <iostream>
using namespace std;
const double dollar{75.20};

int main(){
    int rupees;
    float total_dollar;
    cout << "1$=75.20rs" << endl; 
    cout << "how many rupee you have:";
    cin >>rupees;
    total_dollar= rupees/dollar;
    cout << "total dollar you have" << total_dollar;
    return 0;
    
 
    
    
}