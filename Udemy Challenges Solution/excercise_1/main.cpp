#include<iostream>
#include <cctype>
#include<cstring>
using namespace std;
int main () {
    char first_name [10] {};
    char last_name [10] {};
    char whole_name [20] {};
    int  whole_name_lenght;
    int first_name_lenght;
    int last_name_lenght;
    cout << "enter your fist name" << endl;
    cin >> first_name;
    cout << "enter your last name" << endl;
    cin >>last_name;
    strcpy (whole_name , first_name);
    strcat(whole_name, " ");
    strcat(whole_name, last_name);
    cout <<"your whole name is " << whole_name << endl;
   first_name_lenght= strlen(first_name);
   last_name_lenght = strlen(last_name);
   whole_name_lenght= strlen(whole_name);
   cout << "your first name lenght is " << first_name_lenght << endl;
   cout << "your last name lenght is " << last_name_lenght<< endl;
   cout << "your whole name lenght is " << whole_name_lenght << endl;
   for(int i=0;i< strlen(whole_name);i++){
       if (isalpha (whole_name [i])) //capital letter me badalne k liye.
           whole_name[i] = toupper(whole_name[i]);
   }
   cout << whole_name << endl;
    return 0;
}