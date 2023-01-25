#include<iostream>
#include<vector>
using namespace std;
class shape { // abstract base class
private :
	// attribute comman to all shape
public :
	virtual void draw() = 0; // called pure virtual function
	virtual void rotate() = 0;
	virtual ~ shape(){}

};
class open_shape : public shape { // abstract class matlab jis class mae pure virtual function na override kre or inherit kre abstract base class se wo automatically bn jati hai abstract class
public :
	~ open_shape (){}

};
class closed_shape : public shape { // abstract class
public :
	~ closed_shape (){}
};
class line : public open_shape { // concrete class
public :
	virtual void draw() override {
		cout << "drawing a line " << endl;
	}
	virtual void rotate () override {
		cout << "rotating a line" << endl;
	}
	~ line (){}
};
class circle : public closed_shape { // concrete class 
public :
	virtual void draw() override {
		cout << "draw a circle" << endl;
	}
	virtual void rotate() override {
		cout << "rotating a circle" << endl;
	}
	~ circle (){}
};
class squre : public closed_shape { // concrete class because we override those two virtual functions
public :
	virtual void draw() override {
		cout << "draw a squre" << endl;

	}
	virtual void rotate() override {
		cout << "rotate a squre " << endl;
	}
	~squre();
};

void screen_refresh(const vector <shape*>& shapes) { // make a vector of base class pointer
	cout << "refressing" << endl;
	for (const auto p : shapes)
		p->draw();
}
int main() {
//shape s;
//shape* ptr = new shape;
	// aisa nhi kr skte because we can not make the object of abstract class  aise hi closedshape or openshape ka bhi nhi bna sakte
	cout << "===static bound===" << endl;
	circle c;
	c.draw();
	cout << "===dynamic bound" << endl;
	shape* ptr = new circle; // we can make the pointer of abstract base class and create the dynamic polymorphism it is allowable.
	ptr->draw();
    ptr-> rotate ();
	cout << "access all derived clases from base class pointer" << endl;
	shape* s1 = new circle;
	shape* s2 = new line;
	shape* s3 = new squre;

	cout << "create a vector for loop through the vector and call each one of them" << endl;
	vector <shape*> shapes{ s1,s2,s3 }; // syntax of creating vector pointer of object
	for (const auto p : shapes) {
		p->draw(); // we call draw method for all object in vecctor here p is the pointer to shape hmne pointer bnaya hai vector ka toh 'p' as a vector kaam krega yhan
		p->rotate();
	}

	cout << "implement that helper function" << endl;
	screen_refresh(shapes);

	cout << "free up" << endl;
	delete s1;
	delete s2;
	delete s3;


	return 0;
}
/*
* abstract class kewal interface hota hai jaise account kholna hai toh saving account kholna hai current
kholna hai uske hisab se kaam hota hai
* toh es liye abstract class ko khali rakhte hai or jaruri ni hi khali hi ho
* pure virtual function bhi ese kaam me aate hai jo task unki help se hum kete hai concrete classes mae.
* aur jis class mae pure virtual function override nhi hote  wo bhi abstract class bn jate hai
* we cannot make object of abstract base class or abstract class not dynamically also
*/