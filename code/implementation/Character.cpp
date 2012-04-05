#include "Character.h"
#include <iostream>
#include <fstream>

using namespace std;

fstream characterSave;

// Sets the character's name to what the user inputted
void Character::setName(string name)
{
	// Set characterName to equal what user inputted
	characterName = name;
}

// Output the character's name when called
string Character::getName()
{
	// Return characterName
	return characterName;
}

// Save the user's data to save.dat
void Character::saveToFile()
{
	// Creates new save file
	characterSave.open("character.dat");

	// Writes character's name to first line of save file
	characterSave << characterName << endl;

	// Closes save file
	characterSave.close();
}