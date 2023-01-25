#include<iostream>
using namespace std;
 void add(int &a);
 int main() {
     int number=101;
     add(number);
     cout << number << endl;
     return 0;
 }
 void add(int &a) {
     if (a>10 ){
         a=100;
         cout << a << endl;
     }
     }
 
 
 