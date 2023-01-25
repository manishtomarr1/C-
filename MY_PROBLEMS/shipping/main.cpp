#include <iostream>
#include<string>
using namespace std;
int main () {
    const double base_cost {190};
    int lenght;
    int width;
    int height;
    int volume;
    double total_charge10;
    double total_charge25;
    char a;
    

    cout << "welcome to ajay shipping company" << endl;
    cout << "base cost= rs" << "" << base_cost << endl;
    
    cout << "enter the lenght:";
    cin >> lenght; 
    cout << endl;
    cout << "enter the width:";
    cin >> width;
    cout << endl;
    cout << "enter the height:";
    cin >> height;
    cout << endl;
    
    
    
    
   cout << "lenght:" << "" << lenght << "inch" << endl;
   cout << endl;
   cout << "width:" << "" << width << "inch" << endl;
   cout << endl;
   cout << "height:" << "" << height << "inch" << endl;
   cout << endl;
   cout << "is any weapon is placed inside your package? type y/n" << endl;
   cin >> a;
   if (a == 'y' ) {
    
   cout << "you are under arrest in the coustedy of DURGANSH DIXIT (S.I) , Thana-Ghaziabadh" << endl;
   }
   
   
   
  else if (a == 'n'){
      cout << "you are in safe zone" << endl;
       
   
       if(lenght>10 || width>10 || height>10){
   cout << "sorry we cannot forward your package because you exceed the limits" << endl;
    
  }
   else{
       cout << "yes we can forward your package" << endl;
   
   volume= lenght*width*height;
    
    cout << "volume=" << " " << volume << "cubic unit" << endl;
    
    if(volume >= 100 && volume < 500){
        cout << "you have to pay 10% extra of base charge" << endl;
    
       total_charge10= volume+(1.9*10);
       cout << "your total charge= rs" << "" << total_charge10;
    }
        
        
        else if (volume >=500 && volume <=1000){
            cout << "you have to pay 25% extra of base charge" << endl;
        
            total_charge25= volume+(1.9*25);
            cout << "your total charge= rs" << "" << total_charge25 << endl;
        }
         else {
         cout << "yout total charge=" << "" << volume << endl;
   }
   }
  }     
        
        else {
                  cout << "wrong input" << endl;
              }
   
             
   
  
              return 0;

       
   }