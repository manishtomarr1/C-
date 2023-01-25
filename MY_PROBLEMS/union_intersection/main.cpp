#include<iostream>
using namespace std;
void get_data1(int list1[ ] , int a ){
    
    for(int i =0 ; i< a; i++){
        cout << "add the number : " ;
        cout << endl;
        cin >> list1[i];
    }
}
void get_data2(int list2[ ], int b){
for(int i=0 ; i<b ; i++){
    cout << "add the number : " ;
    cin >> list2[i];
     }
}

int main(){
    cout << "how many number you want to add in the first list : " ;
    cout << endl;
    int b;
    cin >>b;
    int ar[b];
   get_data1(ar, b);
   cout << "how many number you want to add in the second list : " ;
   int c;
   cin >> c;
    cout << endl;
    int arr[c];
get_data2(arr , c
);

return 0;
     
}