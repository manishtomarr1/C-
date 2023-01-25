#include <iostream>
using namespace std;
int main () {
    const double base_cost {190};
    int lenght;
    int width;
    int height;
    int volume;
    double total_charge10;
    double total_charge25;
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
   if(lenght>10 || width>10 || height>10){
   cout << "sorry we cannot forward your package" << endl;
    
   }
   else{
       cout << "yes we can forward your package"; << endl;
   }
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
         
    
        
   
    
    
     
    
   
        
    
   
        
    
        
    
    
    
    
    
    
    return 0;
    
}
