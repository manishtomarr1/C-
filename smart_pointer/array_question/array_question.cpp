#include<iostream>
using namespace std;
int main() {
	int arr[10];
	int* ptr{nullptr};
	for (int i = 0; i < 10; i++) {
		arr[i] = *ptr;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	arr[0] = 1;
	arr[3] = 5;
	arr[8] = 9;
	arr[7] = 10;
	arr[5] = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == *ptr)
			cout << &i << endl;
	}
		
		return 0;
}