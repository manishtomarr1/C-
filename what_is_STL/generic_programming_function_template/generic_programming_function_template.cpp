/*
* templete is basically the blue print of the function
* SYNTAX
*      template<templatename T>
*      we need to tell the compilar this is a templete function
*      we also need to tell it that T is the template parameter
*      we may also use class insted of type name
*
* EXAMPLE
*        template<typename T>
*        T max (T a , T b) {
*            return (a>b) ?a:b
*            }
*      this will compile but it will not generate any code it simply a template or a blue print
*
* HOW DO WE USE THIS TEMPLATE FUNCTION
*                                     int a{10};
*                                     int b {20};
*                                     cout << max<int> (a,b) << endl; ->using int at palce of T
*     now the compilar can generate the apropiate functions from the template
*     note , this happen at compile time because at compile time the compilar know the data type here we use int
*
* we can have multipal templates perameter
* and there type can be diffrent
* EXAMPLE
*        template<typename T1 , typename T2>
*        void func (T1 a , T2 b){
*        cout << a << " "  << b << endl;
*        }
*     this is the function decleration only
*
*   calling
*          func <int,double> (10,12.4);
*
*      often the compilar can deduce them from function argument
*          func('A' , 12.4);
*
*/

#include<iostream>
#include<string>
using namespace std;

template <typename T> // when we use the same data type of arrgument when call this function
T min(T a, T b) {
	return ((a < b) ? a : b);

}
template <typename T1, typename T2>  //  when we use the diffrent data type arrgument
void func(T1 a, T2 b) {
	cout << a << " " << b << endl;
}

template <typename T> // function template for swap
void my_swap(T &a,T &b) {
	T temp = a;
	a = b;
	b = temp;
}
struct person {                                //operator overloadiong insted of this we can make a function which is doing the same work
	string name;							   //operator overloadiong insted of this we can make a function which is doing the same work
	int age;								   //operator overloadiong insted of this we can make a function which is doing the same work
	bool operator < (const person& rhs)const { //operator overloadiong insted of this we can make a function which is doing the same work
		return this->age < rhs.age;			   //operator overloadiong insted of this we can make a function which is doing the same work
	}
};

int main() {

	cout << "swap function" << endl;
	int x{ 100 };
	int y{ 200 };
	cout << x << " " << y << endl;
	my_swap(x, y);
	cout << x << " " << y << endl; 
	person p1{ "manish" , 40 };
	person p2{ "priyanshu" , 30 };
	person p3 = std::min(p1, p2);
	std::cout <<"\n" <<  p3.name << " is younger" << endl;

	cout << "\nmin function\n" << endl;
	std::cout << std::min <int>(2, 3) << endl; //2
	std::cout << std::min(2, 3) << endl; // compilar deduce them from function arrgs 2
	std::cout << std::min('A', 'B') << endl; // A
	std::cout << std::min(11.5, 16.7) << endl; // 11.5
	std::cout << std::min(5 + 2 * 2, 7 + 654) << endl; // 9

	std::cout << "\nfuns function                                                                                                                                                                                                                                                                                                                                                                        \n" << endl;

	func<int, int>(10, 20);
	func(10, 20); // compilar deduce type
	func<char, double>('A', 12.4);
	func(1000, "testing");
	func(200, string{ "manish" });


    

	return 0;
}