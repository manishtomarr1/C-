#include <iostream>
#include <string>
using namespace std;
int main() {
    bool equal;
    bool not_equal;
    int a;
    int b;
    cout << "enter the value of a";
    cin >>a;
    cout << "enter the value of b";
    cin >>b;
    cout << boolalpha;
    equal = (a == b);
    not_equal = (a !=b);
    cout << "match" << equal << endl;
    cout << "not match" << not_equal;
return 0; 
    
    
}
