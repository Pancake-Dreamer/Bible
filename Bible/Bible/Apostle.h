#pragma once
#include <string>

class Apostle
{
private:
	bool doubts;


public:
	Apostle()
	{

	}

	~Apostle()
	{

	}

	std::string doubt()
	{
		return "I dunno, is He?";
		setDoubts(true);
	}
	
	void setDoubts(bool b)
	{
		doubts = b;
	}

	bool getDoubts()
	{
		return doubts;
	}

	void awkwardStare()
	{

	}

	bool hasSeen()
	{
		return true;
	}

	std::string bruh()
	{
		return "Bruh";
	}

	void rollEyes()
	{

	}
};