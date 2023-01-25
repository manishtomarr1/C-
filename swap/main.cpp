#include <iostream>
#include <conio.h>
int a,b,c;

int main()
{
std::cout << "enter the value of a" <<std::endl;
std::cin >> a; 
std::cout  << "enter the value of b" <<std::endl;
std::cin >>b;
std::cout << "enter the value of c" <<std::endl;
std::cin >> c;

a=b;
b=c;
c=a;
std::cin >> a;
std::cin >>b;
std::cin >> c;




return 0;

}

