#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
	int people;
	int max_people;
	double petrol;
	double max_petrol;
public:
	Bus(int ppl);
	Bus(int ppl, int maxppl);
	Bus(int ppl, int maxppl, double ptrl);
	Bus(int ppl, int maxppl, double ptrl, double maxptrl);

	int GetPeopleCount();
	int GetMaxPeople();
	int arrive(int plob);
	bool leave(int plob, int ptob);
};

