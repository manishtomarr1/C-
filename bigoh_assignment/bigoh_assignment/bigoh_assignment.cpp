#include <iostream>
using namespace std;

class inverter
{

protected:

    double Operarting_voltage;
    double current;
    bool has_battery;

    inverter(double OV_val, double c_val)
    {
        Operarting_voltage = OV_val;
        current = c_val;
      
    }

    int Power_rating()
    {
        return Operarting_voltage * current;
    }

    void display()
    {
        cout << "Opertaing voltage is : " << Operarting_voltage << " V" << endl;
        cout << "Current is : " << current << " A" << endl;
        cout << boolalpha;
        cout << "has battery : " << has_battery << endl;
        cout << "Power Rating is : " << Power_rating() << endl;
    }

};

class zelio :protected inverter
{
public:
    zelio(double OV_val, double c_val) :inverter(OV_val, c_val)
    {
        cout << "======zelio Info======" << endl;
        has_battery = true;
        display();
    }

};

class Icruze :protected inverter

{
public:
    Icruze(double OV_val, double c_val) :inverter(OV_val, c_val)
    {
        cout << "\n======Icruze Info======" << endl;
        has_battery = true;
        display();
    }
};

class SolarInverter : protected inverter
{

public:

    bool Gridon = true;
    SolarInverter(double OV_val, double c_val, bool grid_val) :inverter(OV_val, c_val)
    {
        Gridon = grid_val;
    }

};

class GTI :protected SolarInverter
{

public:

    GTI(double OV_val, double c_val, bool grid_val) :SolarInverter(OV_val, c_val,grid_val)
    {
       
        has_battery =false;
        cout << "\n======GTI Info======" << endl;
        display();
    }

};

class PCU :protected SolarInverter
{

public:

    PCU(double OV_val, double c_val,bool grid_val) :SolarInverter(OV_val, c_val, grid_val)
    {
        cout << "\n======PCU Info======" << endl;
        has_battery = true;
        display();
    }

};

class regalia : protected SolarInverter {

public :

    regalia(double OV_val, double c_val, bool grid_val) :SolarInverter(OV_val, c_val, grid_val) {
        
        cout << "\n======PCU Info======" << endl;
        display();
    }
};

int main()
{   

    zelio(13, 4);
    Icruze(11, 3);
    GTI(12, 2, true);
    PCU(15, 5, false);
    regalia(16, 6, false);

    return 0;
}