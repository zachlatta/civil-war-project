#include <iostream>
#include <fstream>

void pressEnterToContinue();
void invalidInput();
void bibliography();
void storyLine();

int main()
{
	int userInput;

	/*************************
	 *        MAIN MENU      *
	 *************************/

	while(true)
	{
		std::cout << "==================================================" << std::endl;
		std::cout << "=                  MAIN  MENU                    =" << std::endl;
		std::cout << "==================================================" << std::endl;
		std::cout << std::endl;
		std::cout << "[1] Begin game" << std::endl;
		std::cout << "[2] Bibliography" << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userInput;

		switch(userInput)
		{
		case 1:
			{
				storyLine();
				break;
			}

		case 2:
			{
				bibliography();
				break;
			}

		default:
			{
				invalidInput();
				break;
			}
		}
	}
	return 0;
}

// Prompts the user to press enter to continue
void pressEnterToContinue()
{
	std::cin.sync();
	std::cout << "Press enter to continue...";
	std::cin.get();
}

// Tell user that input was invalid, ouput two newlines, and prompt the user to press enter to continue
void invalidInput()
{
	std::cout << "Your selection was invalid. Please enter a valid value." << std::endl << std::endl;
	pressEnterToContinue()
}

// Tell the user the programmer and references, then prompt user to press enter to continue
void bibliography()
{
	std::cout << "Programmed and written by Zachary Latta" << std::endl;
	std::cout << std::endl;
	std::cout << "References:" << std::endl;

	pressEnterToContinue();
}

void storyLine()
{

}