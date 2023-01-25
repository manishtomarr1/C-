#include<iostream>
#include<string>
using namespace std;
const float q {50.76};
void data (string name [ ] ,  int a){
 for(int i=0 ; i< a ; i++){
string s1;
cout << "enter the name of  number " << i+1 << " student : " << endl;
 cin >> name[i];
 getline(cin,s1);
    }
   cout << endl;
    for(int i =0 ; i< a ; i++){
         int a;
         float total;
        cout << "record of " << "" << name[i] << ":" << endl;
         cout << "how many times he came to eat the food : " << endl;
          cin >>  a;
          total = a*q;
          cout << "total ammout pending on " << name[i] << ""  << " is : " << total << endl;
          cout << endl;
      } 
}
int main (){
   int z;
   cout << "how many student eat food in your restro : " << endl;
   cin >> z;
   string call [z];
   data ( call , z);
   return 0;
   
}
