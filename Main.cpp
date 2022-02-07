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
	cout << "1. Play" << endl;
	cout << "2. Settings" << endl;
	cout << "3. Add Questions" << endl;
	cout << "3. About Our Team" << endl;
	cout << "4.	Quit" << endl;

}


int main()
{
	welcomeGreet();
	
	cout << endl;

	mainMenu();
}