#include<iostream>
using namespace std;
class base {
public :
	virtual void get_value() const {
		cout << "hello- from base" << endl;
	}
	virtual ~base() {

	}
};
class derived : public base  { 
public :
	virtual void get_value() const override { // here if i dont write const compilar give the error because i put override specifier here and not write the same signature function
		cout << "hello - from derived " << endl;
	}
	virtual ~derived() {

	}
};
int main(){
	base* b1 = new base;
	b1->get_value();
	base* b2 = new derived;
	b2->get_value();
	return 0;
	/*
	* jab bhi virtual fuction mae kuch bhi diffrent hua mtlb agar function signature diffrent hua toh override ki jagha redefine ho jayega
	* jaise yha const mhi lagaya derived class mae getvalue function mae toh override hogya
	* static binding hogi 
	* early binding nhi hogi
	* then isse bachne k liye we use override keyword dirived class mae wo bta dega agar koi erroe aya yah same signature ka function nhi banaya
	* syntax 
	* virtual void get_value override (){
	*  // function body
	* }
	*/
	}