#include <iostream>
#include <fstream>
#include "Character.h"

void pressEnterToContinue();
void invalidInput();
void bibliography();
void storyLine();

int main()
{
	int userSelection;

	/*************************
	 *        MAIN MENU      *
	 *************************/

	while(true)
	{
		std::cout << "     =====================================================================    " << std::endl;
		std::cout << "     =                            MAIN  MENU                             =    " << std::endl;
		std::cout << "     =====================================================================    " << std::endl;
		std::cout << std::endl;
		std::cout << "[1] Begin game" << std::endl;
		std::cout << "[2] Bibliography" << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userSelection;

		switch(userSelection)
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
	pressEnterToContinue();
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
	int userSelection;
	std::string stringUserInput;
	Character character;

	// Introduction, basically a prolouge
	std::cout << std::endl << std::endl;
	std::cout << "     =====================================================================    " << std::endl;
	std::cout << "     =                           INTRODUCTION                            =    " << std::endl;
	std::cout << "     =====================================================================    " << std::endl;
	std::cout << std::endl;
	std::cout << "A few months back you were taken in by the Confederacy as a prisoner of war   " << std::endl;
	std::cout << "at Libby Prison. While in prison you were able to trade items you found with  " << std::endl;
	std::cout << "others until you were eventually able to trade your coat and thirty dollars   " << std::endl;
	std::cout << "for a rebel uniform. You were then able to trade pantalooms with the same     " << std::endl;
	std::cout << "officer for ten dollars. After a few attempts, you were able to escape the    " << std::endl;
	std::cout << "prison in disguise.                                                           " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();
	
	// User awakes to find themselves aching with pain, they want to get back to the Union army.
	std::cout << std::endl << std::endl;
	std::cout << "     =====================================================================    " << std::endl;
	std::cout << "     =                            MAIN STORY                             =    " << std::endl;
	std::cout << "     =====================================================================    " << std::endl;
	std::cout << std::endl;
	std::cout << "All you remember from last night\'s activities is trying to get as far away   " << std::endl;
	std::cout << "from the wretched prison as possible until you collapsed of exhaustion. You   " << std::endl;
	std::cout << "awake to find yourself with a stinging pain in your hands and feet. Your feet " << std::endl;
	std::cout << "are like lumps of ice, your face is smarting with pain, and your hands are    " << std::endl;
	std::cout << "red and without feeling; you were lucky to escape freezing to death. Once     " << std::endl;
	std::cout << "your body begins to warm you decide you might as well get moving. You hope to " << std::endl;
	std::cout << "rejoin the war effort as soon as possible to help restore the Union to its    " << std::endl;
	std::cout << "full glory.                                                                   " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// User meets a negro (Jack).
	std::cout << std::endl << std::endl;
	std::cout << "You decide that your best course of action is to head in a northward          " << std::endl;
	std::cout << "direction. For the first few minutes, each step comes with another jolt of    " << std::endl;
	std::cout << "pain. Fortunately, your body becomes accustomed to the conditions and the     " << std::endl;
	std::cout << "majority of the pain subsides. After a while, a negro suddenly confronts you. " << std::endl;
	std::cout << "At first you are worried he may be aggressive because you are in the south,   " << std::endl;
	std::cout << "but he is not in the slightest.                                               " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// Negro (Jack) explains he doesn't want to cause the user harm. User says he wants help.
	std::cout << std::endl << std::endl;
	std::cout << "The negro says \"I knows yer, Sar; you\'se a Yankee pris\'ner \'scaped from   " << std::endl;
	std::cout << "Richmon\'. But, Lor\' bless yer, massa, I won\'t tell on yer; I\'se real glad " << std::endl;
	std::cout << "yer\'s got away.\" You immediately know that this is a man to trust. Since    " << std::endl;
	std::cout << "you have never seen a negro that could not be trusted by a Union soldier, you " << std::endl;
	std::cout << "tell him all that you remember regarding the escape. You tell him that you    " << std::endl;
	std::cout << "think you may be lost and that you haven\'t eaten a morsel of food in over 24 " << std::endl;
	std::cout << "hours. You plead to him for help and explain that if he were to help you,     " << std::endl;
	std::cout << "you'd be in debt to him more than you could describe.                         " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();
	
	// Negro (Jack) says he wants to help user. He knows where user can find food. User has option to ask for his name
	while(true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "The negro says \"Of course I'd like to help yer. I knows a place where we     " << std::endl;
		std::cout << "could find you some food.\"                                                " << std::endl;
		std::cout << std::endl;
		std::cout << "What do you say:                                                              " << std::endl;
		std::cout << "[1] \"Alright, let\'s go.\"                                                   " << std::endl;
		std::cout << "[2] \"Could I get a name?\"                                                   " << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userSelection;

		switch (userSelection)
		{
		case 1:
			{
				break;
			}

		case 2:
			{
				std::cout << std::endl << std::endl;
				std::cout << "The negro says \"M\' name\'s Jack. Let's get going\"" << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();
			
				break;
			}

		default:
			{
				std::cout << std::endl << std::endl;
				invalidInput();
			
				break;
			}
		}

		if (userSelection == 1 || userSelection == 2)
			break;
	}
	
	// Jack leads user across a field to Prince and asks if Prince can provide food to user
	std::cout << std::endl << std::endl;
	std::cout << "The negro starts off at a rapid pace leading you across the fields for a      " << std::endl;
	std::cout << "distance of about four miles to the house of another negro. The negro knocks  " << std::endl;
	std::cout << "on the house\'s door and is greeted by another male negro who exclaimes       " << std::endl;
	std::cout << "\"Jack! Where\'s you been?\" Jack says \"\'ello Prince, I\'ve found this here  " << std::endl;
	std::cout << "yankee pris\'ner \'scapee. He\'s mighty weak an\' \'ungry. Could you an\' the " << std::endl;
	std::cout << "missus provide this \'ere fellow with some food?\"                            " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// Prince says he wants to help user. Prince's wife serves user food. Prince asks for user's name.
	std::cout << std::endl << std::endl;
	std::cout << "Prince says \"'f course I\'d like to help the poor fellow. Come on in, we\'ll " << std::endl;
	std::cout << "get \'em some food.\" A woman who appears to be Prince's wife escorts you to  " << std::endl;
	std::cout << "a ramshackle table where she serves you half a loaf of bread with some dried  " << std::endl;
	std::cout << "pork. You quickly eat the food in silence. After you are finished eating,     " << std::endl;
	std::cout << "Prince asks \"So yankee, what\'s you\'se name?\"                              " << std::endl;
	std::cout << std::endl;
	std::cout << "Your name: ";
	getline (std::cin, stringUserInput);

	character.setName(stringUserInput);

	std::cout << std::endl;

	// User can ask Prince how he got his name, why he's being so kind toward the user, or can say that they should go
	while(true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "Prince takes a seat and appears to be waiting for you to say something." << std::endl;
		std::cout << std::endl;
		std::cout << "[1] \"How did you end up with your name?\"" << std::endl;
		std::cout << "[2] \"Why are you being so kind to me?\"" << std::endl;
		std::cout << "[3] \"I should probably get going. Thank you for your hospitality.\"" << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userSelection;

		switch (userSelection)
		{
		case 1:
			{
				std::cout << std::endl << std::endl;
				std::cout << "Prince says \"Me mother always used to say I\'d grow up to be a prince. I       " << std::endl;
				std::cout << "guess I just started calling myself that after a while, in memory of her of     " << std::endl;
				std::cout << "course. She passed away when I was a young\'un, probably around the age of      " << std::endl;
				std::cout << "5.\"                                                                            " << std::endl;
				std::cout << std::endl;
			
				pressEnterToContinue();

				break;
			}

		case 2:
			{
				std::cout << std::endl << std::endl;
				std::cout << "Prince says \"You\'se doing the right thin\' fightin\' for us negros. I\'ll     " << std::endl;
				std::cout << "support that by any means I can.\"                                              " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				break;
			}

		case 3:
			{
				break;
			}
		default:
			{
				std::cout << std::endl << std::endl;
				invalidInput();

				break;
			}
		}

		if(userSelection == 3)
			break;
	}

	// User leaves Prince's house. Jack tells you to go to Ashland
	std::cout << std::endl << std::endl;
	std::cout << "Prince says \"You\'se always welcome back. It was a pleasure having yer.\" You " << std::endl;
	std::cout << "once again thank him for his hospitality and proceed to leave the house with   " << std::endl;
	std::cout << "Jack. Jack explains that he thinks that your best course of action would be to " << std::endl;
	std::cout << "head up to Ashland. He tells you that if you head north until sundown, sleep,  " << std::endl;
	std::cout << "and then continue heading north until noon you should see Ashland to your      " << std::endl;
	std::cout << "left. You decide to trust him with this information and start your journey     " << std::endl;
	std::cout << "north.                                                                         " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// User enters forest, gets lost.
	while(true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "While gazing forward, you see the beginnings of a forest, about a mile away.    " << std::endl;
		std::cout << "In about 20 minutes you finally reach the entrance to it and decide that you    " << std::endl;
		std::cout << "might as well traverse through it and hope for the best. After stumbling        " << std::endl;
		std::cout << "around in the forest for what seems to be hours, you come to the conclusion     " << std::endl;
		std::cout << "that you are lost. You also feel quite parched. What do you do?                 " << std::endl;
		std::cout << std::endl;
		std::cout << "[1] Rest until morning." << std::endl;
		std::cout << "[2] Continue exploring." << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userSelection;

		switch (userSelection)
		{
		case 1:
			{
				std::cout << std::endl << std::endl;
				std::cout << "You find a nook at the base of the tree that looks like a comfortable and safe  " << std::endl;
				std::cout << "place to spend the night. You do your best to curl up in it and fall asleep to  " << std::endl;
				std::cout << "the peaceful sounds of nature around you, hoping for the best.                  " << std::endl;
				std::cout << std::endl;
			
				pressEnterToContinue();

				break;
			}

		case 2:
			{
				std::cout << std::endl << std::endl;
				std::cout << "You stumble around until you decide that you are probably walking in circles.   " << std::endl;
				std::cout << "You start to feel drowsy from the day's activities and eventually collapse from " << std::endl;
				std::cout << "exaustion.                                                                      " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				break;
			}

		default:
			{
				std::cout << std::endl << std::endl;
				invalidInput();

				break;
			}
		}

		if (userSelection == 1 || userSelection == 2)
			break;
	}

	// User awakes and starts on their journey. They realize they area feeling very parched.
	std::cout << std::endl << std::endl;
	std::cout << "You awake with a sore neck. It quickly becomes apparent that your body did not " << std::endl;
	std::cout << "appreciate sleeping on an uneven surface. You grunt as you use a nearby branch " << std::endl;
	std::cout << "to haul yourself up until you are standing. Your instinct tells you which      " << std::endl;
	std::cout << "direction north is and you decide to get going. While on your journey you      " << std::endl;
	std::cout << "notice that you are starting to feel really parched.                           " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	while (true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "Your hear what sounds like the gently sound of a flowing stream. You            " << std::endl;
		std::cout << "contemplate whether you should pursue it or not. You fear it may just be a      " << std::endl;
		std::cout << "figment of your imagination. What do you do?                                    " << std::endl;
		std::cout << std::endl;
		std::cout << "[1] Try to locate the stream." << std::endl;
		std::cout << "[2] Continue onward." << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userSelection;

		switch (userSelection)
		{
		case 1:
			{
				std::cout << std::endl << std::endl;
				std::cout << "You navigate your way towards the origin of the sound of the streaming water.   " << std::endl;
				std::cout << "But as you move closer to the sound, the sound does not get any louder.         " << std::endl;
				std::cout << "Suddently the sound stops and leaves dead silence in its wake. You wonder if    " << std::endl;
				std::cout << "were actually following a sound in the first place.                             " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				break;
			}

		case 2:
			{
				break;
			}

		default:
			{
				std::cout << std::endl << std::endl;
				invalidInput();
				std::cout << std::endl;
				break;
			}
		}

		if (userSelection == 1 || userSelection == 2)
		{
			break;
		}
	}
}