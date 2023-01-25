#include<iostream>
#include<vector>
using namespace std;
 int main () {
          vector <signed int> num {1,3,4,5,6,7,8,9,10,11,-12,-14,-15,-16,-21,-45,-60, 101,-99,102,-100,-107,104};
          int i{0};
          int z{0};
while( i < num.size() )
    {
     if( num.at(i) >= -99 )
         {
            cout << num.at(i) << endl;
                   }
                    i++;
                z++;
                
     }
    cout << "total element" << " " <<  z << endl;
    
    
       return 0;
    }