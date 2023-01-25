#include<iostream>
using namespace std;
/*int main () {
    int i{4};
    while (i <=5) {
        cout << i << endl;
        i++;
        }
    
    return 0;
} */
/*int main ()  {
    int number {};
    cout << "enter an integer less than 100 : " << endl;
    cin>>number;
    while (number >=100) {
        cout << "enter the integer less then 100 " << endl;
        cin>> number;
    } 
   
    
}*/


int main() {
    bool done (true);
    int n{0};
    cout << "enter the number between 1 and 5" << endl;
    cin >> n;
    while (!done){
        cout << "enter the number netween 1 and 5" << endl;
        cin >>n;
        if (n <=1 || n >=5){
            cout << "not in range" << endl;
            
        }
            else{
                cout << "thanks" << endl;
                done=true ;
            }
    }
    return 0;
}