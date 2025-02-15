#include <iostream>
#include <string>
#include "Player.h"

using namespace std;



Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

string Player::getName() const
{
	return name;
}

Race Player::getRace() const
{
	return race;
}
string Player::whatRace() const
{
	string result = "";
	if (race == HUMAN)
	{
		result = "Human";
	}
	else if (race == ELF)
	{
		result = "Elf";
	}
	else if (race == DWARF)
	{
		result = "Dwarf";
	}
	else if (race == ORC)
	{
		result = "Orc";
	}
	else if (race == TROLL)
	{
		result = "Troll";
	}

	return result;
}

int Player::getHitPoints() const
{
	return hitPoints;
}

int Player::getMagicPoints() const
{
	return magicPoints;
}

void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(Race race)
{
	this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}



//Warrior::Warrior(string name, Race race, int hitPoints, int magicPoints) : Player (name,race,hitPoints,magicPoints)
//{
//	
//	this->hitPoints = hitPoints;
//	this->magicPoints = 0;
//
//}
//
//string Warrior::attack() const 
//{
//	return "I will destroy you with my sword, foul demon!";
//}
//
//
//
//Priest::Priest(string name, Race race, int hitPoints, int magicPoints) : Player(name,race,hitPoints,magicPoints)
//{
//	this->hitPoints = 100;
//	this->magicPoints = 200;
//}
//
//string Priest::attack() const
//{
//	return "I will assault you with Holy Wrath!";
//}
//
//
//
//
//
//Mage::Mage(string name, Race race, int hitPoints, int magicPoints) : Player(name,race,hitPoints,magicPoints)
//{
//	this->hitPoints = 150;
//	this->magicPoints = 150;
//}
//
//string Mage::attack() const
//{
//	return "I will crush you with the power of my arcane missiles!";
//}