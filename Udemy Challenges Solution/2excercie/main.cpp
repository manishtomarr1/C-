#include<iostream>
#include<cmath>
using namespace std;
double fr_to_cal (double fer);
double fr_to_kal (double ferr); 
void calcious ();
void kalvin();
int main (){
   calcious();
   cout << endl;
    kalvin();
    return 0;
}
double fr_to_cal (double fer){
return ceil(((5.0/9.0) * (fer-32) ));
}
double fr_to_kal (double ferr){
return ceil ((5.0/9.0) * (ferr-32) + 273);
}

void calcious (){
    cout << "enter the temperature in *F : " << endl;
    double f;
    cin >> f;
    cout << "converted temperature from *F to *C is = " << fr_to_cal(f) << endl;
}
void kalvin() {
    cout  << "enter the temperature in *F : " << endl;
    double q;
    cin >> q;
    cout << "converted temperature from *F to *K is = " << fr_to_kal(q) << endl;
}

