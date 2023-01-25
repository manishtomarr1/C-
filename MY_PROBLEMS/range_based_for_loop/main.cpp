#include<iostream>
#include <vector>
using namespace std;
int main() {
    /*int arr [] {100, 90, 80};
    for (auto i : arr){ // apne aap data type pechan lega auto se
        cout << i << endl;
    } */
vector <double> temp {88.1,99.5,101.4,104.6,97.9};
double sum;
double average;
for  (auto i : temp){
    sum += i ;
}
cout << sum << endl;
average = sum/ temp.size();
cout << average << endl;    
    return 0;
}
