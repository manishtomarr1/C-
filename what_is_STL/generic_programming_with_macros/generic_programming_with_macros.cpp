/*
* MACROS
         #define pie =3.149 #define called macro->no type information,
         simple substitution,
         called c++ pre processor directive,
         no semi-collan
         diffrence b/w macros and constants is that constants has type but macros are not having any type

GENERIC PROGRAMMING
    generic programming is the programnming in which we dont care of any data type for doing this we use macros we can perform
    various operation with the one function or one algorithm

syntax of # define
               #define (what_we define) (what_we_want_from_that) -> see on line 17 ALWAYS USE PERANTHESIS

*/

#include<iostream>
#define max(a,b) ((a>b) ? a :b) // here we define a macro of function max here if we pass any data in a & b it will perform the samne 
                               //operation on each data type

using namespace std;
int main() {
    cout << "enter any number : " << endl;
    double a;
    cin >> a;
    cout << "enter second number : " << endl;
    double b;
    cin >> b;
    auto z = max(a, b);
    cout << endl;
    cout << "greator number is \n" << z << endl;
    return 0;
}