#include "trigger.h"

bool OnTriggerEnter(GameObject rect1,GameObject rect2)
{
	if(rect1.x < rect2.x + rect2.sx &&
	   rect1.x + rect1.sx > rect2.x &&
       rect1.y < rect2.y + rect2.sy &&
       rect1.y + rect1.sy > rect2.y &&
	   rect1.z < rect2.z + rect2.sz &&
	   rect1.z + rect1.sz > rect2.z)
	{
		return true;
	}
	return false;
}