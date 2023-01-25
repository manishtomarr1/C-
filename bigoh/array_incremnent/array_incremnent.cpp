#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
int *incrementbyreverse(int arr [],int lenght , int size) {
	int push = lenght;
	if (lenght <= (size / 2)) {
		for (int i =(lenght-1) ; i >= 0; i--) {
			
			arr[push]= arr[i];
			push++;
		}
	}
		
	else {

		cout << "invalid lenght" << endl;
		
	}
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;

	return arr;
}
int main() {
	cout << "enter size : " << endl;
	int size;
	cin >> size;

	cout << "enter lenght (lenght must be '= size' or '< size' ) : " << endl;
	int lenght;
	cin >> lenght;

	int* arraypointer = new int[size];
	for (int i = 0; i < lenght; i++) {
		cout << "enter element [" << i + 1 << "] : " << endl;
		cin >> arraypointer[i];
	}
	incrementbyreverse(arraypointer,lenght,size);

	return 0;
}