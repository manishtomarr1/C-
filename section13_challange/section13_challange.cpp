#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector <string> names{};
class movies {
private :
	string name;
	int rating;
	int count{0};
public :
	void add_movie(string name_val, int rating_val, int count_val) {
		name = name_val;
		rating = rating_val;
		count = count_val;
		//for (auto i : names) {
			if (std ::count(names.begin(), names.end(), name)) {
				cout << name << " allready exists try another one \n";
			}
			else {
				cout << name << " added \n";
				names.push_back(name);
			}
	  }


	
	void increment_count(string name) {
		//for (auto i : names) {
		 
			if (std::count(names.begin(), names.end(), name)) { // method to check whole vector at one time and find the specific value
				++count;
				cout << "increment in watch count of : " << name << endl;
				cout <<  "you watched lekh " << count << " times" << endl;
			}
			else {
				cout << name << " does not exists try another one \n";
			}
		
	}
};
void display() {
	
  }
int main() {
	movies m1;
	m1.add_movie("lekh", 5, 7);
	m1.add_movie("surkhi bindi ", 5, 4);
	m1.increment_count("lekh");
	return 0;
}