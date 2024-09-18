#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
private:
	int people;
	int max_people;
	double petrol;
	double max_petrol;
public:
	

	Bus(int ppl, int maxppl, double pet, double maxpet);
	int GetPeopleCount();
	int GetMaxPeople();
	int arrive(int plob,int vbase);
	bool leave(int plob, int ptob);
	void Print();

};

