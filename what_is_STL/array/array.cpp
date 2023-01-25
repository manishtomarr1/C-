#include<iostream>
#include<array>
#include<algorithm>
#include<numeric> // for more algorithm like accumulate etc
using namespace std;

void display(array<int,5> &ar) {
	for (const auto &i : ar){ cout << i << " "; }
	cout << endl;
}

void test1() {
	cout << "\ntest1=======================" << endl;
	array<int, 5> arr1{ 1,2,3,4,5 }; // we use double {{}} if c++11 but now single is used {}
	array<int, 5> arr2;

	display(arr1);
	display(arr2); // element is not initilized (contain 'garbage')

	arr2 = { 10,20,30,40,50 };

	display(arr1);
	display(arr2);

	cout << "size of array 1 is " << arr1.size() << endl; //5
	cout << "size of array 2 is " << arr2.size() << endl; //5

	/*
	 In computer programming, bounds checking is any method of detecting whether a variable is within some bounds before it is used.
	It is usually used to ensure that a number fits into a given type (range checking),
	or that a variable being used as an array index is within the bounds of the array (index checking).
	*/

	arr1[0] = 10; //this does not do bound checking
	arr1.at(1) = 200; // this is do bound checking here out of range acception is come we can handle that with help of acceptional handeling
	display(arr1); 

	cout << "front of arr1 is : " << arr1.front() << endl; // give first eleemnt
	cout << "back of arr1 is : " << arr1.back() << endl; // give last element

}

void test2() {
	cout << "\ntest2======================" << endl;
	array<int, 5> arr1{ 1,2,3,4,5 };
	array<int, 5> arr2{ 10,20,30,40,50 };

	display(arr1);
	display(arr2);

	arr1.fill(0); // fill all element with '0'

	display(arr1);
	display(arr2);

	arr1.swap(arr2); // swap both the array arr1-> arr2 & arr2->arr1

	display(arr1);
	display(arr2);
}

void test3()  {
	cout << "\ntest3======================================" << endl;

	array<int, 5> arr1{ 1,2,3,4,5 };

	int* ptr = arr1.data();//data()-> points to the adress of first element of array
	cout << ptr << endl; // adress of first element of that array
	*ptr = 1000;
	*(ptr + 1) = 2000; // point to the second element of array

	display(arr1);

}

void test4() {
	cout << "\ntest4=============================" << endl;  

	array<int, 5> arr1{ 5,2,3,1,14 };
	display(arr1);

	sort(arr1.begin(), arr1.end()); //in assending order
	display(arr1);
}

void test5() {
	cout << "\ntest5=============================" << endl;

	array<int, 5> arr1{ 4,5,6,3,8 };

	array<int, 5> ::iterator min_num = min_element(arr1.begin(), arr1.end());
	auto max_number = max_element(arr1.begin(), arr1.end()); // both methods are same 
	
	cout << "min : " << *min_num << " " << " max : " << *max_number << endl;

	//int a= min_element(arr1.begin(), arr1.end()); -> this is not possible because the value is stored with the help of iterator and the its a algorithm which want the iterator 

}

void test6() { // find the two adjacent value in the container
	cout << "\ntest6=============================" << endl; 

	array <int, 5> arr1{ 2,1,3,3,5 };

	auto adjacent = adjacent_find(arr1.begin(), arr1.end()); // adjacent is the iterator here
	if (adjacent != arr1.end()) // if there is no adjacent value it give the last element of the container
		cout << "adjacent element found with value : " << *adjacent << endl;
	else
		cout << "no adjacent elements found" << endl;

	//cout << *(arr1.end()-1); //give 5
}

void test7() {
	cout << "\ntest7===================================" << endl;

	//accumulate is from include numeric 
	array<int, 5> arr1{ 1,2,3,4,5 };

	int sum = accumulate(arr1.begin(), arr1.end(),0);  //-> '0' from where you start adding the values here we start from zero
	cout << "sum of the element in the arr1 is : " << sum << endl;
}

void test8() {
	cout << "\ntest8===================================" << endl;
	array<int, 5> arr1{ 1,2,3,3,3 };

	int count = std::count(arr1.begin(), arr1.end(), 3); 
	if (count == 0)
		cout << "no element found" << endl;
	else
		cout << "found 3: " << count << " times" << endl;
}

void test9() {
	cout << "\ntest9===================" << endl;
	array<int, 10>arr1{ 10,20,50,60,70,80,200,300,400 };
	//find how many number b/w 10 and 200 -> 50,60,70,80

	int count = std::count_if(arr1.begin(), arr1.end(), [](int x) {return x > 10 and x < 200; });
	cout << "found " << count << " mathes" << endl;
}


  int main() {
	test1();
	test2();
	test3();
    test4();
    test5();
	test6();
    test7();
	test8();
	test9();
	  ;	return 0;
}