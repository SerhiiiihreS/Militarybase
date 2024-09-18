#pragma once
#include "Vehicle.h"
class Truck :public Vehicle
{
	double load;
	double max_load;
	double petrol;
	double max_petrol;
public:

	Truck(double ld, double maxld, double ptrl, double maxptrl);

	double GetCurrentLoad();
	double GetMaxLoad();

	int arrive(int vhop,int vbase,int pbase);
	bool leave(int plob, int ptob);
};

