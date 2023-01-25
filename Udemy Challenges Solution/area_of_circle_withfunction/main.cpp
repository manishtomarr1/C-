#include<iostream>
using namespace std;
const double pie {3.14};
/*void area_circle(){
    double radius;
    double area;
    cout << "enter the radius of circle : " << endl;
    cin >> radius;
    area = (pie * radius * radius);
    cout << "area of circle is" << area << endl;
}
int main () {
    area_circle();
    return 0;
} */
 /*double add(double a, double b){
     return a+b;
 }
 void addition(){
     double z;
     double x;
     double sum;
     cout << "enter the value of a and b : "  << endl;
     cin >> z>>x;
     sum = add(z,x);
     cout << "sum is" << sum << endl;
 }
 int main (){
    addition();
    return 0;
 }*/
double area (double radius) {
    return pie*radius*radius;
}
 void area_circle(){
     int r;
     cout << "enter the radius of circle : " << endl;
     cin >>r;
     cout << "the area of circle with radius " << "" << r << "is equal to" << area(r) <<endl;
 }
    int main () {
        area_circle();
        return 0;
    }
 