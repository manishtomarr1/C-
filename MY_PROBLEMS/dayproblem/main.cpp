#include<iostream>
using namespace std;
int main (){
    int z;
    cout << "enter the number of day in a month in which you wanna to do work" << endl;
    cin >>z;
    switch (z) {
        case 1:
        cout << "monday";
        break;
        case 2:
        cout << "tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        case 4:
        cout << "thursday";
        break;
        case 5:
        cout << "friday";
        break;
        case 6:
        cout << "saturday";
        break;
        case 7:
         cout << "sunday" << endl;
        {
            char k; // here we can pass or declare any data type or variable fot this particular case and apply if else also.
            cout << "you really choose sunday type y/n only" << endl;
            cin >> k;
            if (k == 'y') // for comparission of y we must be use '' on y then it is read by compilar
                       {
                cout << "get out you are suspend from today" << endl;
            }
            else if (k == 'n'){
                cout << "give a correct responce" << endl;
            }
            else {
                cout << "wrong input" << endl;
            }
        }
       
        break;
        default:
        cout << "there is only 7 days in a week" << endl;
        
    }
    
    // when we used charactor put '' at the case we check
    /*char week;
    cout << "enter any charactor " << endl;
    cin >> week;
    switch (week) {
        case 'a':
        case 'A':
        cout << "monday" << endl;
        break;
        case 'b':
        case 'B':
        cout << "tuesday" << endl;
        break;
        default:
        cout << "not valid";
        
    }*/
    return 0;
} 