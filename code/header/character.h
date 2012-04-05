#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character
{
	private:
		string characterName;
	public:
		void setName(string);
		string getName();
		void saveToFile();
};
#endif