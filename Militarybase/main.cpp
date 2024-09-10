#include<iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;
void unloading(int pbase, int vbase) {
	int pbaseN = pbase + Vehicle::driver;
	int vbaseN = vbase + Vehicle::car;

	pbase = pbaseN;
	vbase = vbaseN;
}

int main() {

	int pbase=200;
	int vbase=0;
	double curlod1 = 0;
	double petbase=1000;
	double gbase=1236;
	Base(pbase, vbase, petbase, gbase);

	Vehicle* avto = new Bus(25, 35, 40, 75);
	pbase= avto->arrive(pbase); 
	Vehicle* avto2 = new Truck(54, 65, 98, 130);
	gbase=avto2->arrive(gbase);
	unloading(pbase, vbase);
	cout << pbase << endl << vbase;

}