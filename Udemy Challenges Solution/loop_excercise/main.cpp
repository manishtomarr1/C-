#include<iostream>
#include <vector>
using namespace std;
int main ()  {
    int b {0};
  
vector <int> a {1,2,3,5,8,13,15,18,20,21,22,23,34,24,26,28,30,35,32,33,38,40,42,45,48,50};
for ( int i=0; i< a.size(); i++){
    if( i%3 ==0 || i%5==0){
        ++b;
       cout << b << endl;
       
    }
    
}

        return 0;
    
}