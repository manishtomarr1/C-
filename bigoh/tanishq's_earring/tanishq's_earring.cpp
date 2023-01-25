#include<iostream>
using namespace std;

class tanishq {

public :

    void earring() {
		cout << "tanishq's earring : ";
	}
};

class saurabh : protected tanishq {

public :

	bool tanishqearring(tanishq t1) { //association
		
        t1.earring();
		return true;

	}
};

int main() {

	saurabh s1;
	tanishq t1;
	cout << boolalpha;
	cout << s1.tanishqearring(t1) << endl;

	return 0;
	
}