#include <iostream>
#include "main.cpp"

using namespace std;

// Function prototypes
void scene1();
void scene2();
void scene3();

// Brief recap of last night's activities. Tells user that they hope to rejoin war effort
void scene1()
{
	cout << "All you remember from last night's activities is trying to get as far away from the wretched prison as possible until you collapsed of exaustion. You awake to find yourself with a stinging pain in your hands and feet. Your feet are like lumps of ice, your face is smarting with pain, and your hands are red and without feeling; you were lucky to escape freezing to death. Once your body begins to warm you decide you might as well get moving. You hope to rejoin the war effort as soon as possible to help restore the Union to its full glory." << endl;

	// Press enter to continue...
	pressEnterToContinue();

	scene2();
}

// Tells user where they are heading to. Negro approaches user
void scene2()
{
	cout << "You decide that your best course of action is to head in a northward direction. For the first few minutes, each step came with another jolt of pain. Fortunately, your body becomes accustomed to the conditions and the majority of the pain subsides. After a while, a negro suddenly confronts you. At first you are worried he may be aggressive because of your rebel uniform, but he is not in the slightest." << endl;

	// Press enter to continue...

	scene3();
}

void scene3()
{
	cout << "The negro says \"I knows yer, Sar; you\'se a Yankee pris\'ner \'scaped from Richmon\'. But, Lor\' bless yer, massa, I won\'t tell on yer; I\'se real glad yer\'s got away.\" You immediately know that this is a man who trust. You proceed to tell him all that you remember regarding the escape. You attempt ";
}