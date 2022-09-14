#pragma once
#include "Prophet.h"

class Fish: public Prophet
{
public:
	Fish()
	{

	}

	virtual void setDestination(Prophet p)
	{
		prophet = p;
	}
	virtual std::string getDestination()
	{
		return "Yum";
	}

	~Fish()
	{

	}

private:
	Prophet prophet;

};