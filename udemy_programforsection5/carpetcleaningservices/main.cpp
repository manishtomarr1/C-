#include <iostream>
using namespace std;
int const price_peer_room {30};
int main()
{
    int a;
    int cost;
    float tax;
    float estimate_cost;
    
    
    cout << "welcome to durgansh carpet cleaning sevices" << endl;
    cout << "price per room is $30" << endl;
    cout << "enter the number of rooms:";
    cin >> a;
    cost=price_peer_room*a;
    
    cout << "total coast=" << " "  << cost << endl;
    
    tax= 0.6*a;
   
    cout << "total tax=" << " " << tax << endl;
    estimate_cost= cost+tax;
    
    
    cout << "total amount you pay=" << " " << estimate_cost << endl;
    cout << "this is valid upto 30 days" << endl;
    cout << "thanks for your intrest" << endl << "team durgansh carpet company";
    return 0;
    
    
    
}


