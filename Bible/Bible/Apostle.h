#pragma once
#include <string>
#include "Type.h"

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

	void addressLetterTo(Church c)
	{

	}
	void makeAnalogy(Type t)
	{

	}

	void bomb(Type t)
	{

	}

};