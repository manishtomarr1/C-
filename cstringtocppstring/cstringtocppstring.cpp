#include<iostream>
#include<string>
using namespace std;


int main() {
    char ch[6]={'m','a','n','\0'};

   /* for (int i = 0; i < 7; i++) {
        cout << "enter char:" << endl;
        char c;
        cin >> c;

        ch[i] = c;
    }*/

    string str(ch);

    cout << str << endl;

    int len = str.size();

    cout << len << endl;

    return 0;

}