#include<iostream>
using namespace std;
int area (int) ;
double area (double , double);
int main () {
   cout <<  area(4) << endl;
    cout << area(12.5 , 11.5) << endl;
    return 0;
}

int area (int side) {
    return (side*side);
}
double area (double lenght , double width){
    return (lenght *width);
}
