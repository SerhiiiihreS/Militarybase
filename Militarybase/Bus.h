#pragma once
#include "Vehicle.h"
class Bus : public Vehicle
{
	int people;
	int max_people;
	double petrol;
	double max_petrol;
public:
	int GetPeopleCount();
	int GetMaxPeople();
	void arrive();
	bool leave();
};

