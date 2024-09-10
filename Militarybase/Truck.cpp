#include "Truck.h"
#include<iostream>
#include "Vehicle.h"
using namespace std;

Truck::Truck(double ld)
{
    load = ld;
}

Truck::Truck(double ld, double maxld) :Truck( ld)
{
    max_load = maxld; 
}

Truck::Truck(double ld, double maxld, double ptrl) :Truck( ld, maxld)
{
    petrol = ptrl; 
}

Truck::Truck(double ld, double maxld, double ptrl, double maxptrl) :Truck( ld,  maxld,  ptrl)
{
    max_petrol = maxptrl; 
}

double Truck::GetCurrentLoad()
{
    return load;
}

double Truck::GetMaxLoad()
{
    return max_load;
}

int Truck::arrive(int vhop)
{
    int vhopcarnt = vhop + load;
    driver++;
    car++;
    load = 0;
    return vhopcarnt;
}

bool Truck::leave(int gdob, int ptob)
{
    if (gdob <= 0 && ptob <= 0) {
        return false;
    }
    else if (gdob > 0 && ptob > 0) {
        if (gdob >= max_load) {
            load = max_load;
        }
        else {
            load = gdob;
        }
        if (ptob >= max_petrol) {
            petrol = max_petrol;
        }
        else {
            petrol = ptob;
        }
        driver--;
        car--;
    }
}
