#include<iostream>
using namespace std;
int main () {
    int score{0};
    int *c{nullptr};
    score = 10;
    c= new int;
    cout << *c  << endl; //derefrencing of pointer.
   cout << c << endl;
   cout << score << endl;
   score = 1000;
   cout << *c << endl;
    return 0;
}