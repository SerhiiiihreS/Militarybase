#include "Vehicle.h"
#include<iostream>
using namespace std;

double Vehicle::Getpetrol()
{
    if (petrol > 0) {
        return petrol;
    }
}

double Vehicle::Getmax_petrol()
{
    if (max_petrol > 0) {
        return max_petrol;
    }
}

int Vehicle::arrive(int plob, int vbase)
{
    cout << "Nailed it to the base" << endl; 
    return 0;
}

int Vehicle::arriveT(int plob, int vbase, int pbase)
{
    return 0;
}

void Vehicle::Print()
{
}

int Vehicle::GetMaxPeople()
{
    return 0;
}

double Vehicle::GetMaxLoad()
{
    return 0.0;
}

bool Vehicle::leave(int plob, int ptob)
{
    if (petrol == max_petrol) {
        return petrol;
    }
    else if (petrol < max_petrol) {
        return false;
    }
}


Vehicle::Vehicle(double pet)
{
    petrol = pet;
}

Vehicle::Vehicle(double pet, double maxpet):Vehicle( pet)
{
    max_petrol = maxpet;
}
