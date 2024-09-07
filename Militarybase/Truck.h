#pragma once
#include "Vehicle.h"
class Truck :public Vehicle
{
	double load;
	double max_load;
	double petrol;
	double max_petrol;
public:
	double GetCurrentLoad();
	double GetMaxLoad();
	void arrive();
	bool leave();
};

