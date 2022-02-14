#include <iostream>
using namespace std;

// This is the player's choice of menu
int choiceMenu;


// This is the welcome greeting in the beginning of the program
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

}

// This the how to play menu that will inform the player to understand the game
void howToPlayMenu()
{
    system("CLS");
    cout << "Our game is like Who Wants to Be a Millionaire, but our questions are only historical. If you choose only the correct answers you will win our game. Let's try it!" << endl << endl;
    system("pause");
    system("CLS");
}

// This the function of the menu which will display information for our team
void aboutUsMenu()
{
    system("CLS");
    cout << "Scrum Trainer:         Frontend developer:         Backend developer:            Q&A:                       Helper" << endl;
    cout << "Georgi Malchev          Teodor Osmanliev            Teodor Todorov        Kaloqn Pazlamachev            Andrey Andreev" << endl;
    system("pause");
    system("CLS");
}

// This is the function for ending the program
void quitMenu()
{
    system("CLS");
}

void menuLink(int choice)
{
    switch (choice)
    {
    case 1:
    {
        playMenu();
        system("pause");
        break;
    }
    case 2:
    {
        howToPlayMenu();
        system("pause");
        break;
    }
    case 3:
    {
        aboutUsMenu();
        system("pause");
        break;
    }
    }
}


int main()
{
    while (choiceMenu != 4) {
        welcomeGreet();

        cout << endl;

        mainMenu();

        cout << endl << "Choose a menu:";
        cin >> choiceMenu;

        menuLink(choiceMenu);
    }
    quitMenu();
}


