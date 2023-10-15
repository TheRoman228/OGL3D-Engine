#pragma once

class NN
{
public:
	bool left,right;
	void calculate(float i1,float i2);
private:
	float w1,w2,w3,w4,o1,o2,err;
};