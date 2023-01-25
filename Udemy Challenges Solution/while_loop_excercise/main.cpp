#include<iostream>
#include <vector>
using namespace std;
/*int main () {  //with for loop.
    int z{0};
    
    vector <signed int> num {1,3,4,5,6,7,8,9,10,11,-12,-14,-15,-16,-21,-45,-60, -99,-100,101,-107};
    for ( signed int i =0 ; i < num.size() ; i++){
       if (num.at(i) > -99){
           cout << num.at(i) << endl;
           z++;
           }
    }
    cout << "total element is " << " " << z << endl; 
     */
     int main () {
          vector <signed int> num {1,3,4,5,6,7,8,9,10,11,-12,-14,-15,-16,-21,-45,-60, 101,-99,102,-100,-107};
          int i{0};
          int z{0};
          
          while( i <= num.size() ){
              if( num.at(i) >= -99 ){
                  cout << num.at(i) << endl;
                    i++;
                
                  z=z+1;
                    
                  }
                
                }
    cout << "total element" << " " <<  z << endl;
    
    
       return 0;
    }