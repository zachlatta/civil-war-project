#include <iostream>

// Brief recap of last night's activities. Tells user that they hope to rejoin war effort
void scene1();
// Tells user where they are heading to. Negro approaches user
void scene2();
// Explains that user was lost, had no food, and needs help
void scene3();
// Negro tells user that he knows a place where they could find refuge
void scene4();
// Negro tells user that his name is Jack and that they should get going
void scene5();
// Negro tells user that his name is Jack for future reference. They start heading up to 
void scene6();

// Brief recap of last night's activities. Tells user that they hope to rejoin war effort
void scene1()
{
    std::cout << "All you remember from last night's activities is trying to get as far away from the wretched prison as possible until you collapsed of exhaustion. You awake to find yourself with a stinging pain in your hands and feet. Your feet are like lumps of ice, your face is smarting with pain, and your hands are red and without feeling; you were lucky to escape freezing to death. Once your body begins to warm you decide you might as well get moving. You hope to rejoin the war effort as soon as possible to help restore the Union to its full glory." << std::endl;

	// Press enter to continue...
	pressEnterToContinue();

	scene2();
}

// Tells user where they are heading to. Negro approaches user
void scene2()
{
    std::cout << "You decide that your best course of action is to head in a northward direction. For the first few minutes, each step comes with another jolt of pain. Fortunately, your body becomes accustomed to the conditions and the majority of the pain subsides. After a while, a negro suddenly confronts you. At first you are worried he may be aggressive because you are in the south, but he is not in the slightest." << std::endl;

	// Press enter to continue...
	pressEnterToContinue();

	scene3();
}

// Explains that user was lost, had no food, and needs help
void scene3()
{
    std::cout << "The negro says \"I knows yer, Sar; you\'se a Yankee pris\'ner \'scaped from Richmon\'. But, Lor\' bless yer, massa, I won\'t tell on yer; I\'se real glad yer\'s got away.\" You immediately know that this is a man who trust. Since you have never seen a negro that could not be trusted by a Union soldier, you tell him all that you remember regarding the escape. You tell him that you think you may be lost and that you haven't eaten a morsel of food in over 24 hours. You plead to him for help and explain that if he were to help you, you'd be in debt to him more than you could describe." << std::endl;

	// Press enter to continue...
    pressEnterToContinue();

	scene4();
}

// Negro tells user that he knows a place where they could find refuge
void scene4()
{
	int choice;

	// While "true" is not null
	while(true)
	{
        std::cout << "The negro says \"Of course I'd like to help yer. I knows a place up in [TOWN NORTH OF RICHMOND] that we could find you some food an\' shelt\'r at.\n" << std::endl;

        std::cout << "What do you say:" << std::endl;
        std::cout << "[1] \"Alright, let\'s go.\"" << std::endl;
        std::cout << "[2] \"Could I get a name?\"" << std::endl;
        std::cout << "Your input: ";
        std::cin >> choice;

		// Switch statement with choive variable
		switch (choice)
		{
			// If the user entered 1...
			case 1:
			{
				scene5();
			}

			// If the user entered 2...
			case 2:
			{
				scene6();
			}

			// If the user did not enter 1 or 2...
			default:
			{
                std::cout << "Please enter either 1 or 2." << std::endl;

				pressEnterToContinue();

				break;
			}
		}
	}
}

// Negro tells user that his name is Jack
void scene5()
{
    std::cout << "The negro says \"M\' name\'s Jack. Let's get going\"" << std::endl;

	// Press enter to continue...
	pressEnterToContinue();

	scene6();
}