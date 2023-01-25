#include<iostream>
#include<vector>
#include<memory>
using namespace std;
class test {
private :
	int data{ };
public :
	test()
		: data{ 0 } {
		cout << "test constructor (" << data << ")" << endl;
	}
	test(int a)
		: data{ a } {
		cout <<"             test constrctor (" << data << ")" << endl;
	}
	int get_data() {
		return data;
	}
	~test() {
		cout <<"              test distructor(" << data << ")" << endl;
	}
};// utility functions
unique_ptr<vector<shared_ptr<test>>> make() {
	return make_unique<vector<shared_ptr<test>>>(); // yeh khali pointer khi point nhi krra tha by help of return hmene test k constructor pe point karaya
	
}
void fill(vector<shared_ptr<test>>& vec, int num) {
	int a;
	for (int i = 0; i < num; i++) {
		cout << "\nenter data point [" << i + 1 << "]" << endl;
		cin >> a;
		shared_ptr<test> ptr = make_shared<test>(a);
		vec.push_back(ptr);
	}
}
void display(const vector <shared_ptr <test>>& vec) {
	cout << "=======================================" << endl;
  cout << "display vector data" << endl;
  for (const auto &i : vec)
  	std::cout << i->get_data() << endl;
	
	cout << "=======================================" << endl;
}
int main() {
	unique_ptr <vector<shared_ptr <test>>> vec_ptr;
	vec_ptr = make();
	cout << "how many data points do you want to enter : " << endl;
	int num;
	cin >> num;
	fill(*vec_ptr, num);
	display(*vec_ptr);
	return 0;
}