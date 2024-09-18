#pragma once
class Base
{
	int people_on_base;
	int vehscles_on_base;
	double petrol_on_base;
	double goods_on_base;
public:
	
	Base(int plob);
	Base(int plob, int vhop);
	Base(int plob, int vhop, int ptob);
	Base(int plob, int vhop, int ptob, int gdob);
	void Print();
};


