/* ---------------------------------------------
Program 1: Matryoshka dolls
	Prompt for the number of dolls and display
        ASCII Matryoshka dolls in decending order
        above each other.

Course: CS 141, Spring 2022.
System: Windows using Visual Studio Code
Author: Mykola Turchak
---------------------------------------------
*/

/**------------------------------------------

    Program 1: Matryoshka Dolls
        Prompt for the number of dolls and display
        ASCII Matryoshka dolls in decending order
        above each other.

    Course: CS 141, Spring 2022.
    System: Windows using Visual Studio 
    Author: Mykola Turchak

    Original ASCII graphics gives:
    ------------------------------------------
               Happy New Year!
                     ___
                    /. .\
               \/   \___/  \/
                \   /   \  /
                 \ (     )/
                    \_ _/
                    /   \
                   /     \
                  (       )
                   \     /
            ___,.---\___/---.._____

    ------------------------------------------

 ---------------------------------------------*/

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main()
{
    // Display the menu and get the user choice
    int menuOption = 0;
    cout << "Program 1: Matryoshka Dolls            \n"
        << "Choose from among the following options:  \n"
        << "   1. Display original graphic  \n"
        << "   2. Display Matryoshka Dolls         \n"
        << "   3. Exit the program          \n"
        << "Your choice -> ";
    cin >> menuOption;

    // Handle menu option of 3 to exit
    if (menuOption == 3) {
        exit(0);
    }

    // Handle menu option of 1 to display custom ASCII graphics
    else if (menuOption == 1) {

        // My own graphic.  You must create your own.
        cout << setw(8) << " ";

        // Display a line across the top
        for (int dollCount = 0; dollCount < 42; dollCount++) {
            cout << "-";
        }
        cout << endl;

        // Display ASCII graphics for "2022".  Yours must be different!
        cout << setw(8) << " " << "       Happy New Year!            \n"
            << setw(8) << " " << "             ___                   \n"
            << setw(8) << " " << "            /. .\\                 \n"
            << setw(8) << " " << "       \\/   \\___/  \\/           \n"
            << setw(8) << " " << "        \\   /   \\  /             \n"
            << setw(8) << " " << "         \\ (     )/               \n"
            << setw(8) << " " << "            \\_ _/                 \n"
            << setw(8) << " " << "            /   \\                 \n"
            << setw(8) << " " << "           /     \\                \n"
            << setw(8) << " " << "          (       )                \n"
            << setw(8) << " " << "           \\     /                \n"
            << setw(8) << " " << "    ___,.---\\___/---.._____       \n"
            << endl;
        cout << setw(8) << " ";

        // Display a line across the bottom
        for (int dollCount = 0; dollCount < 42; dollCount++) {
            cout << "-";
        }
        cout << endl;
    } //end if( menuOption == 1)  // menu option to display custom graphic

    else if (menuOption == 2) {

        // Prompt for and get the number of dolls.
        int numberOfDolls = 0;
        cout << "Number of dolls -> ";
        cin >> numberOfDolls;

        // Place your code starting here

        //outside loop that runs until every doll is printed.
        for (int dollCount = 0; dollCount < numberOfDolls; dollCount++){
            cout << setw(numberOfDolls + 3) << "( )" << endl; //prints out the head after certain amout of spaces

            // if statement to decide whether I need to place ":" or "-"
            if ((dollCount + 1) % 2 == 0){ // if even print "/ : \\"
                cout << setw(numberOfDolls + 4) << "/ : \\" << endl; //prints out "/ : \\" after certain amout of spaces
            }

            // if odd print "/ - \\"
            else { 
                cout << setw(numberOfDolls + 4) << "/ - \\" << endl; //prints out "/ - \\" after certain amout of spaces
            }
            
            //for loop to build top part of the body. Runs until lineCount is less than or equal to dollCount
            for (int lineCount = 1; lineCount <= dollCount; lineCount++){
                    cout << setw(numberOfDolls - lineCount) << "/" << setw((lineCount * 2) + 4) << "\\" << endl;
            }

            //for loop to build bottom part of the body. Runs until lineCount is more than or equal to 1
            for (int lineCount = dollCount; lineCount >= 0; lineCount--){
                    cout << setw(numberOfDolls - lineCount + 1) << "\\" << setw((lineCount * 2) + 2) << "/" << endl;
            }

            cout << setw(numberOfDolls + 2) << "-" << endl; //prints out "-" after certain amout of spaces
        }

    } //end if( menuOption == 2) // menu option to display dolls

    cout << "Exiting" << endl;
    return 0;
}
