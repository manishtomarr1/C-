#include<iostream>
#include<cmath>
using namespace std;
int main () {
    double bill_total{};
    int total_individaul{};
    int individual_bill1{};
    int individual_bill2{};
    int  individual_bill3{};    
    cout << "how many total individual in the restro" << endl;
    cin >> total_individaul;
    cout << "how many total bill in rs. :" << endl;
    cin >> bill_total;
    individual_bill1= round(bill_total/total_individaul);
    cout << individual_bill1 << endl;
    individual_bill2=floor(bill_total/total_individaul);
    cout << individual_bill2 << endl;
    individual_bill3=ceil(bill_total/total_individaul);
    cout << individual_bill3<< endl;
    
    return 0;
}