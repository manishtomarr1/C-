#include <iostream>
using namespace std;
int main(){
    double average;
    int salary[3];
    int total_salary;
    int a;
    cout << "enter the number of employee:";
    cin >>a;
    
    cout << "enter the salary of employee:" << endl;
    cin >>salary[0] >>salary[1] >>salary[2];
    total_salary= salary[0]+salary[1]+salary[2];
    cout << "total salary of three employee is:" << total_salary << endl;
     average =  total_salary / static_cast<double>(a);   
      
    
    cout << "average is:" << average;
    return 0;
    
}