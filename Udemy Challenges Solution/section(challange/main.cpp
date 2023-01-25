#include<iostream>
#include <vector>
using namespace std;
int main () {
      int a;
     int result{0};
    cout << "how many value you want to store in vector" << endl;
    cin>> a;
    vector <int> val {};
    for(int i =0 ; i<a;i++){
        cout << "enter the " << i << value << endl;
        val.push_back(i);
    
    
    for(int i=0; i<a;i++){
for(int j=i+1; j<=a;j++){
    result= result + val.at(i) * val.at(j);
}
    } 
    }
    cout << result << endl;
    
    return 0;
}