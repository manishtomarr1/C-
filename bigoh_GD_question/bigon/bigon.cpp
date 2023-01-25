#include<iostream>
#include<string>
using namespace std;

class vehicles {

protected:

	string name;
	string fuel;
	bool imported;
	bool made_in_india = false;
	bool used = false;
	bool newcar = false;

	void display() {

		cout << boolalpha;
		cout << "name : " << name << endl;
		cout << "run on fuel : " << fuel << endl;
		cout << "used : " << used << endl;
		cout << "made in india : " << made_in_india << endl;
		cout << "imported : " << imported << endl;
		cout << "new : " << newcar << endl;

	}

};

class hondaaccordcar : protected vehicles {

public:

	void specification(string name_val, string fuel_type) {

		name = name_val;
		fuel = fuel_type;
		imported = false;
		made_in_india = true;
		newcar = true;
		used = false;

		cout << "==========car==========" << endl;
		display();

	}
};

class Ducatibike : protected  vehicles {

public:
	void specification(string name_val, string fuel_type) {

		name = name_val;
		fuel = fuel_type;
		imported = true;
		used = true;
		made_in_india = false;
		newcar = false;

		cout << "\n==========bike==========" << endl;
		display();

	}
};

class saurabh {

public:

	void car(hondaaccordcar* car1) {

		car1->specification("Honda Accord", "diesel");
	}

	void bike(Ducatibike* bike1) {

		bike1->specification("Ducati", "petrol");
	}
};

int main() {

	hondaaccordcar h1;
	Ducatibike d1;

	{
		saurabh c1;

		c1.car(&h1);
		c1.bike(&d1);

	}

	return 0;
} 