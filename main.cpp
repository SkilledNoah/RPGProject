#include <iostream>
#include <string>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"


using namespace std;

void printMainMenu();
void printRaceMenu();

Player* createCharacter(string characterName, int typeNum, int raceNum);
void doCleanup(vector<Player*> PlayerPtrVector);
Race getRace(int raceNum);

//void printAll(vector<Player*> PlayerPtrVector);

vector<Player*> PlayerPtrVector;




int main()
{
	int playerClass;
	string characterName = "";
	int raceNum;


	/*Player* warriorPtr = new Warrior("Zork", ELF, 200, 1000);

	cout<<warriorPtr->getName()<<endl;
	cout << warriorPtr->getMagicPoints()<<endl;
	cout << warriorPtr->getHitPoints() << endl;
	cout << warriorPtr->getRace()<<endl;
	warriorPtr->setMagicPoints(2000);
	cout << warriorPtr->getMagicPoints() << endl;

	cout<<warriorPtr->whatRace();*/


	
	printMainMenu();
	cin >> playerClass;
	cin.get();	


		while (playerClass < 4 && playerClass > 0)
		{

			cout << "What is your name ? " << endl;
			getline(cin, characterName);
			

			printRaceMenu();
			cin >> raceNum;
			cin.get();
			
			PlayerPtrVector.push_back(createCharacter(characterName, playerClass, raceNum));
			

			printMainMenu();	
			cin >> playerClass;	
			cin.get();
		}

		if (playerClass > 4 && playerClass < 0)
		{
			cout << "invalid entry";
		}
	

		for (Player* player : PlayerPtrVector) {

			cout << "I'm a " << player->whatRace() << " and " << player->attack()<<endl;
		}

		doCleanup(PlayerPtrVector);

		cout << "Program done!" << endl;

	return 0;
}





void printMainMenu()
{

	cout << "Choose an action: " << endl
	     << "\t 1 - create a Warrior " << endl
		 << "\t 2 - create a Priest" << endl
		 << "\t 3 - create a Mage" << endl
		 << "\t 4 - finish creating characters" << endl;
	
}

void printRaceMenu()
{
	cout << "What is your race ? " << endl
		<< "\t 1 - Human " << endl
		<< "\t 2 - Elf" << endl
		<< "\t 3 - Dwarf" << endl
		<< "\t 4 - Orc" << endl
		<< "\t 5 - Troll" << endl;
}


Player* createCharacter(string characterName, int typeNum, int raceNum)
{
	Race playerRace = getRace(raceNum);

	Player* tempPlayer = nullptr;

	if (typeNum == 1)
	{
		tempPlayer = new Warrior(characterName, playerRace);
	}

	else if (typeNum == 2)
	{
		tempPlayer = new Priest(characterName, playerRace);
	}

	else if (typeNum == 3)
	{
		tempPlayer = new Mage(characterName, playerRace);
	}

	return tempPlayer;
}

Race getRace(int raceNum)
{
	Race race; 

	if (raceNum == 1)
	{
		race = HUMAN;
	}

	else if (raceNum == 2)
	{
		race = ELF;
	}

	else if (raceNum == 3)
	{
		race = DWARF;
	}

	else if (raceNum == 4)
	{
		race = ORC;
	}

	else if (raceNum == 5)
	{
		race = TROLL;
	}

	return race;
}


void doCleanup(vector<Player*> PlayerPtrVector)
{
	for (Player* player : PlayerPtrVector)
	{
		delete player;
	}
	PlayerPtrVector.clear(); //reduce size of vector back to zero
}
