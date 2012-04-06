#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character
{
	private:
		// Character's name
		string characterName;
	public:
		// Sets the name of the character from the user's input
		void setName(string);
		// Returns character's name
		string getName();
		// Saves character's information to the character.dat file
		void saveToFile();
};
#endif