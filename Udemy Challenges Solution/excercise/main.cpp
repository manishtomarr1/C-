#include<iostream>
#include<vector>
using namespace std;
int main () {
   
vector <int> list{};
char c;
int sum=0;
int b;
 int d;

    do{
         cout << "p/P - Print Number" << endl;
    cout << "a/A - Add Number" << endl;
    cout << "m/M - Mean of the list" << endl;
    cout << "s/S - Small number in the list" << endl;
    cout << "l/L - Large number in the list" << endl;
    cout << "q/Q - Quite" << endl;
        cout << "enter your choice" << endl;
        cin >> c;
    switch (c) {
        case 'p':
        if (list.size()==0){
            cout << "[  ] - list is empety" << endl;
    }
    else {
        cout << "[";
        for(auto i: list)
        cout << i ;
        cout << "]";
        }
    cout << endl;
    break;
    case 'P':
        if (list.size()==0)
            cout << "[  ] - list is empety" << endl;
    else{
        cout << "[";
        for(auto i: list)
        cout << i ;
        cout << "]";
    }
    break;
    case 'A':
    cout << "enter an integer added to the list" << endl;
    cin >> b;
    cout << b << "is added in list" << endl;    
        list.push_back(b);
    break;
    case 'a':
    cout << "write a number which you want to add in the list" << endl;
     cin >>d;
     cout << d << " is added in the list" << endl;
            list.push_back(d);
            break;
    case 'M':
    for(int i=0;i<list.size();i++){
        sum+=list.at(i);
        }
        double mean;
        mean=sum/list.size();
    cout << "mean = " << mean << endl;
    break;
    
    case 's':
   int small=list.at(0);
   for(int i=0;i<list.size(); i++){
       if (i<small)
           small=i;
   }
   cout << "smallest number is " << small << endl;
   break;
        
        
    }
  }
    while(c!='q' && c!='Q');
        cout << "thanks"<< endl; 
    
    
    
    
    
    
    

    return 0;
    } 