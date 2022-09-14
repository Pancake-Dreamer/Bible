#pragma once
#include <string>
#include "Shepherd.h"

class Prophet
{
private:
	std::string destination;
	bool here = false;

public:
	Prophet()
	{

	}

	void setDestination(std::string s)
	{
		destination = s;
	}
	std::string getDestination()
	{
		return destination;
	}

	void annointNewKing(Shepherd s)
	{

	}

	void sigh()
	{

	}

	bool isHere()
	{
		return here;
	}

	~Prophet()
	{

	}
};