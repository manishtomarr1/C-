#include <iostream>
using namespace std;
int main()
{
    bool requried_coat;
    const int requried_wind_speed{25};
    const double requried_temperature{45};
    int wind_speed;
    double temperature;
    cout << "enter the wind speees in mph: ";
    cin >> wind_speed;
    cout << endl;
    cout << "enter the temperature in feranhite: ";
    cin >>temperature;
    cout << endl;
    cout << boolalpha;
    
    
    requried_coat = wind_speed > requried_wind_speed || temperature < requried_temperature;
    cout << "at the" << " " << temperature << " " << "temperature and the" << " " << wind_speed << " " << "wind speed the requriment of wearing coat is" << " : " << requried_coat;
    return 0;
}


