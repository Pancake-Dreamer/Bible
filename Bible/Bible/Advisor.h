#pragma once

class Advisor {

public:
	void setName(string s)
	{
		name = s;
	}

	string getName()
	{
		return name;
	}

private:
	string name;

};