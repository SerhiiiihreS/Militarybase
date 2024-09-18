#pragma once
class Vehicle
{
	double petrol;
	double max_petrol;

public:
	

	Vehicle(double pet);
	Vehicle(double pet, double maxpet);

	virtual double Getpetrol();
	virtual double Getmax_petrol();
	virtual int arrive(int plob, int vbase);
	virtual int arriveT(int plob, int vbase, int pbase);
	virtual void Print();
	virtual int GetMaxPeople();
	virtual double GetMaxLoad();

	virtual bool leave(int plob, int ptob);



};

