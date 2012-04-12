#include "Character.h"
#include <iostream>
#include <fstream>

using namespace std;

ofstream characterSave;

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

// Set's the character's side to Confederate
void Character::setConfederate()
{
	// Set's characterSide to "Confederate"
	characterSide = "Confederate";
}

// Set's the character's side to Union
void Character::setUnion()
{
	// Set's characterSide to "Union"
	characterSide = "Union";
}

// Save the user's data to save.dat
void Character::saveToFile()
{
	// Creates new save file
	characterSave.open("character.dat");

	// Writes character's name to first line of save file
	characterSave << characterName << endl;

	// Write character's side to the second line of save file
	characterSave << charaterSide << endl;

	// Closes save file
	characterSave.close();

}