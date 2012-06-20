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

// Tell user that input was invalid, output two newlines, and prompt the user to press enter to continue
void invalidInput()
{
	std::cout << "Your selection was invalid. Please enter a valid value." << std::endl << std::endl;
	pressEnterToContinue();
}

// Tell the user the programmer and references, then prompt user to press enter to continue
void bibliography()
{
	std::cout << std::endl << std::endl;
	std::cout << "Programmed and written by Zachary Latta" << std::endl;
	std::cout << std::endl;
	std::cout << "References:" << std::endl;
	std::cout << "Just go to http://goo.gl/AgXAx." << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();
	std::cout << std::endl;
}

void storyLine()
{
	int userSelection;
	std::string stringUserInput;
	Character character;

	// Introduction, basically a prologue
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
	std::cout << "on the house\'s door and is greeted by another male negro who exclaims        " << std::endl;
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

	std::string characterName = stringUserInput;

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
				std::cout << "Prince says \"Me mother always used to say I\'d grow up to be a prince. I      " << std::endl;
				std::cout << "guess I just started calling myself that after a while, in memory of her of    " << std::endl;
				std::cout << "course. She passed away when I was a young\'un, probably around the age of     " << std::endl;
				std::cout << "5.\"                                                                           " << std::endl;
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

	// User leaves Prince's house. Jack tells you to go to Slash Cottage
	std::cout << std::endl << std::endl;
	std::cout << "Prince says \"You\'se always welcome back. It was a pleasure having yer.\" You " << std::endl;
	std::cout << "once again thank him for his hospitality and proceed to leave the house with   " << std::endl;
	std::cout << "Jack. Jack explains that he thinks that your best course of action would be to " << std::endl;
	std::cout << "head up to Slash Cottage. He tells you that if you head north until sundown,   " << std::endl;
	std::cout << "sleep, and then continue heading north until noon you should see Slash Cottage " << std::endl;
	std::cout << "to your left. You decide to trust him with this information and start your     " << std::endl;
	std::cout << "journey north.                                                                 " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();


	// User enters forest, gets lost.
	while(true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "While gazing forward, you see the beginnings of a forest, about a mile away.   " << std::endl;
		std::cout << "In about 20 minutes you finally reach the entrance to it and decide that you   " << std::endl;
		std::cout << "might as well traverse through it and hope for the best. After stumbling       " << std::endl;
		std::cout << "around in the forest for what seems to be hours, you come to the conclusion    " << std::endl;
		std::cout << "that you are lost. You also feel quite parched. What do you do?                " << std::endl;
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
				std::cout << "You find a nook at the base of the tree that looks like a comfortable and safe " << std::endl;
				std::cout << "place to spend the night. You do your best to curl up in it and fall asleep to " << std::endl;
				std::cout << "the peaceful sounds of nature around you, hoping for the best.                 " << std::endl;
				std::cout << std::endl;
			
				pressEnterToContinue();

				break;
			}

		case 2:
			{
				std::cout << std::endl << std::endl;
				std::cout << "You stumble around until you decide that you are probably walking in circles.   " << std::endl;
				std::cout << "You start to feel drowsy from the day's activities and eventually collapse from " << std::endl;
				std::cout << "exhaustion.                                                                     " << std::endl;
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


	// User hears what they think is stream, is presented options, they eventually end up discovering Slash Cottage.
	while (true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "Your hear what sounds like the gently sound of a flowing stream. You           " << std::endl;
		std::cout << "contemplate whether you should pursue it or not. You fear it may just be a     " << std::endl;
		std::cout << "figment of your imagination. What do you do?                                   " << std::endl;
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
				std::cout << "You navigate your way towards the origin of the sound of the streaming water.  " << std::endl;
				std::cout << "But as you move closer to the sound, the sound does not get any louder.        " << std::endl;
				std::cout << "Suddenly the sound stops and leaves dead silence in its wake. You wonder if    " << std::endl;
				std::cout << "you were actually following a sound in the first place.                        " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				std::cout << std::endl << std::endl;
				std::cout << "You try to make your way back to where you were before trying to locate the    " << std::endl;
				std::cout << "stream, but to no avail. You are completely lost. You cannot remember which    " << std::endl;
				std::cout << "direction was north. You begin to panic. What will you do? You have no water.  " << std::endl;
				std::cout << "You have no idea where you are. You are stuck in a forest. Alone. Without help." << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();


				while (true)
				{
					std::cout << std::endl << std::endl;
					std::cout << "You sit down and decide to think. Jack told you to go north, so you should    " << std::endl;
					std::cout << "first find out where north is. You\'re extremely thirsty. You\'re worried that" << std::endl;
					std::cout << "you may not be able to find water. You don\'t want to die that way. You need  " << std::endl;
					std::cout << "to find water. What do you do?                                                " << std::endl;
					std::cout << std::endl;
					std::cout << "[1] Try to figure out which direction is north." << std::endl;
					std::cout << "[2] Continue the search for water." << std::endl;
					std::cout << "Your selection: " << std::endl;
					std::cin >> userSelection;

					switch (userSelection)
					{
					case 1:
						{
							std::cout << std::endl << std::endl;
							std::cout << "Okay. Jack told you to go north. Slash Cottage is north. Slash Cottage can      " << std::endl;
							std::cout << "provide help. Slash Cottage will provide water. But how do you know which way   " << std::endl;
							std::cout << "north is? Ah! Since the sun rises in the east and sets in the west, you can     " << std::endl;
							std::cout << "just look at where the sun is to figure out where north is. But you can't see   " << std::endl;
							std::cout << "the sun. You're in the forest. Wait, you can climb a tree. Climbing a tree will " << std::endl;
							std::cout << "let you see where the sun is, which will tell you where north is.               " << std::endl;
							std::cout << std::endl;

							pressEnterToContinue();


							std::cout << std::endl << std::endl;
							std::cout << "You climb a nearby tree and nearly fall off. You see the sun setting in front   " << std::endl;
							std::cout << "of you. That means north is right. North is right. You descend from the tree    " << std::endl;
							std::cout << "and start heading to your right. You hope you'll reach Slash Cottage soon.      " << std::endl;
							std::cout << std::endl;

							pressEnterToContinue();


							std::cout << std::endl << std::endl;
							std::cout << "After walking for about an hour you decide that you might as well spend another " << std::endl;
							std::cout << "night in the forest. You'll probably get lost if you continue to walk. In the   " << std::endl;
							std::cout << "morning you continue walking for what seems to be forever. Suddenly, you break  " << std::endl;
							std::cout << "free of the forest and see the small town of Slash Cottage in the distance. You " << std::endl;
							std::cout << "are overjoyed.                                                                  " << std::endl;
							std::cout << std::endl;

							pressEnterToContinue();

							break;
						}

					case 2:
						{
							std::cout << std::endl << std::endl;
							std::cout << "You start to continue your search for water. You see a hare scurry away and  " << std::endl;
							std::cout << "decide that you might as well follow it. To your surprise, it leads you to a " << std::endl;
							std::cout << "small stream. You are delighted and plunge your face into it. You scoop up as" << std::endl;
							std::cout << "much water as you can and do your best to drink it. You feel so much better. " << std::endl;
							std::cout << "Your body is no longer deprived of water and your mouth is once again moist. " << std::endl;
							std::cout << std::endl;

							pressEnterToContinue();


							std::cout << std::endl << std::endl;
							std::cout << "You decide that the stream must come from somewhere, so you decide to follow it" << std::endl;
							std::cout << "upstream. You decide that you might as well spend another night in the forest  " << std::endl;
							std::cout << "after walking for about an hour. In the morning, you begin your journey again. " << std::endl;
							std::cout << "After what seems to be hours, you break free of the forest and see Slash       " << std::endl;
							std::cout << "Cottage in the distance. You are elated with joy. Not only were you able to    " << std::endl;
							std::cout << "locate water, you were also able to find Slash Cottage.                        " << std::endl;
							std::cout << std::endl;

							pressEnterToContinue();

							break;
						}

					default:
						{
							std::cout << std::endl << std::endl;
							invalidInput();
						
							pressEnterToContinue();

							break;
						}
					}

					if (userSelection == 1 || userSelection == 2)
						break;
				}

				break;
			}

		case 2:
			{
				std::cout << std::endl << std::endl;
				std::cout << "You start to continue your search for water. You see a hare scurry away and    " << std::endl;
				std::cout << "You continue onwards. You see a hare scurry away and decide that you might as  " << std::endl;
				std::cout << "well follow it. To your surprise, it leads you to a small stream. You are      " << std::endl;
				std::cout << "delighted and plunge your face into it. You scoop up as much water as you can  " << std::endl;
				std::cout << "and do your best to drink it. You feel so much better. Your body is no longer  " << std::endl;
				std::cout << "deprived of water and your mouth is once again moist.                          " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();


				std::cout << std::endl << std::endl;
				std::cout << "You decide that the stream must come from somewhere and you decide to follow it " << std::endl;
				std::cout << "upstream. You decide that you might as well spend another night in the forest   " << std::endl;
				std::cout << "after walking for about an hour. In the morning, you begin your journey again.  " << std::endl;
				std::cout << "After what seems to be hours, you break free of the forest and see Slash Cottage" << std::endl;
				std::cout << "in the distance. You are elated with joy. Not only were you able to locate      " << std::endl;
				std::cout << "water, you were also able to find Slash Cottage.                                " << std::endl;
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

	std::cout << std::endl << std::endl;
	std::cout << "After walking for about seven miles you finally reach the town of Slash        " << std::endl;
	std::cout << "Cottage. To your surprise, it is hardly a town at all. It appears to consist   " << std::endl;
	std::cout << "of only a few households. You wonder if one of the households would provide    " << std::endl;
	std::cout << "you with some food and drink. Suddenly, a boy who looks about eight years of   " << std::endl;
	std::cout << "age approaches you and says \"\'ello Sar, what\'s you\'se doin\' \round this   " << std::endl;
	std::cout << "place?\"                                                                       " << std::endl;
	std::cout << std::endl;
	std::cout << "[1] \"Just thought I\'d stop by before heading up to fight those damned Yankees.\"" << std::endl;
	std::cout << "[2] \"I\'m actually lost, after I enrolled I came down with some sort of       " << std::endl;
	std::cout << "illness. I'm hoping to get back to Lee\'s army.\"                              " << std::endl;
	std::cout << "Your selection: ";
	std::cin >> userSelection;

	switch (userSelection)
	{
	case 1:
		{
			std::cout << std::endl << std::endl;
			std::cout << "The young boy says \"But why weren'\t ya already with them? I reckon most      " << std::endl;
			std::cout << "soldiers travel together. They are in an army after all.\"                     " << std::endl;
			std::cout << std::endl;
			std::cout << "[1] \"Well, surprisingly enough we don\'t. We soldiers actually are just told  " << std::endl;
			std::cout << "to be places by certain months. We don\'t necessarily travel together.\"       " << std::endl;
			std::cout << "[2] \"Err, well I\'m a special case. It\'s unimportant though.\"               " << std::endl;
			std::cout << "Your selection: ";
			std::cin >> userSelection;

			break;
		}

	case 2:
		{
			std::cout << std::endl << std::endl;
			std::cout << "The young boy says \"But why weren'\t ya already with them? I reckon most      " << std::endl;
			std::cout << "The young boy says \"Are ya\'ll alright now? I hope you can fight them Federals" << std::endl;
			std::cout << "again. I reckon soldiers travel together though. They are in an army after all." << std::endl;
			std::cout << "I bet people miss you.\"                                                       " << std::endl;
			std::cout << std::endl;
			std::cout << "[1] \"Well, surprisingly enough we don\'t. We soldiers actually are just told  " << std::endl;
			std::cout << "to be places by certain months. We don\'t necessarily travel together.\"       " << std::endl;
			std::cout << "[2] \"Err, well I\'m a special case. It\'s unimportant though.\"               " << std::endl;
			std::cout << "Your selection: ";
			std::cin >> userSelection;

			break;
		}

	default:
		{
			std::cout << std::endl << std::endl;
			invalidInput();			
			pressEnterToContinue();
			break;
		}
	}

	// Boy says that he's never heard of the user's situation before. User is taken to boy's cottage. User takes a nap.
	std::cout << std::endl << std::endl;
	std::cout << "The boy says \"Well I\'ve never heard that before. I\'m gonna get my mother.   " << std::endl;
	std::cout << "Wait here.\" The boy scuffles off in a slight jog to his mother. In a few      " << std::endl;
	std::cout << "minutes he reappears with a woman who clearly does not get enough sleep. Her   " << std::endl;
	std::cout << "eyes are sullen and she obviously is overworked. The boy says \"Mom! This      " << std::endl;
	std::cout << "man\'s from the army! Can he have supper with us?\" The boy\'s mother replies  " << std::endl;
	std::cout << "with \"I don't see why not, he can relax with us while I make supper.\" You    " << std::endl;
	std::cout << "are led by the mother and boy to their cottage. The mother says that you are   " << std::endl;
	std::cout << "free to take a nap on one of the cots while she makes supper. You decide to    " << std::endl;
	std::cout << "take the offer and nap on the cot.                                             " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// User wakes up, boy's mother asks user if user is ready to eat. User can ask questions or go and eat.
	while (true)
	{
		// User wakes up, smells dinner, and can ask the boy's mom a variety of questions
		std::cout << std::endl << std::endl;
		std::cout << "When you wake up, you smell the aroma of green peas pudding. The boy's mom     " << std::endl;
		std::cout << "approaches you and asks \"Are you ready to eat?\"                              " << std::endl;
		std::cout << std::endl;
		std::cout << "[1] \"Yes, I think I'm ready to eat.\"                                         " << std::endl;
		std::cout << "[2] \"Why are you being so kind to me?\"                                       " << std::endl;
		std::cout << "[3] \"How did you get here?\"                                                  " << std::endl;
		std::cout << "[4] \"How many people live here?\"                                             " << std::endl;
		std::cout << "Your selection: ";
		std::cin >> userSelection;

		switch (userSelection)																																																			{
		case 1:
			{
				break;
			}

		case 2:
			{
				// Boy's mother says that user is helping save the Confederacy. User decides that the Union isn't invading, just reuniting.
				std::cout << std::endl << std::endl;
				std::cout << "The boy\'s mother says \"Well, you\'re helping save our country from the       " << std::endl;
				std::cout << "invading Federals. I have trouble comprehending how they think they can come   " << std::endl;
				std::cout << "and invade what is rightfully our\'s.\" You start to think. Is the Union truly " << std::endl;
				std::cout << "invading the Confederacy? Is what we're invading rightfully the Confederacy\'s?" << std::endl;
				std::cout << "You decide that no, it isn\t. The Union is taking back what is rightfully ours." << std::endl;
				std::cout << "We are reuniting the country for the better.                                   " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				break;
			}

		case 3:
			{
				// Boy's mother says that she isn't sure how she got to Slash Cottage
				std::cout << std::endl << std::endl;
				std::cout << "The boy\'s mother says \"Truth be told, I'm not completely sure. I remember    " << std::endl;
				std::cout << "growing up in this area. My father traded here. He passed away about 20 years  " << std::endl;
				std::cout << "ago. I wish I could have done something about his illness.\"                   " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				break;
			}

		case 4:
			{
				// Boy's mother says that just her family in Slash Cottage. Her husband went off to fight the Union
				std::cout << std::endl;
				std::cout << "The boy\'s mother says \"It\'s just me and the rest of my family. My husband   " << std::endl;
				std::cout << "went off to fight against the Federals.\"                                      " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();

				break;
			}

		default:
			{
				std::cout << std::endl << std::endl;
				invalidInput();	
				pressEnterToContinue();

				break;
			}
		}

		if (userSelection == 1 || userSelection == 2 || userSelection == 3 || userSelection == 4)
			break;
	}

	// User is taken to the dinner table. Boy's mother asks user where he's from. User has to lie.
	while (true)
	{
		std::cout << std::endl << std::endl;
		std::cout << "You are escorted across the room to a seat at the wooden table. On the table,  " << std::endl;
		std::cout << "you see green peas pudding in a wooden bowl. It smells delicious. You want     " << std::endl;
		std::cout << "to eat it all as quickly as possible, but you decide that it'd be more         " << std::endl;
		std::cout << "polite if you took your time. The woman asks you \"So where are ya from?\"     " << std::endl;
		std::cout << "You reply with...                                                              " << std::endl;
		std::cout << std::endl;
		std::cout << "[1] \"Richmond\"                                                               " << std::endl;
		std::cout << "[2] \"Suffolk\"                                                                " << std::endl;
		std::cout << "[3] \"Lawrenceville\"                                                          " << std::endl;
		std::cout << "[4] \"Not anywhere particular, I generally reside where there\'s work.         " << std::endl;
		std::cout << "Your selection: " << std::endl;
		std::cin >> userSelection;
							
		switch (userSelection)
		{
		case 1:
			{
				std::cout << std::endl << std::endl;
				std::cout << "\"Ah, how interesting!\" the boy's mother says, \"I've always dreamt of having " << std::endl;
				std::cout << "a home over there. It's really a nice place,\" replied the boy\'s mother.      " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();
				break;
			}

		case 2:
			{
				std::cout << std::endl << std::endl;
				std::cout << "\"Ah, how interesting!\" the boy's mother says, \"I've always dreamt of having " << std::endl;
				std::cout << "a home over there. It's really a nice place,\" replied the boy\'s mother.      " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();
				break;
			}

		case 3:
			{
				std::cout << std::endl << std::endl;
				std::cout << "\"Ah, how interesting!\" the boy's mother says, \"I've always dreamt of having " << std::endl;
				std::cout << "a home over there. It's really a nice place,\" replied the boy\'s mother.      " << std::endl;
				std::cout << std::endl;

				pressEnterToContinue();
				break;
			}

		case 4:
			{
				std::cout << std::endl << std::endl;
				std::cout << "\"Ah, how interesting!\" the boy's mother says, \"I've always wondered what    " << std::endl;
				std::cout << "it\'d be like to do that,\" replied the boy\'s mother.                         " << std::endl;
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

		if (userSelection == 1 || userSelection == 2 || userSelection == 3 || userSelection == 4)
			break;
	}

	// User spends night with the boy and his mother. User leaves in the morning.
	std::cout << std::endl << std::endl;
	std::cout << "After some more small talk, you finish up your supper and thank the boy\'s    " << std::endl;
	std::cout << "mother for her hospitality. She asks you if you\'d like to spend the night with" << std::endl;
	std::cout << "them, and you gladly oblige. In the morning, you eat breakfast with the family " << std::endl;
	std::cout << "and tell them that you should probably get going. You once again thank them for" << std::endl;
	std::cout << "their kindness and proceed to leave.                                           " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// User travels to user's home in Rockville. User is almost discovered by a stray rebel soldier.
	std::cout << std::endl << std::endl;
	std::cout << "Over the next few weeks you work your way up to your home in Rockville. You    " << std::endl;
	std::cout << "find support in nearby towns whenever you can. When you can\'t find support    " << std::endl;
	std::cout << "from towns, you do your best to live off of the land by trapping animals such  " << std::endl;
	std::cout << "as rabbits. While drinking water at a nearby stream, you\'re almost discovered " << std::endl;
	std::cout << "by a stray rebel soldier. Luckily, he didn't see you.                          " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	// User finally arrives home!
	std::cout << std::endl << std::endl;
	std::cout << "After what seems like forever, you finally arrive at Rockville. You barter the " << std::endl;
	std::cout << "rebel uniform for a cheap pair of clothes while explaining your situation to a " << std::endl;
	std::cout << "local salesman. You bathe and change into the new clothes because you want to  " << std::endl;
	std::cout << "look your best when your wife and kid see you. You finally approach your home  " << std::endl;
	std::cout << "and knock on the door. Your wife opens the door and explains \"Oh my god! " << characterName << "!" << std::endl;
	std::cout << "How did you get here! I haven\'t seen you in forever! Let me get the           " << std::endl;
	std::cout << "children...\" You explain your situation to her and your children. They all    " << std::endl;
	std::cout << "welcome you back with great enthusiasm and ask you all about the adventures    " << std::endl;
	std::cout << "you had.                                                                       " << std::endl;
	std::cout << std::endl;

	pressEnterToContinue();

	std::cout << std::endl;
	std::cout << "     =====================================================================    " << std::endl;
	std::cout << "     =                             THE  END                              =    " << std::endl;
	std::cout << "     =====================================================================    " << std::endl;
	std::cout << std::endl;
	
	pressEnterToContinue();
	std::cout << std::endl;
}