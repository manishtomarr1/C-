#include <iostream>
#include <string>
using namespace std;
int main()
{
  int arr [2] [3]; 
  string a,b,c;
  cout << "welcome to shopprix mall meerut" << endl << "today's movie is 1983" << endl;
  cout << "enter your name:" << endl;
  cin >>a >>b >>c;
  cout << "the reviewers are:" << endl << a << endl << b << endl << c << endl;
  cout << "=================================================" << endl;
  
  cout << a << " "  << "enter your rating of movie out of 5:" << endl;
  cin >> arr[0] [0] >> arr[0] [1] >> arr[0] [2] >> arr[0] [3] ;
  cout << "rating of" << " " << a << " " << "is:" << " " <<  arr[0] [0] << " " << arr[0] [1] << " " << arr[0] [2] << " " << arr[0] [3] << endl;
  cout << "=================================================" << endl;
  cout << b << " "  << "enter your rating of movie out of 5:" << endl;
  cin >> arr[1] [0] >> arr[1] [1] >> arr[1] [2] >> arr[1] [3];
  cout << "rating of" << " " << b << " " << "is:" << " " <<  arr[1] [0] << " " << arr[1] [1] << " " << arr[1] [2] << " " << arr[1] [3] << endl;
  cout << "=================================================" << endl;
  cout << c << " "  << "enter your rating of movie out of 5:" << endl;
  cin >> arr[2] [0] >> arr[2] [1] >> arr[2] [2] >> arr[2] [3];
  cout << "rating of" << " " << c << " " << "is:" << " " <<  arr[2] [0] << " " << arr[2] [1] << " " << arr[2] [2] << " " << arr[2] [3] << endl;
  
  
  return 0;
  
  
  
}




