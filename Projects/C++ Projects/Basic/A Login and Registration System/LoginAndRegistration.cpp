// Author : Nemonet TYP
// Title: A Login and Registration System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL

#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <functional>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "login.cpp"
using namespace std;

int main()
{
    login userLogin;
    string userChoice;

    // Beautified Header
    cout << "\t\t\t_________________________________________________________\n\n";
    cout << "\t\t\t       Welcome to the NEMO 2023 Login System!          \n\n";
    cout << "\t\t\t_________________________________________________________\n\n";
    cout << "\t\t\t               Main Menu                               \n";
    cout << "\t\t\t_________________________________________________________\n\n";

    // Beautified Menu
    cout << "\t | Press 1 to LOGIN                                      |" << endl;
    cout << "\t | Press 2 to REGISTER                                   |" << endl;
    cout << "\t | Press 3 if you forgot PASSWORD                        |" << endl;
    cout << "\t | Press 4 to EXIT                                       |" << endl;

    cout << "\n\t\t\t Please Enter your choice: ";
    cin >> userChoice;
    cout << endl;

    // Handling user input
    if (userChoice == "1")
    {
        userLogin.Login();
        main();
    }
    else if (userChoice == "2")
    {
        userLogin.Registration();
        main();
    }
    else if (userChoice == "3")
    {
        userLogin.ForgotPassword();
        main();
    }
    else if (userChoice == "4")
    {
        // Beautified Goodbye Message
        cout << "\t\t\t Thank you for using NEMO 2023. Goodbye! \n\n";
    }
    else
    {
        // Beautified Error Message
        system("cls");
        cout << "\t\t\t Invalid choice! Please select an option from the menu above.\n";
        main();
    }
}
