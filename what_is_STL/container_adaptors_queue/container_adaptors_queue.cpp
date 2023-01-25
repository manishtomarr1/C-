// FIFO-> first in first out.
// use list and deque -> both have the front and the back 
// element pushed from the back poped from the front
// no iterator are supported
// we cannot use stl algorithm 
// by default take -> deque
// [front]-------[back]
#include<iostream>
#include<queue>
#include<vector>
#include<deque>
using namespace std;

template <typename T>
void display(queue <T> q) {
	cout << "[";
	while (!q.empty()){
		T elem = q.front();
	q.pop();
	cout << elem << " ";
}
cout << "]" << endl;
}

int main() {

	queue <int> q;

	for (int i : {1, 2, 3, 4, 5})
		q.push(i);
	display(q);

	cout << "front: " << q.front() << endl;
	cout << "back: " << q.back() << endl;

	q.push(100);
	display(q);

	q.pop();
	display(q);

	while (!q.empty())
		q.pop();
	display(q);

	cout << "size: " << q.size() << endl;

	q.push(10);
	q.push(20);
	q.push(30);
	display(q);

	q.front() = 5;
	q.back() = 100;
	display(q);

	return 0;
}