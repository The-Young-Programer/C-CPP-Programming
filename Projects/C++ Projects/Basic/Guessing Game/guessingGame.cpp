// created by The Young Programmer 🏅 aka NemoNet 🖥

#include <iostream>
#include <cstdlib>  // Needed for rand() and srand()
#include <ctime>    // Needed for time()

using namespace std;

int main() {
    int attempt = 1, ans, guess = 0, _won = 0, h = 100, l = 0;
    srand(time(0));  // Seed the random number generator

    ans = rand() % 101;  // Generate a random number between 0 and 100
    cout << "**** PLEASE READ INSTRUCTION ****" << endl << endl;
    cout << "NemoNet will generate" << endl << "any random number between 0-100" << endl;
    cout << "You have to guess the number" << endl << "You have 5 attempts to guess" << endl << endl;
    cout << "After each wrong guess, NemoNet will tell you" << endl << "Your guess is HIGH or LOW" << endl;
    cout << "BEST OF LUCK!" << endl;

    while (attempt <= 5) {
        cout << endl << "Attempt no. " << attempt << endl;
        cout << "Enter your guess between 0 - 100: ";
        cin >> guess;

        if (guess < 0 || guess > 100) {
            cout << "INVALID GUESS!! Please enter a number between 0 and 100." << endl;
            continue;
        } else if (guess == ans) {
            cout << "CONGRATULATIONS! YOU WON! Your guess " << guess << " is correct!" << endl;
            _won = 1;
            break;
        } else if (guess < ans) {
            cout << "*** Your guess " << guess << " is LOW ***" << endl;
            l = guess;
        } else {
            cout << "*** Your guess " << guess << " is HIGH ***" << endl;
            h = guess;
        }

        // Provide a range hint
        cout << "Number is between " << l << " and " << h << endl;

        // Feature: Provide a hint if the guess is close
        if (abs(guess - ans) <= 10) {
            cout << "You're getting close! The number is within 10 units of your guess." << endl;
        }

        attempt++;
    }

    cout << "\n";
    if (_won) {
        cout << "THANKS FOR PLAYING! PLEASE GIVE A STAR" << endl;
    } else {
        cout << "Sorry, you lost! The correct answer is: " << ans << endl << "Please play again and give A STAR!" << endl;
    }

    cout << "\n\n";
    cout << "You can contact NemoNet for more programming games :-)" << endl;
    cout << "https://github.com/The-Young-Programmer" << endl;

    return 0;
}
