#include <iostream>
using namespace std;

// Function declarations
void pressEnterToContinue();
void mainMenu();
void beginNewGame();
void loadGame();
void credits();
void exit();

// Main loop
int main(int argc, char const *argv[])
{
	// Call mainMenu functino
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

// "Press enter to continue..." function
void pressEnterToContinue()
{
	cin.ignore();
	cout << "Press enter to continue...";
}
