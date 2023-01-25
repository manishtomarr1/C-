#include <iostream>
using namespace std;
const int charge_small_room {25};
const int charge_large_room {35};
const float sales_tax_rate {0.6};
int main()
{
    int a;
    int b;
    double total_charge_small_room;
    double total_charge_large_room;
    double total_charge;
    

    cout << "welcome to the manish carpet company" << endl;
    cout << "price per room is" << " " << "$" << charge_small_room << " " << "for small room" << " " << "$" << charge_large_room << " " << "for large room" << endl;
    cout << "enter the number of small room:";
    cin >>a;
    cout << "enter the number of large room:";
    cin >>b;
    total_charge_small_room= a*(charge_small_room+sales_tax_rate);
    total_charge_large_room= b*(charge_large_room+sales_tax_rate);
    cout << "total charge of small room=" << " "  << "$" << total_charge_small_room << endl;
    cout << "total charge of large room=" << " " << "$" << total_charge_large_room << endl;
    total_charge= (total_charge_large_room+total_charge_small_room);
    cout << "total estimate charge=" << " " << "$" << total_charge << endl;
    cout << "this estimate is valid upto 30 days";
    return 0;
    
    
    
    
    
    }


