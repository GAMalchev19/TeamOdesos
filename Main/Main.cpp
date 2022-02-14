#include <iostream>
#include "questionData.h"
using namespace std;

// This is the player's choice of menu
int choiceMenu;
int score = 0;




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

// This is the function after starting the game
void startGame(int questionSelect)
{


    cout << questionData[questionSelect] << endl;

    cout << "1." << answerData[questionSelect][0] << endl;
    cout << "2." << answerData[questionSelect][1] << endl;
    cout << "3." << answerData[questionSelect][2] << endl;
    cout << "4." << answerData[questionSelect][3] << endl;

    cout << "Your answer:";

    int playerAnswer;

    cin >> playerAnswer;

    if (playerAnswer - 1 == indexOfRightA[questionSelect])
    {
        score++;
    }
    system("cls");
    cout << "Press enter for next question." << endl;
    system("pause");
    system("CLS");
}

// This is the function that will start the game
void playMenu()
{
    cout << "What is your first name?" << endl;

    string playerName;
    cin >> playerName;

    cout << "Welcome to the game " << playerName << "!";

    system("pause");
    system("CLS");

    bool questionUsed[15] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

    for (int i = 0; i < 15; i++)
    {
        int questionSelect = rand() % 15;
        if (questionUsed[questionSelect] == true) {
            while (questionUsed[questionSelect] != true) {
                questionSelect = rand() % 15;
            }
        }
        startGame(questionSelect);
    }

    cout << "Your score is " << score << "/15! Well played!" << endl;
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


