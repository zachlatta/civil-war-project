#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

class Character
{
	private:
		// Character's name
        std::string characterName;

		// Character's side
        std::string characterSide;
		
	public:
		// Sets the name of the character from the user's input
        void setName(std::string);

		// Returns character's name
        std::string getName();

		// Set's player's side to Confederate
		void setConfederate();

		// Set's player's side to Union
		void setUnion();

		// Saves character's information to the character.dat file
		void saveToFile();
};
#endif