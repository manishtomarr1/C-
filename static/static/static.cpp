#include <iostream>
using namespace std;
class employee
{
    int salary;
    int empid;

public:
    static int count;
    void setdata();
    void getdata();
    static void getcount()
    {
        cout << "the value of count is " << count << endl;
    }
};
void employee::setdata()
{
    salary = 5000;
    empid = 2001;
    count++;
}
void employee::getdata()
{
    cout << "the employee salary and id is " << salary << " " << empid << endl;
    cout << "the object number is " << count << endl;
}
//int employee::count = 10; // by default it is zero,SETTING THE VALUE OF STATIC DATA MEMEBER 

int main()
{
    employee e;
    e.setdata();
    e.getdata();
    e.setdata();
    e.getdata();
    employee::getcount();//can be used directly without objects;
//cannot display or work on any datamembers other than static 

    return 0;
}