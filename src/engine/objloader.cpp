#include "objloader.h"

bool loadObjFile(std::string filename)
{
	std::string line;
	std::ifstream myfile (filename);
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
		}
		myfile.close();
	}

	else std::cout << "Unable to open file"; 

	return 0;
}