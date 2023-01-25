#include<iostream>
#include <vector>
using namespace std;
const double rate {338.6};
int main () {
    int a;
    cout << "how many farmer you have : ";
    cout << endl;
    cin >> a;
    vector <string> name;
    for(int i=1 ; i<= a; i++){
        string b{};
        cout << "enter the name of  " << i << "farmer : ";
        cout << endl;
        name.push_back(b);
        getline(cin,b);
    }
        
        return 0;
    
} 


