#pragma once
#include "King.h"

class Judge
{
private:
	bool isLefty;
	std::string tribe;

public:

	Judge()
	{
		setIsLefty(false);
	}

	~Judge()
	{

	}

	void shank(King k)
	{

	}

	void setIsLefty(bool b)
	{
		isLefty = b;
	}

	bool getIsLefty()
	{
		return isLefty;
	}

	void setTribe(std::string s)
	{
		tribe = s;
	}

	std::string getTribe()
	{
		return tribe;
	}

};