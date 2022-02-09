#include <iostream>
#include "questionHeader.h"
using namespace std;

string namePlayer;

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


void mainMenu()
{
	cout << "                                             1. Play" << endl;
	cout << "                                             2. How To Play" << endl;
	cout << "                                             3. About Our Team" << endl;
	cout << "                                             4. Quit" << endl;
}

void playMenu()
{

}

void startGame()
{
	cout << "Welcome to the game! What is your first name?" << endl;

	cin >> namePlayer;


}


void howToPlayMenu()
{
	system("CLS");
	cout << "Our game is like Who Wants to Be a Millionaire, but our questions are only historical. If you choose only the correct answers you will win our game. Let's try it!" << endl << endl;
	system("pause");
	system("CLS");
	welcomeGreet();
	mainMenu();
}

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

void quitMenu()
{
	system("CLS");
}

int main()
{
	welcomeGreet();

	cout << endl;

	mainMenu();

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


