#include "Bus.h"
#include "Vehicle.h"
#include<iostream>
using namespace std;

Bus::Bus(int ppl) 
{
    people = ppl;
}
    

Bus::Bus(int ppl, int maxppl):Bus( ppl)
{
    max_people = maxppl;
}

Bus::Bus(int ppl, int maxppl, double ptrl):Bus(ppl, maxppl)
{
    petrol = ptrl;
}

Bus::Bus(int ppl, int maxppl, double ptrl, double maxptrl):Bus(ppl,  maxppl,  ptrl)
{
    max_petrol = maxptrl;
}

int Bus::GetPeopleCount()
{
    return people;
}

int Bus::GetMaxPeople()
{
    return max_people;
}

int Bus::arrive(int plob)

{
    int plobcarnt = plob+people;
    driver++;
    car++;
    people = 0;
    return plobcarnt;
}

bool Bus::leave(int plob,int ptob)
{
    if (plob <= 0 && ptob<=0) {
        return false;
    }
    else if (plob >0 && ptob>0) {
        if (plob >= max_people) {
            people = max_people;
        }
        else {
            people = plob;
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
