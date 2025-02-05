#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
void display(const string &word, const vector<bool> &guessed) {
    for (size_t i = 0; i < word.size(); ++i) {
        if (guessed[i]) {
            cout << word[i];
        } 
        else {
            cout << " _";
        }
    }
    cout << endl;
}
bool wordguess(const vector<bool> &guessed) {
    for (bool b : guessed) {
        if (!b) {
            return false;
        }
    }
    return true;
}
int main() {
    vector<string> words = { "om", "kanisha", "aditi", "harsh"};
    srand(static_cast<unsigned int>(time(0)));  
    string word = words[rand() % words.size()];
    vector<bool> guessed(word.size(), false);
    int remainingAttempts = 6;
    cout << "Welcome to Hangman!" << endl;
    while (remainingAttempts > 0 && !wordguess(guessed)) {
        cout << "Current word: ";
        display(word, guessed);
        cout << "Remaining attempts: " << remainingAttempts << endl;
        cout << "Enter a letter: ";
        char guess;
        cin >> guess;
        bool correctguess = false;
        for(size_t i = 0; i < word.size(); ++i) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = true;
                correctguess = true;
            }
        }
        if(!correctguess) {
            --remainingAttempts;
            cout << "Incorrect guess!" << endl;
        }
        else {
            cout << "Correct guess!" << endl;
        }
    }
    if(wordguess(guessed)) {
        cout << "Congratulations! You've guessed the word: " << word << endl;
    } 
    else {
        cout << "Sorry, you've run out of attempts. The word was: " << word << endl;
    }
    return 0;
}
