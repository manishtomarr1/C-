#include<iostream>
#include<string>
using namespace std;

int main() {
    int *a;
    //cout << a << endl;
    cout << &a << endl;
    a = nullptr;
    cout << a << endl;
    cout << &a << endl;
    cout << sizeof a << endl;
    double* b;
    cout << sizeof b << endl;
    char* c;
    cout << sizeof c << endl;
    int d = 100;
    double f = 200;
    int* q{ nullptr };
    q = &d;
    cout << *q << endl;
    double* qw;
    qw = &f;
    cout << *qw << endl;
    d = 1000;
    cout << *q << endl;
    string name{ "priyanshu gandu hai" };
    string* z{ &name };
    cout << *z << endl;

 cout << "dynamic memory allocation" << endl;

    int* int_ptr;
    int_ptr = new int;
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    *int_ptr = 100;
    cout << *int_ptr << endl;
    delete int_ptr;
    //cout << *int_ptr << endl; // garbage daiga kyuki delete kr dis heap me se 

 cout << "allocate array dynamically" << endl;
    int* array_ptr{ nullptr };
    int size{};
    cout << "what is the size of array : " << endl;
    cin >> size;
    array_ptr = new int[size];

    cout << "how to delete this array" << endl;
    // delete [] array_ptr << endl; 

 cout << "relation between array and pointers" << endl;

    int scores[]{ 10,20,30 };
    cout << scores << endl; //gives the address of the first element of array
    cout << *scores << endl; // give the value at the first index i.e 10.
    int* ptr_array;
    ptr_array = scores;
    cout << ptr_array << endl; // same as the value of score, same address will be come.
    cout << ptr_array[1] << endl; // value at second index
    cout << &ptr_array[1] << endl; // give the address of the second element 

    return 0;

}