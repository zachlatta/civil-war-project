#include <iostream>
#include <string>
#include <fstream>
#include "Character.h"
#include "confederate.cpp"
#include "union.cpp"

using namespace std;

// Function declarations
void pressEnterToContinue();
void mainMenu();
void beginNewGame();
void loadGame();
void credits();
void exit();
void determineSide();

// Main loop
int main(int argc, char const *argv[])
{
	// Call mainMenu function
	mainMenu();
	return 0;
}

// mainMenu function - main menu of the program
void mainMenu()
{
	// Looping bool
	bool menuLoop = 0;
	// Input variable
	short input;

	while (menuLoop == 0)
	{
		// Main menu title
		cout << "---------------------------------------" << endl;
		cout << "---------------MAIN MENU---------------" << endl;
		cout << "---------------------------------------" << endl;

		// Add space for main menu content
		cout << endl << endl;

		// Main menu content
		cout << "[1] BEGIN NEW GAME" << endl;
		cout << "[2] LOAD GAME" << endl;
		cout << "[3] CREDITS" << endl;
		cout << "[4] EXIT" << endl;

		// Ask user for input
		cout << "Your Selection: " << endl;
		cin >> input;

		switch(input)
		{
			// If user entered 1...
			case 1:
			{
				// Call beginNewGame function
				beginNewGame();
				break;
			}

			// If user entered 2...
			case 2:
			{
				// Call loadGame function
				loadGame();
				break;
			}

			// If user entered 3...
			case 3:
			{
				// Call credits funciton
				credits();
				break;
			}

			// If user entered 4...
			case 4:
			{
				// Call exit funciton
				exit();
				break;
			}

			// If user did not enter 1, 2, 3, or 4.
			default:
			{
				// Clears console, yes windows only :(
				system("cls");

				// Tell user input was invalid
				cout << "Please enter a number between 1 and 4." << endl;

				// Press enter to continue...
				pressEnterToContinue();

				// Clear console again
				system("cls");
				break;
			}

		}

	}


}

// Function to display the credits
void credits()
{
	cout << "Programmed entirely by Zachary Latta" << endl << endl;
	cout << "Bilbiography:" << endl;
	// Bibliography here

	system("pause");
}

// Exit function
void exit()
{
	exit();
}

// "Press enter to continue..." function
void pressEnterToContinue()
{
	cin.sync();
	cout << endl << "\nPress enter to continue..." << endl;
	cin.get();
}

// Create new game function
void beginNewGame()
{
	// Declare strings name, 
	string name;

	// Create an instance of character class
	Character character;

	// Ask user for their name
	cout << "Please enter your name: ";

	cin.sync();

	// Store the user's input into name using getline
	getline(cin, name);

	// Stores player's inputted name into the instance we created of character
	character.setName(name);

	// Call playerAwakens function
	playerAwakens();
}

void loadGame()
{
	// Variable declarations
	int input, loop=1;
	string name;

	// Creates a new instance of the Character class titled "character"
	Character character;

	// Creates a new file stream "characterSave"
	fstream characterSave("character.dat");

	// If character.dat is not empty...
	if(characterSave)
	{
		while(loop!=0)
		{
			// Menu displayed when character.dat exists.
			cout << "Save file detected!\n" << endl;
			cout << "Would you like to load it?" << endl;
			cout << "[1] Yes" << endl;
			cout << "[2] No\n" << endl;
			cout << "Your input: " << endl;
			cin >> input;

			// Switch with input
			switch(input)
			{
				// If the user inputted 1...
				case 1:
				{
					// Stores the value of the first line of character.dat (character information save file) in string name
					getline(characterSave, name);

					// Sets name method variable of Character instance "character"
					character.setName(name);

					// Closes characterSave file stream
					characterSave.close();

					// Code to resume where the user left off should be below this


					// Stops the loop that was initiated if character.dat existed
					loop = 0;

					break;
				}

				// If the user inputted 2...
				case 2:
				{
					// Tells the user that they have chosen to not load a save file
					cout << "You have chosen to not load the save file." << endl;

					// Press enter to continue...
					pressEnterToContinue();

					// Goes to main menu
					mainMenu();

					// Stops the loop that was initiated if character.dat existed
					loop = 0;

					break;
				}

				// If the user did not input 1 or 2...
				default:
				{
					// Tells the user that they entered an invalid value
					cout << "You have inputted an invalid value. Please enter either 1 or 2.";

					// Press enter to continue...
					pressEnterToContinue();

					break;
				}
			}
		}

	}

	// If character.dat is empty...
	else
	{
		// Tells the user that no save file has been detected
		cout << "No save file has been detected." << endl;
		
		// Press enter to continue...
		pressEnterToContinue();

		// Goes to main menu
		mainMenu();
	}

}

void determineSide()
{
	// Initiallizes userSelection variable of type integer.
	int userSelection;

	// Repeat the beloww
	while(1)
	{
		// You awake in the middle of the night to...
		cout << "You awake in the middle of the night to find yourself inside of some sort of a prison camp. One of your innmates casually points to a small tunnel created in one of the walls and whispers \"We're escaping tonight.\"\n" << endl;

		// Give user optinos on what to do
		cout << "[1] \"Wha? Who am I? Where am I?\"" << endl;
		cout << "[2] \"Let's go.\"" << endl;
		
		// Stores user's input in userSelection
		cout << " Your selection: ";
		cin >> userSelection;

		// Determine what to do with the user's input
		switch(userSelection)
		{
			// If user entered 1...
			case 1:
			{
				// Repeat the following
				while(1)
				{
					// We'll get to that later. Here's your...
					cout << "\"We'll get to that later. Here's your uniform. Let's get going.\"\nPlease enter the color of the uniform.\n" << endl;

					// Print user's options
					cout << "[1] Blue" << endl;
					cout << "[2] Butternut" << endl;

					// Take in user's input
					cout << "Your selection: "
					cin >> userSelection;

					// Determines what to do with the user's selection
					switch(userSelection)
					{
						// If the user entered 1...
						case 1:
						{
							// Set Character member variable characterSide to "Union"
							character.setUnion();

							// Use the Union storyline

							break;
						}

						// If the user entered 2...
						case 2:
						{
							// Set Character member variable characterSide to "Confederate"
							character.setConfederate();

							// Use the Confederate storyline

							break;
						}

						// If the user did not enter 1 or 2...
						default:
						{
							// Tells the user to enter either 1 or 2
							cout << "Please enter either 1 or 2." << endl;

							// Press enter to continue...
							pressEnterToContinue();

							break;
						}
					}
				}
			}

			// If user entered 2...
			case 2:
			{
				// Repeat the following
				while(1)
				{
					// Before we go, you should...
					cout << "\"Before we go, you should take your uniform. We were able to smuggle it in.\"\nPlease enter the color of the uniform.\n" << endl;

					// Give user optinos
					cout << "[1] Blue" << endl;
					cout << "[2] Butternut" << endl;

					// Take in user's input
					cout << "Your selection: ";
					cin >> userSelection;

					// Determine what to do with user's selection
					switch(userSelection)
					{
						// If user entered 1...
						case 1:
						{
							// Set Character member variable characterSide to "Union"
							character.setUnion();

							// Use the Union storyline

							break;
						}

						// If user entered 2...
						case 2:
						{
							// Set Character member variable characterSide to "Confederate"
							character.setConfederate();
							
							// Use the Confederate storyline

							break;
						}

						// If user did not enter 1 or 2... 
						default:
						{
							// Tells the user to enter either 1 or 2
							cout << "Please enter either 1 or 2." << endl;

							// Press enter to continue...
							pressEnterToContinue();

							break;
						}
					}
				}

			}

			// If user did not enter 1 or 2...
			default:
			{
				// Tells the user to enter either 1 or 2
							cout << "Please enter either 1 or 2." << endl;

							// Press enter to continue...
							pressEnterToContinue();

							break;
			}
		}
	}
}