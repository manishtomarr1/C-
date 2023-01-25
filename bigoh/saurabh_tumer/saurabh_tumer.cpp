#include<iostream>
using namespace std;

class tumor {

public :

	bool tumer = true;

};

class saurabh  {

	tumor t1;

public :

	bool istumor() {

		t1.tumer = true;
		return t1.tumer;

	}
  
};

int main() {

	{
		saurabh s1;
		cout << boolalpha;
		cout << s1.istumor() << endl;
	}

	return 0;
}