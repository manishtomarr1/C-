#include<iostream>
using namespace std;
    void data( int *b){ // pointer to function 
        if ( *b > 10){
            cout << "number is greator then 10 that's why it is multiplay by 2" << endl;
          *b *= 2;
        }
          cout << *b << endl;
    }
    int main(){
        int a;
        cout << "enter value : ";
        cout << endl;
        cin >>a;
        data(&a);// call this with the help of adress of that variable.
    return 0;
}