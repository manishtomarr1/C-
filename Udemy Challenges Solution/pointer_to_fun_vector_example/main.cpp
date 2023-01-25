#include<iostream>
#include<vector>
#include<string>
using namespace std;
void data (vector <string> * a){
   for(auto i : *a){
        cout << i ;
        cout << endl;
        
   }
    }
int main () {
    vector <string> name{"manish" , "priyanshu" , "rajat"};
    data(&name);
    return 0;
}