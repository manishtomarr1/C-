#include<iostream>
#include<vector>
using namespace std;
int main () {
    
    int a;
    int b;
    char d;
    cout << "how many total coaches in train" << endl;
    cin>>a;
    
    vector<int> coach{};
    for (int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            int b;
            b=j;
            coach.push_back(b);
            }
        }
        cout << "how many pessenger there is in a particular coach" << endl;
        cin >> b;
        vector <int> seat{};
        for(int i=0; i<b; i++){
            for (int j=0; i<b; i++){
                int x;
                x=i;
                seat.push_back(x);
        }
        }
        vector <int> aadhar{};
        for(int i=1;i<= b; i++){
            int a;
            cout << "enter the aadhar number of pessenger" << i << ":" << endl;
            cin>>a;
            aadhar.push_back(a);
        }
        cout << "do you want to pull the rope write y/n" << endl;
        cin >> d;
        if(d!= 'y')
            cout << "thanks and happy journey" << endl;
            else
                cout << "tell your coch number" << endl;
                int e;
                cin>>e;
                if(e>a || e<=0){
                    cout << "invalid number! choose the correct coach number" << endl;
                    }
                    else{
                    cout << "enter your seat number" << endl;
                    int f;
                    cin >> f;
                    if(f>b || f<=0)
                        cout << "invalid seat number write correct seat number" << endl;
                        else {
                           cout<<  "enter your aadhar number" << endl;
                           int g;
                           cin >> g;
                           if (g == aadhar.at(f-1 ))
                         cout << "thanks" << endl;
                           else
                                cout << "invalid aadhar number write correct aadhar number" << endl ;
                           
                        }
                    
                        
                    }
                    
          
        
    
  

    return 0;
}