#include <iostream>
using namespace std;

int main()
{
    int arr[5] {10,20,30,40,50};
    cout << arr[0] << arr[1];
    
    cout << "enter the value of array" << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "the value of array is" << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
    return 0;
    }