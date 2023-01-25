#include<iostream>
using namespace std;

void deletetriplet(int arr[], int *size, int lenght) {
	int count = 0;

	for (int i = lenght ; i > lenght-3; i--) {

		arr[i-1] = arr[i];
		count++;
	}

	lenght = (lenght - count);
	*size = *size-count;

	cout << "[ ";
	for (int i = 0; i < lenght; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}  
int main() {
	cout << "enter size :";
	int size;
	cin >> size;

	int* p = new int[size];

	cout << "enter lenght : ";
	int lenght;
	cin >> lenght;
	
	if (lenght > size || lenght < 3) {
		cout << "invalid lenght!" << endl;
	}

	else {

		for (int i = 0; i < lenght; i++) {
			cout << "enter element [" << i + 1 << "] : ";
			cin >> p[i];
		}

		cout << "[ ";
		for (int i = 0; i < lenght; i++) {
			cout << p[i] << " ";
		}
		cout << "]" << endl;

		deletetriplet(p, &size, lenght);
	}

	delete[] p;

	return 0;
}