#pragma once
class Vehicle
{
	double petrol_amount;
	double tank_volume;
public:
	double Gettank_volume();
	double Getpetrol_amount(); 
	virtual void arrive();
	virtual bool leave();


};

