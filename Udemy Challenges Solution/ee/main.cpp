#include<iostream>
#include<vector>
#include<string>
using namespace std;
/*int main () {
    vector <string> v{};
    for(int i =0 ; i<3 ;i++){
        string b;
        cin >> b;
        v.push_back(b);
        
    }
cout << endl;
for (auto i : v)
    cout << i << endl;
    return 0;
} */
int main(){
    int a[]{1,2,3};
    int b[]{2,3,4};
    for(int i =0 ; i< 3 ; i++){
        for (int j =0; j< 3 ; j++){
            cout << a[i] * b[j];
            cout << endl;
        }
    }
    return 0;
}