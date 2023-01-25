
/*
- program will be crash because jb display_shellow ka s out of scope jayega distructor call hoga
or wo data ki value free kr daiga then copy constructor call hoga jo ki same address pe yhi point krega
and he get the garbage value because the orignal value is freed by distructor or jb copy constructor
k badh distructor call hoga wo delete krne ki koshish krega data pe rkki memory ko jo wha milege nhi
toh program crash ho jaiga
- ESE KO THEEK KRNE K LIYE DEEP COPY USE KRTE HAI.
- hum deep copy mae nya memory lete hai copy contructor mae jismw data ko store karate hain
*/
#include<iostream>
#include<string>
using namespace std;
class shallow {
private:
    int* data; // this is the raw pointer mtlb normal pointer
public:
    shallow(int d) { // default constructor
        data = new int; // data jo pointer the usme heap me memory li uska adrs store karaya
        *data = d;// or jo value d mae ayege wo store karai usi location pae.
        cout << " default constructor call " << endl;
    }
    shallow(const shallow& obj)
  //    cout << "shellow copy" << endl;
  //      : data{obj.data} {  // yeh hai shellow copy
  //      cout << " copy constructor call " << endl;
  //  cout << *data << endl;
  //  }

    {
        cout << "deep copy" << endl;
        data = new int;
        *data = *obj.data;
        cout << "copy constructor - DEEP" << endl;
    }

    ~shallow() {
        cout << "distructor call" << endl;
        delete data; // best practice to free up the memory which we use in the heap by distructor   
    }
    int get_data_value() {
        cout << "get data value call" << endl;
        return *data;
    }

};
void display_shallow(shallow s) { // jb s out of scope jayega distructor call hoga or memory free kr dega data ki fher usme gabage aa jaiga
    cout << "display shellow call" << endl;
    cout << s.get_data_value() << endl;
}
int main() {
    shallow s1(100);
    display_shallow(s1);
    shallow s2(s1); // here we requried deep copy instide of shellow copy kyuki yhi se khel bigdega sara
    return 0;
}

