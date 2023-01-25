#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector <int> score (3);
  cout << " enter the value of vactor :" << endl;
  cin >>score[0] >>score[1] >>score[2];
  cout << score[0] << " " << score[1] << " " << score[2] << endl;
  
  
  cout << "enter the updated value of vector:" << endl;
  cin >>score[0] >>score[1] >>score[2];
  cout << "the updated value of vactor is:" << score[0] << " " << score[1] << " " << score[2]   << endl;
  cout << "the value of second place is:" << score.at(1) << endl;
  score.push_back(121);
  cout << "marks of 4th student is:" << score.at(3) << endl;
   cout << "size of vector is" << " "  << score.size();
    


  
  
  return 0;
    }


