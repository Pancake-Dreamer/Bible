#pragma once
#include "Stone.h"
#include "Giant.h"

class Shepherd
{
public:
	Shepherd()
	{

	}

	~Shepherd()
	{

	}

	void gatherStone(Stone s)
	{
		if (stoneCount < 5)
		{
			stones[stoneCount] = s;
			stoneCount++;
		}
		
	}

	void slingStone(Stone s, Giant g)
	{

	}

private:
	Stone* stones = new Stone[5];
	int stoneCount = 0;
};