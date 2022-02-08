#include <iostream>
using namespace std;

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
void howToPlayMenu()
{

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
	system("pause");
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

	}
	else if (choiceMenu == 3)
	{
		aboutUsMenu();
	}
	else if (choiceMenu == 4)
	{

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