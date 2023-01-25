#include<iostream>
#include<string>
using namespace std;
class student {
public:
    string name;
    int marks;
    int ag;

public:
    student(string a = "none", int b = 0, int c = 0) // default value 
        : name(a), marks{ b }, ag{ c } // initillised list.
    {
        cout << name << endl;
        cout << marks << endl;
        cout << ag << endl;
    }

    student(student& stu) { // this is the copy constructor here we take the object as perameter
        cout << "copy constructor for: " << stu.name << endl;
    }
};
void display(student s) { // nye function mae perameter liya object constructor ka
    cout << s.marks << endl; // now print the args of student object.
}

int main() {
    student s1("manish", 12, 13);
    display(s1);
    student s2(s1); // here pass the s1 object as args in new object 
    return 0;
}
