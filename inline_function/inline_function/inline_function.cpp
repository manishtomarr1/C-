#include<iostream>
using namespace std;
int inline great(int x, int y)
{
    return((x > y ? x : y));
}
int main() {
    int a, b;
    cout << "enter two number " << endl;
    cin >> a >> b;
    cout << "greater of two numbwer is " << great(a, b) << endl;

    return 0;
}