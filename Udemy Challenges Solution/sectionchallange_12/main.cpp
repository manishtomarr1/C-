#include<iostream>
using namespace std;
void print1( int ar[ ] , int a ){
    for (int i = 0 ; i< a ; i++){
        int a;
        cout << "enter the value at  " << i+1 << "  possition : " ;
        cin >> ar[i];
        cout << endl;
    }
      cout << "array 1" << endl;
        for (int i =0 ; i< a; i++){
            cout << ar [i]<< endl;
        }
}
void print2(int arr[ ] , int b ){
    for (int i = 0 ; i< b ; i++){
        cout << "enter the value at  " << i+1 << "  possition : " ;
        cin >> arr[i];
        cout << endl;
    }
    cout << "array 2" << endl;
        for (int i =0 ; i< b; i++)
            cout << arr[i] << endl;
}
int *apply_all (int ar1 [ ] , int a, int ar2 [ ] , int b ){
    int *ar;
    ar=new int[a*b];    //array banaya dynamically.
    int z{0};
    for(int i =0 ; i< a ; i++ ){
        for(int j=0;j<b ; j++){
          ar[z++]=  ar1[i]*ar2[j];
          cout << endl;
        }
    }
    return ar;
}
int main() {
    int a;
    int b;
     cout << "how many element you want to add in the first array : " ;
    cin >> a;
    cout << endl;
     int first_array[a];
        print1(first_array , a);
    cout << "how many element you want to add in the second array : " ;
    cin >> b;
    cout << endl;
    int second_array[b];
    print2(second_array , b);
   int *results = apply_all(first_array , a , second_array , b);
  for (int i =0 ; i< (a*b) ; i++){
    cout << (results[i] )<< endl;
 }

    
    
}