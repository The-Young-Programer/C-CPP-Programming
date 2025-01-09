/*
    Project Status: 1
    Date: Oct 11, 2022
    Author: Easter Maxwell
    Co-factor: The Young Programmer Nemonet (Nov 16, 2022)
*/

/* 'Error --1' is just a random error message */

// Control number output
#include <iomanip>   

// For system operations
#include <windows.h>

#include <iostream>

using namespace std;

void displayStandardOutput()
{
    int fahrenheit;
    int step;
    int celsius;
    int lowerLimit;
    int upperLimit;

    cout << '\n';
    cout << "[+] Enter Step value: ";
    cin >> step;

    cout << '\n';
    cout << "[+] Enter Lower Limit: ";
    cin >> lowerLimit;

    cout << '\n';
    cout << "[+] Enter Upper Limit: ";
    cin >> upperLimit;

    // Enables 'fahrenheit' to start printing from the lowest value
    fahrenheit = lowerLimit;

    cout << '\n';
    cout << "\t\t\t\t\t         ";
    cout << "--- Temperature ---" << '\n';

    cout << '\n';
    cout << "\t\t\t\t\t    "
         << "+----------------------------+"
         << '\n'
         << "\t\t\t\t\t    "
         << "| Fahrenheit       Celsius   |"
         << '\n'
         << "\t\t\t\t\t    "
         << "+--------------|-------------+";

    while (fahrenheit <= upperLimit)
    {
        // Formula (Fahrenheit to Celsius)
        celsius = 5 * (fahrenheit - 32) / 9;

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "|     " << fahrenheit << "\t\t " << celsius << "     |";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "+--------------|-------------+";

        // Increments fahrenheit by the 'step' value
        fahrenheit = fahrenheit + step;
    }
}

void displayUserSpecificOutput()
{
    string option;
    float fahrenheitInput;
    float fahrenheitResult;
    float celsiusInput;
    float celsiusResult;

    cout << "\t\t\t\t\t       "
         << "--- Available Options ---" << '\n';

    cout << "\t\t\t     "
         << '\n'
         << "\t\t\t     "
         << "+-----------------------------------------------------------+"
         << "\t\t\t     "
         << '\n'
         << "\t\t\t     "
         << "| Press F to convert temperature from Fahrenheit to Celsius |"
         << "\t\t\t     "
         << '\n'
         << "\t\t\t     "
         << "| --------------------------------------------------------- |"
         << "\t\t\t     "
         << '\n'
         << "\t\t\t     "
         << "| Press C to convert temperature from Celsius to Fahrenheit |"
         << "\t\t\t     "
         << '\n'
         << "\t\t\t     "
         << "+-----------------------------------------------------------+";

    cout << "\n\n";
    cout << "[:] Enter Option: ";
    cin >> option;

    if (option == "C" || option == "c")
    {
        cout << '\n';
        cout << "[+] Enter Temperature in Celsius: ";
        cin >> celsiusInput;

        // Formula (Celsius to Fahrenheit)
        fahrenheitResult = (9.0 / 5.0) * celsiusInput + 32;

        cout << '\n';
        cout << "\t\t\t\t\t            ";
        cout << "--- Result ---" << '\n';

        cout << '\n';
        cout << "\t\t\t\t\t    "
             << "+----------------------------+"
             << '\n'
             << "\t\t\t\t\t    "
             << "|   Celsius       Fahrenheit |"
             << '\n'
             << "\t\t\t\t\t    "
             << "+--------------|-------------+";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "|     " << celsiusInput << "\t   |      " << setprecision(3) << fahrenheitResult << "\t |";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "+----------------------------+";
    }
    else if (option == "F" || option == "f")
    {
        cout << '\n';
        cout << "[+] Enter Temperature in Fahrenheit: ";
        cin >> fahrenheitInput;

        // Formula (Fahrenheit to Celsius)
        celsiusResult = 5 * (fahrenheitInput - 32) / 9;

        cout << '\n';
        cout << "\t\t\t\t\t            ";
        cout << "--- Result ---" << '\n';

        cout << '\n';
        cout << "\t\t\t\t\t    "
             << "+----------------------------+"
             << '\n'
             << "\t\t\t\t\t    "
             << "|  Fahrenheit       Celsius  |"
             << '\n'
             << "\t\t\t\t\t    "
             << "+--------------|-------------+";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "|     " << fahrenheitInput << "\t   |    " << setprecision(3) << celsiusResult << "\t |";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "+----------------------------+";
    }
    else
    {
        Sleep(500);
        cout << "\n[:] #Msg: Error --1" << '\n';
        cout << "[:} Fault: Invalid option input!" << '\n';
    }
}

int main()
{
    string userInput;

    cout << "\t\t\t\t\t    ";
    cout << "--- TEMPERATURE CALCULATOR ---";
    cout << "\n\n";
    cout << "\n\t\tDeveloped By:";
    cout << " Easter Maxwell (Oct 11, 2022)";
    cout << "\n\t\t In Collaboration with:";
    cout << " Nemonet (TYP) (Nov 16, 2022)";
    cout << "\n\n\n\n";

    cout << "\t\t\t\t\t"
         << "+------------------------------------+"
         << "\t\t\t\t\t"
         << '\n'
         << "\t\t\t\t\t"
         << "| Press 0 to display standard input |"
         << "\t\t\t\t\t"
         << '\n'
         << "\t\t\t\t\t"
         << "| ---------------------------------- |"
         << "\t\t\t\t\t"
         << '\n'
         << "\t\t\t\t\t"
         << "| Press X to display specific output |"
         << "\t\t\t\t\t"
         << '\n'
         << "\t\t\t\t\t"
         << "+------------------------------------+"
         << "\n\n";

    cout << "[:] Enter option: ";
    cin >> userInput;

    if (userInput == "0" || userInput == "o" || userInput == "O")
    {
        Sleep(500);

        // Display this function
        displayStandardOutput();
    }
    else if (userInput == "X" || userInput == "x" || userInput == "*")
    {
        Sleep(500);

        // Display this function
        displayUserSpecificOutput();
    }
    else
    {
        Sleep(500);
        cout << "\n[:] #Msg: Error --1" << '\n';
        cout << "[:} Fault: Invalid option input!" << '\n';
    }

    return 0;
}