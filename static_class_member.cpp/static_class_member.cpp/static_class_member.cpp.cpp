#include<iostream>
using namespace std;
class player {
private :
	string name;
	int marks;
	int age;
	static int num_players; // stntax to declare the static data member. and we dont initilised this its automatically start with 0. 
public :
	static int  get_num_player() { // it only get the static data member nothing else.
		return num_players;
	}
	player (string a , int b , int c)
		: name{ a }, marks{ b }, age{c} {
		cout << name << " " << marks << " " << age << endl;
		++num_players; // esme jitni object bnege pta chlta rahega.usme ek ek ka increment hota rhega.
	}
	~player() {
		cout << "distructor calls for : " << name << endl;
		--num_players; // yha se jb object delete hogi ek player km ho jyega toh ek count bhi km ho jyega.
	}
};
int player :: num_players{ 0 }; // ese initilised kr skte hai esko static data member ko.
void display_active_player() {
	cout << "activer player is : " << player::get_num_player() << endl; // jitney active player honge wo aa jayengen kyuki get_num_player num_player
	//rerturn krega or usme jitni object bnege utna +1 hoota rhega.
}
int main() {
	display_active_player();
	player s1("manish", 28, 22);
	display_active_player();
		{
			player s2("priyanshu", 21, 23);
			display_active_player();
			// ab yeh active player 2 batayega 
		}
		display_active_player();// yha yeh fir se 1 dekhaiga kyuki player 2 jaise hi out of scope jayega vaise hi distructor call hoga jo - ke dega 

		return 0;
	}