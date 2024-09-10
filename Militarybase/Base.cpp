#include "Base.h"

Base::Base(int plob)
{
	people_on_base = plob;
}

Base::Base(int plob, int vhop):Base(plob)
{
	vehscles_on_base = vhop;
}

Base::Base(int plob, int vhop, int ptob):Base(plob,vhop)
{
	petrol_on_base = ptob;
}

Base::Base(int plob, int vhop, int ptob, int gdob):Base(plob,vhop,ptob)
{
	goods_on_base = gdob;
}
