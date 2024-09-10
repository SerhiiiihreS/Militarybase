#pragma once
class Vehicle
{
	double petrol_amount;
	double tank_volume;
	
public:
	static int driver;
	static int car;
	double Gettank_volume();
	double Getpetrol_amount(); 
	virtual int arrive(int plob);

	virtual bool leave(int plob, int ptob);
	Vehicle()= default;
	Vehicle(double petamo);
	Vehicle(double petamo, double tavo);


};

int Vehicle::driver = 0;
int Vehicle::car = 0;