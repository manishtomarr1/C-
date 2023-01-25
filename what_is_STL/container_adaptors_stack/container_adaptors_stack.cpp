//LIFO -> last in first out
//we cannot display the whole stack at one time-> for order to display the whole stack -> line 15
//no iterator are supported 
#include<stack>
#include<vector>
#include<list>
#include<iostream>
#include<deque>
using namespace std;
//this function displays a stack of 
//by repeatedly topping and popping the stack
//note that the stack is passed in value so we
// don't affect the passed in stack.

template< typename T> 
void display(stack <T> s) { // here we pass the stack by value because in order to display the stack we have to pop out the top element
	                        // the orignal stack is not effected during display that's why we take by value-> only the copy is pop out
	cout << "[ ";
	while (!s.empty()) {
		T elem = s.top();
		s.pop();
		cout << elem << " ";
	}
	cout << "]" << endl;

}
int main() {
	stack<int> s;
	stack<int,vector<int>> s1;
	stack<int, list<int>> s2;
	stack<int, deque<int>> s3;

    //for (int i : {1, 2, 3, 4, 5})
    //	s.push(i);
	
	// another way

	for (int i = 1; i <= 5; i++) {
		s.push(i);
	}
	display(s);

	s.push(100);
	display(s);

	s.pop(); // removing the last element -> 5
	s.pop(); // removing 4
	display(s);
    
	cout << "size:" << s.size() << endl;

	s.push(10);
	display(s);

	s.top() = 100; // not added the next value but update the top value from 10 to 100.			
	display(s);


	return 0;

}
