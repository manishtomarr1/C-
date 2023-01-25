#include<iostream>
using namespace std;
void print_grocery_list ( int apple =3, int orange =7 , int mangos=13){
    cout  << apple << orange <<  mangos <<  endl;
}
void modify_grocery_list(){
    print_grocery_list();
    print_grocery_list(7,11);
}

 int main (){
     modify_grocery_list();
    return 0;
}

