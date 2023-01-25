#include<iostream>
using namespace std;
int main () {
    char z;
    int a{1};
    int b{2};
    int c{3};
   
    
   do{
     cout << "1. Do this" << endl;
     cout << "2. Do that" << endl;
     cout << "3. Do something else" << endl;
     cout << "Q: Quit" << endl;
     cout << "enter your selection" << endl;
     cin >> z;
       
           switch (z){
               case '1':
               cout << "you choose" << a << " : Do This" << endl;
               break;
               case '2':
               cout << "you choose" << b << " :Do That" << endl;
               break;
               case '3':
               cout << "You choose" << c << " :DO Some Thing Else" << endl;
               break;
               case 'q':
               cout << "Thanks" << endl;
               break;
               case 'Q':
               cout << "thanks" << endl;
               break;
               
               default: 
               cout << "wrong input try again" << endl;
           }
   }
   while (z !='Q' && z !='q' );
 
     
    return 0;
}