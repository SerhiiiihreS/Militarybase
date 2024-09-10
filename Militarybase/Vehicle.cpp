#include "Vehicle.h"
#include<iostream>
using namespace std;

double Vehicle::Gettank_volume()
{
    if (tank_volume > 0) {
        return tank_volume;
    }
}

double Vehicle::Getpetrol_amount()
{
    if (petrol_amount > 0) {
        return petrol_amount;
    }
}

int Vehicle::arrive(int plob)
{
    cout << "Nailed it to the base" << endl; 
    return 0;
}

bool Vehicle::leave(int plob, int ptob)
{
    if (petrol_amount == tank_volume) {
        return petrol_amount;
    }
    else if (petrol_amount < tank_volume) {
        return false;
    }
}


Vehicle::Vehicle(double petamo)
{
    petrol_amount = petamo;
}

Vehicle::Vehicle(double petamo, double tavo):Vehicle( petamo)
{
    tank_volume = tavo;
}
