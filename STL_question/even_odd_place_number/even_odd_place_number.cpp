#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

template<typename t>
void display(vector<t> vec) {
	cout << "[ ";
	for (const auto& i : vec) {
		cout << i << " ";
	}
	cout << "]" << endl;
}
int main() {

	vector<int> vec{ 1, 2, 8, 10, 9, 6, 5, 3, 4, 11, 16, 18, 19, 23, 22, 24, 26, 29 };
	vector<int> vec1{};

	sort(vec.begin(), vec.end());



	//while (it != vec.end()) {
	//	if (*it % 2 != 0) {
	//		vec1.emplace_back(*it);
	//		it++;
	//	}
	//}

	std::copy_if(vec.begin(), vec.end(), back_inserter(vec1), [](int x) {return x % 2 != 0; });

	cout << "\norignal vector is : " << endl;
	display(vec);

	cout << "\nnew vector is :" << endl;
	display(vec1);

	auto it = vec.begin();
	while (it != vec.end()) {
		if (*it % 2 != 0)
			vec.erase(it);
		else
			it++;
	}

	cout << "\norignal vector after erasing : " << endl;
	display(vec);


	display(vec);

	vector <int> vec3{};
	merge(vec1.begin(), vec1.end(), vec.begin(), vec.end(), vec3.begin());
	display(vec3);
	return 0;
}
