#include<iostream>
#include<vector>
using namespace std;
int main (){ //using array.
    /*int z;
  
    
    cout << "enter the size of your array" << endl;
    cin >>z;
    int ar[z];
    for (int i{0} ; i <z ; i++){
        cout << "enter value at index [" << i << "]" << endl;
        cin >> ar[i];
        
    }
    
    for (int j{0} ; j<z ; j++){
    
        if (ar[j] % 2 == 0){
            cout << ar[j] << "is even number" << endl;
        }
        else
            cout << ar[j] << "is odd number" << endl;
    }
    
        return 0;
        
} */
// using vector
int z;
double sum{0};
 double average;
cout << "how may student in your class" << endl;
cin >>z;

vector <int> marks(z);

cout << "enter marks of students" << endl;

for(int i{0}; i < z ; i++){
    cin >> marks.at(i);
    sum= sum + marks.at(i);
    
    
}
cout << "sum of marks of total class is " << sum <<  endl;
 average = sum/z;
 cout << "average marks of class is " << average << endl;
 
return 0;

}