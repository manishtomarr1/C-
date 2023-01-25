#include<iostream>
using namespace std;
double add (double , double);
double multiplay (double , double);
double divide (double , double);
 double substract (double , double );
void add_no();
void div_no();
void sub_no();
void mul_no();
void print_list();
int main () {
     print_list();
    return 0;
}
double add(double a , double b){
    return a+b;
}
double multiplay (double a, double b) {
    return a*b;
}
 double divide ( double a ,  double b) {
    return a/b;
}
double substract (double a , double b ){
    return a-b;
}
 
 void add_no(){
     double a;
     double b;
     cout << "enter any number : " << endl;
     cin >> a;
     cout << "enter another number : " << endl;
     cin >> b;
     double result;
     result= add(a,b);
     cout << "sum of these two number is : "  << result;
     cout << endl;
 }
 void sub_no(){
    double a;
  double b;
     cout << "enter any number : " << endl;
     cin >> a;
     cout << "enter another number : " << endl;
     cin >> b;
     double result;
     result= substract(a,b);
     cout << "diffrence of these two number is : "  << result;
     cout << endl;
 }
 void mul_no(){
     double a;
     double b;
     cout << "enter any number : " << endl;
     cin >> a;
     cout << "enter another number : " << endl;
     cin >> b;
     double result;
     result= multiplay(a,b);
     cout << "multiplay of these two number is : "  << result;
     cout << endl;
 }
 void div_no(){
     double a;
     double b;
     cout << "enter any number : " << endl;
     cin >> a;
     cout << "enter another number : " << endl;
     cin >> b;
     double result;
     result= divide(a,b);
    // cout << result << endl;
    cout << "when" << " " << a << " " << "is divided by "  << b << " we get " << result;
     cout << endl;
 }
 void print_list(){
     char a{};
     cout << "a = add " << endl;
     cout << "s= subtract " << endl;
     cout << "d= divide " << endl;
     cout << "m= multiplay " << endl;
     //cout << "q= quite " << endl;
     cout << "enter your choice : "  ;
     cout << endl;
     cin >> a;
     if (a== 'a' || a== 'A')
         add_no();
        else if (a== 's' || a== 'S')
             sub_no();
    else if(a== 'd' || a== 'D')
        div_no();
       else  if (a== 'm' || a== 'M' )
            mul_no();
            else 
                cout << "wrong input" << endl;
     }