#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>


class Character
{
private:
	std::string name;

public:
	void setName(std::string arguName);
	std::string getName();
};
#endif