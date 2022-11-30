#pragma once

class Food {

public:
	Food()
	{

	}

	~Food()
	{

	}

	void setType(string s)
	{
		type = s;
	}

	string getType()
	{
		return type;
	}

private:
	string type;


};