#include<iostream>
using namespace std;
int main () {
   int a , b ;
   cout << "enter the value of a and b respectively" << endl;
   cin >>a >>b;
   cout << (( a-b < 0) ? "b is greator" : "a is greator"  ) << endl; // here the fault is this it is only compare only two statement we cannot compare three statement from this operatoer.
   
   return 0;
   
   
   
}