#include <iostream>
#include <string>
#include <fstream>
#include "Character.h"

// Function prototypes
void pressEnterToContinue();
void mainMenu();
void beginNewGame();
void loadGame();
void credits();
void exit();
void determineSide(Character character);

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
		std::cout << "---------------------------------------" << std::endl;
		std::cout << "---------------MAIN MENU---------------" << std::endl;
		std::cout << "---------------------------------------" << std::endl;
        
		// Add space for main menu content
		std::cout << std::endl << std::endl;
        
		// Main menu content
		std::cout << "[1] BEGIN NEW GAME" << std::endl;
		std::cout << "[2] LOAD GAME" << std::endl;
		std::cout << "[3] CREDITS" << std::endl;
		std::cout << "[4] EXIT" << std::endl;
        
		// Ask user for input
		std::cout << "Your Selection: " << std::endl;
		std::cin >> input;
        
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
				std::cout << "Please enter a number between 1 and 4." << std::endl;
                
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
	std::cout << "Programmed entirely by Zachary Latta" << std::endl << std::endl;
	std::cout << "Bilbiography:" << std::endl;
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
	std::cin.sync();
	std::cout << std::endl << "\nPress enter to continue..." << std::endl;
	std::cin.get();
}

// Create new game function
void beginNewGame()
{
	// Declare std::strings name, 
	std::string name;
    
	// Create an instance of character class
	Character character;
    
	// Ask user for their name
	std::cout << "Please enter your name: ";
    
	std::cin.sync();
    
	// Store the user's input into name using getline
	getline(std::cin, name);
    
	// Stores player's inputted name into the instance we created of character
	character.setName(name);
    
	// Call playerAwakens function
	determineSide(character);
}

void loadGame()
{
	// Variable declarations
	int input, loop=1;
	std::string name;
    
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
			std::cout << "Save file detected!\n" << std::endl;
			std::cout << "Would you like to load it?" << std::endl;
			std::cout << "[1] Yes" << std::endl;
			std::cout << "[2] No\n" << std::endl;
			std::cout << "Your input: " << std::endl;
			std::cin >> input;
            
			// Switch with input
			switch(input)
			{
                    // If the user inputted 1...
				case 1:
				{
					// Stores the value of the first line of character.dat (character information save file) in std::string name
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
					std::cout << "You have chosen to not load the save file." << std::endl;
                    
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
					std::cout << "You have inputted an invalid value. Please enter either 1 or 2.";
                    
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
		std::cout << "No save file has been detected." << std::endl;
		
		// Press enter to continue...
		pressEnterToContinue();
        
		// Goes to main menu
		mainMenu();
	}
    
}

void determineSide(Character character)
{
	// Initiallizes userSelection variable of type integer.
	int userSelection;
    
	// Repeat the beloww
	while(1)
	{
		// You awake in the middle of the night to...
		std::cout << "You awake in the middle of the night to find yourself inside of some sort of a prison camp. One of your innmates casually points to a small tunnel created in one of the walls and whispers \"We're escaping tonight.\"\n" << std::endl;
        
		// Give user optinos on what to do
		std::cout << "[1] \"Wha? Who am I? Where am I?\"" << std::endl;
		std::cout << "[2] \"Let's go.\"" << std::endl;
		
		// Stores user's input in userSelection
		std::cout << " Your selection: ";
		std::cin >> userSelection;
        
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
					std::cout << "\"We'll get to that later. Here's your uniform. Let's get going.\"\nPlease enter the color of the uniform.\n" << std::endl;
                    
					// Print user's options
					std::cout << "[1] Blue" << std::endl;
					std::cout << "[2] Butternut" << std::endl;
                    
					// Take in user's input
					std::cout << "Your selection: ";
					std::cin >> userSelection;
                    
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
							std::cout << "Please enter either 1 or 2." << std::endl;
                            
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
					std::cout << "\"Before we go, you should take your uniform. We were able to smuggle it in.\"\nPlease enter the color of the uniform.\n" << std::endl;
                    
					// Give user optinos
					std::cout << "[1] Blue" << std::endl;
					std::cout << "[2] Butternut" << std::endl;
                    
					// Take in user's input
					std::cout << "Your selection: ";
					std::cin >> userSelection;
                    
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
							std::cout << "Please enter either 1 or 2." << std::endl;
                            
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
                std::cout << "Please enter either 1 or 2." << std::endl;
                
                // Press enter to continue...
                pressEnterToContinue();
                
                break;
			}
		}
	}
}