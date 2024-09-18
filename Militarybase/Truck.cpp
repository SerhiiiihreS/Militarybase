#include "Truck.h"
#include<iostream>
#include "Vehicle.h"
using namespace std;


Truck::Truck(double ld, double maxld, double pet, double maxpet) : Vehicle(pet, maxpet)
{
    load = ld;
    max_load = maxld;
    petrol = pet;
    max_petrol = maxpet;
}

double Truck::GetCurrentLoad()
{
    return load;
}

double Truck::GetMaxLoad()
{
    return max_load;
}

int Truck::arrive(int vhop, int vbase,int pbase)
{
    int vhopcarnt = vhop + load;
    vbase = +1;
    pbase = +1;
    load = 0;
    return vhopcarnt;
}

bool Truck::leave(int gdob, int ptob)
{
    if (gdob <= 0 && ptob <= 0) {
        return false;
    }
}