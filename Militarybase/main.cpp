#include<iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

double SendingFreight(double gbase,double maxLd,int pbase, int vbase)
{
	if (gbase > 0 && pbase>0 && vbase>0) {
		if (gbase > maxLd) {
			gbase = -maxLd;
			vbase = -1;
			pbase = -1;
		}
		else if (gbase > maxLd ) {
			gbase = 0;
		}
	}
	return gbase;
}

int SendingPeople(int maxPl, int pbase, int vbase)
{
	if (pbase > 0 && vbase > 0) {
		if (pbase > (maxPl+1)) {
			pbase = -(maxPl+1);
			vbase = -1;
		}
		else if (pbase > maxPl) {
			pbase = 0; 
		} 
	}
	return pbase;
}

int main() {

	int pbase=200;
	int vbase=0;
	double petbase=1000;
	double gbase=1236;
	Base r(pbase, vbase, petbase, gbase);
	r.Print();

	Vehicle* avto10 = new Bus (25, 35, 40, 75);
	Vehicle* avto11 = new Bus(40, 45, 23, 75);
	pbase= avto10->arrive(pbase, vbase);
	pbase = avto11->arrive(pbase, vbase);
	int maxPl = avto10->GetMaxPeople();
	pbase=SendingPeople( maxPl, pbase, vbase);
	int maxPl1 = avto11->GetMaxPeople();
	pbase = SendingPeople(maxPl1, pbase, vbase); 
	cout << "__________________________________________________";
	Vehicle* avto2 = new Truck(54, 65, 98, 130);
	gbase=avto2->arriveT(gbase, vbase, pbase);
	double maxLd = avto2->GetMaxLoad(); 
	gbase=SendingFreight(gbase, maxLd, pbase, vbase);
}