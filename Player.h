#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

enum Race { HUMAN, ELF, DWARF, ORC, TROLL };

class Player
{

	public: 

		Player(string name, Race race, int hitPoints, int magicPoints);
		string getName() const;
		Race getRace() const;
		string whatRace() const;
		int getHitPoints() const;
		int getMagicPoints() const;
		void setName(string name);
		void setRace(Race race);
		void setHitPoints(int hitPoints);
		void setMagicPoints(int magicPoints);
		virtual string attack() const = 0;

	private:

		string name;
		Race race;	
		int hitPoints;
		int magicPoints;

};


///////////////////////////////////////////////////////////////////////////////////////////////////////////
//class Warrior : public Player
//{
//	public:
//
//		Warrior(string name, Race race, int hitpoints, int magicpoints);
//		string attack() const;
//
//	private: 
//
//		int hitpoints;
//		int magicpoints;
//};
//
//class Priest : public Player
//{
//	public:
//
//		Priest(string name, Race race, int hitpoints, int magicpoints);
//		string attack() const;
//
//	private: 
//
//		int hitpoints;
//		int magicpoints;
//};
//
//
//class Mage : public Player
//{
//	public:
//
//		Mage(string name, Race race, int hitpoints, int magicpoints);
//		string attack() const;
//
//	private:
//
//		int hitpoints;
//		int magicpoints;
//
//};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//class Warrior : public Player
//{
//	public:
//
//		Warrior(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, 200, 0) {		}
//
//		string attack() const
//		{
//			return "I will destroy you with my sword, foul demon!";
//		}
//};

//class Priest : public Player
//{
//	public:
//	
//		Priest(string name, Race race, int hitpoints, int magicpoints) : Player (name, race, 100, 200) {		}
//		
//		string attack() const
//		{
//			return "I will assault you with Holy Wrath!";
//		}
//	
//};


	//class Mage : public Player					
	//{
	//	public:
	//	
	//		Mage(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, 150, 150) {		}
	//
	//		string attack() const
	//		{
	//			return "I will crush you with the power of my arcane missiles!";
	//		}
	//	
	//};

#endif // !PLAYER_H
