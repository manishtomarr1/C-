#include<iostream>
#include <string>
using namespace std;
int main () {
    int age;
    const int requried_age{16};
    string str= "yes";
    string strr= "no";
    string a;
    cout << "you have car? type yes or no only" << endl;
    cin >>a;
    if(a == str){
    cout << "enter your age" ;
    cin >> age;
    cout << endl;
    
    if (requried_age <= age){
        cout << "yes you can drive" << endl;
        
    }
    
    else {
        cout << "sorry you can not drive. come in " << requried_age-age << " " << "years later" << endl;
        
    }}
    else if ( a==strr) {
        cout << "sorry you cannot drive come with your car" << endl;
    }
    else {
        cout << "wrong input";
    }
    return 0;
}