#include <iostream>
#include "questionHeader.h"
using namespace std;

// The name of the current player
string namePlayer;


// This is the welcome greeting in the beggining of the program
void welcomeGreet()
{
	cout << "###########################################################################################################" << endl;
	cout << "   #                    #  ##########   #            ##########  #########  # #       # #  ##########  #" << endl;
	cout << "    #                  #   #            #            #           #       #  #  #     #  #  #           #" << endl;
	cout << "     #       ##       #    #            #            #           #       #  #   #   #   #  #           #" << endl;
	cout << "      #     #  #     #     ##########   #            #           #       #  #    # #    #  ##########  #" << endl;
	cout << "       #   #    #   #      #            #            #           #       #  #     #     #  #           #" << endl;
	cout << "        # #      # #       #            #            #           #       #  #           #  #            " << endl;
	cout << "         #        #        ##########   ###########  ##########  #########  #           #  ##########  #" << endl;
	cout << "###########################################################################################################" << endl;
}

// This is the main menu
void mainMenu()
{
	cout << "                                             1. Play" << endl;
	cout << "                                             2. How To Play" << endl;
	cout << "                                             3. About Our Team" << endl;
	cout << "                                             4. Quit" << endl;
}

// This is the function that will start the game
void playMenu()
{

}

// This is the function after starting the game to input the name of the player
void startGame()
{
	cout << "Welcome to the game! What is your first name?" << endl;

	cin >> namePlayer;


}

// This the how to play menu that will inform the player to understand the game
void howToPlayMenu()
{
	system("CLS");
	cout << "Our game is like Who Wants to Be a Millionaire, but our questions are only historical. If you choose only the correct answers you will win our game. Let's try it!" << endl << endl;
	system("pause");
	system("CLS");
	welcomeGreet();
	mainMenu();
}

// This the function of the menu which will display information for our team
void aboutUsMenu()
{
	system("CLS");
	cout << "Scrum Trainer:         Frontend developer:         Backend developer:            Q&A:                       Helper" << endl;
	cout << "Georgi Malchev          Teodor Osmanliev            Teodor Todorov        Kaloqn Pazlamachev            Andrey Andreev" << endl;
	system("pause");
	system("CLS");
	welcomeGreet();
	mainMenu();

}

// This is the function for ending the program
void quitMenu()
{
	system("CLS");
}

int main()
{
	welcomeGreet();

	cout << endl;

	mainMenu();

	// This is the player's choice of menu
	int choiceMenu;

	cin >> choiceMenu;

	if (choiceMenu == 1)
	{

	}
	else if (choiceMenu == 2)
	{
		howToPlayMenu();
	}
	else if (choiceMenu == 3)
	{
		aboutUsMenu();
	}
	else if (choiceMenu == 4)
	{
		quitMenu();
	}
	// This else is for incorrect choice of menu
	else
	{
		system("CLS");
		cout << "Incorrect choice of menu! Please choose another." << endl;
		system("pause");

		system("CLS");

		welcomeGreet();
		mainMenu();
		cin >> choiceMenu;
	}
}


