#include "ai.h"

/*do not copy the whole code of ai*/

void NN::calculate(float i1,float i2)
{
	w1 = i1*0.5f+i2*0.5f+err;
	w2 = i1*0.3f+i2*0.3f+err;
	w3 = i1*0.2f+i2*0.2f+err;
	w4 = i1*0.7f+i2*0.7f+err;
	o1 = w1+w2;
	o2 = w3+w4;
	if(o1 >= 1)
	{
		left = true;
		err = o1-1;
	}
	if(o2 >= 1)
	{
		right = true;
		err = o2-1;
	}
}