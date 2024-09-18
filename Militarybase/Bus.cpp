#include "Bus.h"
#include "Vehicle.h"
#include<iostream>
using namespace std;

    
Bus::Bus(int ppl, int maxppl, double pet, double maxpet) : Vehicle(pet, maxpet)
{
    people = ppl;
    max_people = maxppl; 
    petrol=pet; 
    max_petrol=maxpet; 
}


int Bus::GetPeopleCount()
{
    return people;
}

int Bus::GetMaxPeople()
{
    return max_people;
}

int Bus::arrive(int plob,int vbase)

{
    int plobcarnt = plob+people+1;
    people = 0;
    vbase = +1;
    return plobcarnt;
}

bool Bus::leave(int plob,int ptob)
{
    if (plob <= 0 && ptob<=0) {
        return false;
    }
}

void Bus::Print()
{
    cout<< people<<endl<<max_people<<endl<< petrol<< endl << max_petrol;
    double petrol;
    double max_petrol;
}
