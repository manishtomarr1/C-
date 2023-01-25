#include<iostream>
using namespace std;
//double cla_cost(double base, double tax=1.06); // prototype.... yha bhi kr skte hai default pass. 
double cla_cost(double base = 11.3, double tax= 11.4){ // yha bhi kr skte hain.
    return  (base+tax);
}
int main () {
    double cost;
    double cg;
    double ed;
    /*cout << "enter base cost" << endl;
    cin >> cg;
    cout << "enter tax" << endl;
    cin >> ed;
     */
    cost = cla_cost(12.4, 11.5);
    cout << cost << endl;
    return 0;
}

