#include "ai.h"

void NN::calculate(float i1,float i2,float i3)
{
	w1 = i1*0.5f+i2*0.5f+i3*0.5f;
	w2 = i1*0.3f+i2*0.3f+i3*0.3f;
	w3 = i1*0.2f+i2*0.2f+i3*0.2f;
	w4 = i1*0.7f+i2*0.7f+i3*0.7f;
	o1 = w1+w2;
	o2 = w3+w4;
	o3 = o1+o2;
	o4 = o2+o3;
	o5 = o3+o4;
	o6 = o4+o5;
	x = o1;
	y = o2;
	z = o3;
	
	sx = o4;
	sy = o5;
	sz = o6;
}