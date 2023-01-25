#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () 
     {
    
    
    vector <int> marks;
    vector <string> name;
    vector <char> grade;
    cout << "enter names of the students:";
    cin >> marks.at(0) >> name.at(1) >> name.at(2) >> name.at(3) >> name.at(4) >> name.at(5) >> name.at(6) >> name.at(7) >> name.at(8) >> name.at(9);
    
    cout << "enter the marks of students:";
    cin >> marks.at(0) >> marks.at(1) >> marks.at(2) >> marks.at(3) >> marks.at(4) >> marks.at(5) >> marks.at(6) >> marks.at(7) >> marks.at(8) >> marks.at(9);
     
     cout << "enter grades:";
     cin >> grade.at(0) >> grade.at(1) >> grade.at(2) >> grade.at(3) >> grade.at(4) ;
     for(marks=0;marks<=9;marks++)
     if (marks >= 95) {
        cout << grade.at(0);
        cout << endl;
    }
    
    else if (marks >= 90) {
        cout << grade.at(1);
        
    }
    else if (marks >= 80){
        cout << grade.at (2);
        
    }
    else if (marks >= 70) {
        cout << grade.at(3);
    }
    
    else if (marks >= 60) {
        cout << grade.at(4);
        
    }
    else
        cout << "FAIL";
     
   
        
        cout << name .at(0) << "=" << " " << marks .at(0) << " " << grade .at(0);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        return 0;
        
    
}
