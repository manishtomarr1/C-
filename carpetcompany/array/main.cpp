#include <iostream>
using namespace std;
int main()
{
    int arr[10] {};
    cout << arr[0];
    cout << arr[1];
    cout << arr[2];
    cout << arr[3];
    cout << arr[4];
    cout << arr[5];
    cout << arr[6];
    cout << arr[7];
    cout << arr[8];
    cout << arr[9] << endl;
    
    arr[0]=100;
    arr[9]=1000;
    cout << "the updated array is" << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl;
    cout << arr[6] << endl;
    cout << arr[7] << endl;
    cout << arr[8] << endl;
    cout << arr[9] << endl;
    
    
    
    return 0;
}