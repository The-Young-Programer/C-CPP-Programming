// Autor : Om Roy
// Title: A Login and Registration System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL


#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <functional>
#include <ctime>
#include <cstdlib>
#include "login.h"
using namespace std;

namespace {

    // Helper function to hash strings
    int hashString(const string& str) {
        hash<string> mystdhash;
        return mystdhash(str);
    }

    // Helper function to read user data from the file
    bool readUserDataFromFile(const string& filename, unordered_map<string, pair<int, int>>& usersData) {
        ifstream input(filename);
        if (!input) return false;

        string id, pass, security;
        while (input >> id >> pass >> security) {
            usersData[id] = { stoi(pass), stoi(security) };
        }

        return true;
    }

    // Helper function to write user data to the file
    void writeUserDataToFile(const string& filename, const unordered_map<string, pair<int, int>>& usersData) {
        ofstream output(filename, ios::trunc);
        for (const auto& user : usersData) {
            output << user.first << ' ' << user.second.first << ' ' << user.second.second << endl;
        }
    }

    // Helper function to delete a specific user by ID
    void deleteUserData(const string& filename, const string& userId) {
        unordered_map<string, pair<int, int>> usersData;
        readUserDataFromFile(filename, usersData);

        usersData.erase(userId);
        writeUserDataToFile(filename, usersData);
    }

} // Anonymous namespace

void login::Login() {
    string username, password;
    system("cls");
    cout << "\n\t\t\t Please enter the username and password: " << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> username;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    int loginHashPassword = hashString(password);
    unordered_map<string, pair<int, int>> usersData;
    if (!readUserDataFromFile("data.txt", usersData)) {
        cout << "\n Error reading data file\n";
        return;
    }

    if (usersData.find(username) != usersData.end() && usersData[username].first == loginHashPassword) {
        system("cls");
        cout << username << "\nLogin successful!\n";

        string choice = "1";
        while (choice != "2") {
            cout << "\t\t\t_____________________________________________\n\n\n";
            cout << "\t\t\t         Welcome to the NEMO 2023 Login!         \n\n";
            cout << "\t\t\t_______ Currently Logged In: " << username << " ________\n\n";
            cout << "\t\t\t_________           Menu           __________\n\n";
            cout << "\t | Press 1 to PLAY GAME                              |" << endl;
            cout << "\t | Press 2 to LOGOUT                                 |" << endl;
            cout << "\n\t\t\t Please Enter your choice: ";
            cin >> choice;
            cout << endl;

            if (choice == "1") {
                system("cls");
                DrunkGame();
            }
            else if (choice == "2") {
                system("cls");
                cout << "Logging out" << endl;
            }
            else {
                system("cls");
                cout << "Choice invalid, try again";
            }
        }
    } else {
        system("cls");
        cout << "\n Username or password is incorrect, please try again or register\n";
    }
}

void login::Registration() {
    string regUser, regPassword, securityQuestion;
    system("cls");
    cout << "\n\t\t\t Enter Username: ";
    cin >> regUser;
    cout << "\t\t\t Enter Password: ";
    cin >> regPassword;
    cout << "\t\t\t Security Question: What was your favorite childhood movie?: ";
    cin.ignore();
    getline(cin, securityQuestion);

    int regPassHash = hashString(regPassword);
    int securityHash = hashString(securityQuestion);

    unordered_map<string, pair<int, int>> usersData;
    if (!readUserDataFromFile("data.txt", usersData)) {
        cout << "\n Error reading data file\n";
        return;
    }

    if (usersData.find(regUser) != usersData.end()) {
        string decision;
        cout << "\n\tUsername already taken.\n";
        cout << "\t\tEnter 1 to enter a new one\n";
        cout << "\t\tEnter 2 to go back to the menu\n";
        cout << "\n\t\tEnter choice: ";
        cin >> decision;

        if (decision == "1") {
            Registration();
        } else if (decision == "2") {
            system("cls");
            cout << "\tReturning to menu\n";
            return;
        } else {
            system("cls");
            cout << "\tInvalid Entry, returning to menu." << endl;
            return;
        }
    }

    usersData[regUser] = { regPassHash, securityHash };
    writeUserDataToFile("data.txt", usersData);

    system("cls");
    cout << "\n\t\t\t Registration successful!\n";
}

void login::ForgotPassword() {
    string user;
    system("cls");
    cout << "\n\t\t\tPress 1 to enter USERNAME\n";
    cout << "\t\t\tPress 2 to go back to MENU\n";
    cout << "\n\t\t\tEnter choice: ";
    cin >> user;

    if (user == "1") {
        string username, userSecurity, newPassword;
        system("cls");
        cout << "\n\t\tEnter USERNAME: ";
        cin >> username;
        unordered_map<string, pair<int, int>> usersData;
        if (!readUserDataFromFile("data.txt", usersData)) {
            cout << "\n Error reading data file\n";
            return;
        }

        if (usersData.find(username) == usersData.end()) {
            cout << "\t\tUser not found\n";
            return;
        }

        cout << "\n\t\tUser found\n\t\tSecurity Question: What was your favorite childhood movie?: ";
        cin.ignore();
        getline(cin, userSecurity);

        int securityHash = hashString(userSecurity);
        if (usersData[username].second == securityHash) {
            system("cls");
            cout << "\t\tSecurity Question correct\n";
            cout << "\n\t\tEnter new PASSWORD: ";
            cin >> newPassword;

            int newPassHash = hashString(newPassword);
            usersData[username] = { newPassHash, usersData[username].second };
            writeUserDataToFile("data.txt", usersData);

            cout << "\t\t\t Your password has been updated!\n";
        } else {
            system("cls");
            cout << "\t\tSecurity Question incorrect\n";
        }
    } else if (user == "2") {
        system("cls");
        cout << "\tReturning to MENU\n";
    } else {
        system("cls");
        cout << "\tChoice invalid... Try again\n";
        ForgotPassword();
    }
}

void login::DrunkGame() {
    srand(time(0));
    const int size = 60;
    cout << "Enter a letter to begin \n ";
    char x;
    cin >> x;
    int position = size / 2;
    while (true) {
        cout << "|START|";
        for (int i = 0; i < size; i++) {
            if (i == position)
                cout << x;
            else
                cout << " ";
        }
        cout << "|END|" << endl;

        int move = rand() % 3 - 1;
        position = position + move;

        if (position < 1) {
            cout << "Guess you were too drunk to make it to the end..." << endl;
            break;
        }
        if (position > size - 1) {
            cout << "You might be drunk, but you made it to the end!" << endl;
            break;
        }
    }
    system("pause");
    system("cls");
}
