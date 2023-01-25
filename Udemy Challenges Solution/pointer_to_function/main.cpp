#include<iostream>
using namespace std;
void swap(int *a , int *b ){
    int temp{0};
    temp=*a;
    *a=*b;
    *b=temp;
    cout << "after swapping a is : " << *a << endl;
    cout << "after swapping b is : "  << *b << endl;
}
int main () {
    int a;
    int b;
    cout << "enter a : ";
    cout << endl;
    cin >> a;
    cout << "enter b : " << endl;
    cin >> b;
    cout << "before swapping value of a and b is : " << a << " and " << b << " respectively" << endl;
    swap (& a , & b);
    return 0;
}