#include<iostream>
#include<string>
using namespace std; 
void print_guest_list (const string guest [ ] , size_t size );
void clear_guest_list ( string guest [ ] , size_t size);
 void event_guest_list();
  int main () {
      event_guest_list ();
      return 0;
  }
  
  void print_guest_list(const string guest [ ] , size_t size){
  for(int i=0 ; i<size ; i++) {
   cout << guest [i];
   cout << endl;
  }
    }
    void clear_guest_list( string guest [ ] , size_t size){
        for(int i =0 ; i< size ; i++){
            guest[i]= "  " ;
        }
         cout << " your guest list now " << endl;
    }
void event_guest_list (){
    string name[ ]{"manish","archit","harshit","kuland","kake"};
     cout << "your guests are " << endl;
     print_guest_list (name,5);
     clear_guest_list(name,5);
      print_guest_list (name,5);
}
