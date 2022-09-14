#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Prophet.h"
#include "Fish.h"
#include "King.h"
#include "Shepherd.h"
#include "Stone.h"
#include "Giant.h"

using namespace std;
//void unleashPlague(string s);
void offerSacrifice();

int main()
{
	/*int samsonsEyes = 2;
	bool hair = true;
	string strength;

	cout << "What makes you so strong? ";
	cin >> strength;

	if (strength == "hair")
	{
		hair = false;
	}

	if (hair == false)
	{
		while (samsonsEyes > 0)
			samsonsEyes--;
	}*/


	/*bool pharaohSaysNo = true;
	string* plagues = new string[10];
	ifstream fin;

	fin.open("Plagues.txt");

	for (int i = 0; i < 10; i++)
	{
		getline(fin, plagues[i]);
	}

	fin.close();

	for (int i = 0; i < 10; i++)
	{

		cout << "Let my people go!" << endl;

		if (pharaohSaysNo)
		{
			cout << "No? Okay then." << endl;
			unleashPlague(plagues[i]);
		}
	}*/

	/*Prophet Jonah;
	Fish greatFish;

	Jonah.setDestination("Tarsus");

	if (Jonah.getDestination() != "Nineveh")
	{
		greatFish.setDestination(Jonah);
	}*/


	Prophet Samuel;
	King Saul;
	Shepherd David;
	
	for (int i = 0; i < 2; i++)
	{
		if (Samuel.isHere() == false)
		{
			Saul.offerSacrifice();
			Saul.incrementDisobedience();
		}
	}

	if (Saul.getDisobedience() == 2)
	{
		Samuel.sigh();
		Samuel.annointNewKing(David);
	}

	/*Shepherd David;
	Stone* stones = new Stone[5];
	Giant Goliath;
	King Saul;

	if (Saul.isNoHelpWhatsoever())
	{
		for (int i = 0; i < 5; i++)
		{
			David.gatherStone(stones[i]);
		}
	}

	David.slingStone(stones[0], Goliath);

	Goliath.thud();*/

	system("pause");
	return 0;
}

//void unleashPlague(string s)
//{
//	cout << s << endl;
//}

void offerSacrifice()
{

}