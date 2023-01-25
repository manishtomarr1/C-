#include<iostream>
#include<string>
using namespace std;
class dog {
private:
    int age;
    string name;
public:
    dog() {
        name = "frank";
        age = 23;
        cout << name << endl;
        cout << age << endl;
    }
};

class student {
private:
    string name;
    int roll_number;
    double marks;
public:
    student(string a, int b, double c) {
        name = a;
        roll_number = b;
        marks = c;
        cout << "name of student is : " << "" << a;
        cout << endl;
        cout << "roll number of student is : " << "" << b;
        cout << endl;
        cout << "marks of student in CGPA is : " << "" << c;
        cout << endl;
    }

};
class account {
private:
    int account_number;
    string name;
    int balance;
public:
    account() {
        account_number = 23456;
        name = "priyanshu";
        balance = 100000;
        cout << name << endl;
        cout << account_number << endl;
        cout << balance << endl;
    }
    account(string s) {
        name = s;
        cout << name << endl;
    }
    account(string s, int a) {
        name = s;
        account_number = a;
        cout << name << endl;
        cout << account_number << endl;
        balance = 345;
        cout << balance << endl;
    }
};
int main() {
    cout << "this is default constructor " << endl;
    dog d1;
    cout << "this is perameterised constructor " << endl;
    student s1("manish", 74, 8.6);
    cout << "this is constructor overloding " << endl;
    account a1();
    account a2("manish");
    account a3("priyanshu", 123445);
    cout << "_____________" << endl;

    return 0;
}
