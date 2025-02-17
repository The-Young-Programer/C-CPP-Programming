// Autor : OM ROY
// Title: A Login and Registration System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <random>
using namespace std;
bool checkCaptcha(string& captcha, string& user_captcha)
{

    return captcha.compare(user_captcha) == 0;
}
string generateCaptcha(int n)
{
    time_t t;
    srand((unsigned)time(&t));
    const char* chrs = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string captcha = "";
    while (n--)
        captcha.push_back(chrs[rand() % 62]);
    return captcha;
}
void registeruser() {
    string u, p;
    cout << "Enter username: ";
    cin >> u;
    cout << "Enter password: ";
    cin >> p;
    ofstream outfile("users.txt", ios::app);
    outfile << u << " " << p<< endl;
    outfile.close();
    cout << "Registration successful!" << endl;
}
bool login() {
    string u, p, su, sp;//su:-storedusername,sp:-storedpassword
    cout << "Enter username: ";
    cin >> u;
    cout << "Enter password: ";
    cin >> p;
    string captcha = generateCaptcha(9);
    cout << captcha;
    string usr_captcha;
    cout << "Enter above CAPTCHA: ";
    cin >> usr_captcha;
    if (checkCaptcha(captcha, usr_captcha))
        printf("\nCAPTCHA Matched\n");
    else
        printf("\nCAPTCHA Not Matched\n");
    ifstream infile("users.txt");
    while (infile >> su >>sp) {
        if (su == u && sp == p) {
            infile.close();
            return true;
        }
    }
    infile.close();
    return false;
}

int main() {
    int c;
    cout << "Enter your choice(1.Registration,2.Login): ";
    cin >> c;
    if (c == 1) {
        registeruser();
    } 
    else if (c == 2) {
        if (login()) {
            cout << "Login successful!" << endl;
        } 
        else {
            cout << "Login failed!" << endl;
        }
    } 
    else {
        cout << "Invalid !" << endl;
    }
    return 0;
}

