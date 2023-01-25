/*WHAT ARE SMART POINTER
* objects
* can only point to heap allocated memory
* automaticlly called delete when no longer needed
*  #include<memory> headerfile is used when we want to use the raw pointer
* SYNTAX 
*       {
*          smart_ptr<class_name> pointer_name = ...
*          ptr-> method_we_want_to_call()
*          cout << (*pointer_name) << endl;
*       }
*        pointer will be destroyed when no longer needed
*/
 
/* RAII -> resource acquistion is initialization
* comman idiom or pattern used in software design on container object lifetime
* RAII object are allocated on the stack
* smart pointer is example of RAII classes
*/

/* UNIQUE POINTER
* cannot have more then one pointer pointing on the same object on the heap
*  SYNTAX  
*      {
*        unique_ptr<int> p1 {new int {100}} // we make the unique pointer of int 
*        cout << *p1 << endl; // 100
*        *p1=200;
*        cout << *p1 << endl; // 200
*       } // automatically deleted when go out of scope
*   METHODS of Unique Pointers 
*    {
*      unique_ptr<int> p1 {new int {100}} ;
*      cout << p1.get() << endl; // give the address where it is pointing
*      p1.reset () ; // pi is now null pointer 
*      if (p1)  // check the pointer is initillised or not 
*      cout << *p1 << endl; // won't execute be we use reset method
*     } // automatically delete
* 
* example with class 
*     {
*       unique_ptr <account> p1 {new account {"larry"}} ;
*       cout << *p1 << endl; // dispaly account
*       p1-> deposite (300);
*       p1-> withdraw (100);
*       } // automatically delete
* Unique pointer cannot be copy or assigned 
*       {
*         vector < unique_ptr <int> > vec ; //vec is vector name
*         unique_ptr <int> ptr {new int {100}} ;
*         vec.push_back(ptr) ; // give error because we cannot copy unique pointer
*         vec.push_back(move (ptr) )  ; // pointer move to the vector
*         } // automatically delete
*   ANOTHER WAY  by UNIQUE method
*   { 
*      unique_ptr<int> p1 = make_unique<int> (100) ; // no need of new keyword here
*      unique_ptr<account> p2 = make_unique<account> ("curley" , 500) ; no need of new keyword here
*      auto p3 = make_unique<player> ("hero" , 10 , 12) ; // compilar deduce the type of p3.
*/

/*
*  SHARED POINTER
*   SYNTAX  
*      {
*        shared_ptr<int> p1 {new int {100}} // we make the unique pointer of int 
*        cout << *p1 << endl; // 100
*        *p1=200;
*        cout << *p1 << endl; // 200
*       } // automatically deleted when go out of scope
*  
*  ANOTHER WAY
*    {
*       use_count - the number of shared_ptr objects managing the heap object
*       shared_ptr <int> p1 { new int {100} };
*       cout << p1.use_count << endl; // 1
*       shared_ptr <int> p2 {p1} ; // shared ownership
*       cout << p1.use_count << endl; // 2
*        
*       p1.reset (); // decrement the use_count ; p1 is nulled out
*       cout << p1.use_count << endl; // 0
*       cout << p2.use_count << endl; // 1
*         } // atomatically deleted
* 
*  CLASS EXAMPLE
*          {
*             shared_ptr <account> p1 { new account {"larry"} } ;
*             cout << *p1 << endl; // display account
*             p1-> deposite(100);
*          } // automatically deleted
*   VECTOR EXAMPLE 
*  {
*    vector<shared_ptr<int>> vec;
*    shared_ptr<int> ptr { new int {100}};
*    vec.push_back (ptr); // ok - copy is allowed
*    cout << ptr.use_count () << endl; // 2
*  } // automatically delete

   shared_ptr <int> p1 = make_shared <int> (100) ; 
*    cout << p1.use_count << endl; // 1
*    shared_ptr <int> p2 {p1} ; // shared ownership
*    cout << p1.use_count << endl; // 2
*    shared_ptr<int> p3 ;
*    p3=p1 ; use_cont : 3 ;
*    make_shared() - its more efficient 
*    all 3 pointers point to same object on the heap 
*    when the use_count became 0 the heap object is dellocated
* 
*  EXAMPLE 
*         
* 
* 
   
 VECTOR EXAMPLE USING DYNAMIC POLYMORPHISM
           shared_ptr <account> acc1 = make_shared<trust_account>{"larry" , 5000};
		   shared_ptr <account> acc2 = make_shared<checking_account>{"moe" , 600};
		   shared_ptr <account> acc2 = make_shared<saving_account>{"curly" , 200};

		   vector<shared_ptr<account>> accounts;
		   accounts.push_back(acc1);
		   accounts.push_back(acc2);
		   accounts.push_back(acc3);
		   for(const auto &acc : accounts){
		   cout << *acc << endl;

*/


/* WEAK POINTER 
*               
*  provides a weak or non owning reference 
*  points to an object of type t on the heap
*  always created from the shared pointer
*  does not increment or decrement the refrence use count 
*  
* SYNTAX 
*        weak_ptr<pointer_name>
*/




#include<iostream>
#include<vector>
using namespace std;
class test {
	int data;
public:
	test() : data{ 0 } { // initillised constructor
		std:: cout << "test constructor : " << data << std ::endl;
	}
	test(int d) :
		data{ d } {
		std::cout << "test constructor :  " << data << std::endl;
	}
	int get_data() const { return data; }
	~test() {std:: cout << "test distructor" << std::endl; }
};
int main() {
	test* t1 = new test{ 1000 }; // here if we dont delete this pointer distructor is never call because this is on heap 
	// delete t1;
	return 0;
}

