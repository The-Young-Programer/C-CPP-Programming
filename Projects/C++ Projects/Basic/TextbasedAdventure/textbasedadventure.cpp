#include <iostream>
#include <string>
using namespace std;
void display() {
    cout << "Welcome to the Text Adventure Game!" << endl;
    cout << "You find yourself in a mysterious land with several rooms." << endl;
    cout << "Your goal is to find the hidden treasure and escape." << endl;
    cout << "Good luck!" << endl << endl;
}
int getplayer() {
    int c;
    cout << "Enter your choice: ";
    cin >> c;
    return c;
}
void room1();
void room2();
void room3();
void room1() {
    cout << "You are in Room 1. There are doors to Room 2 and Room 3." << endl;
    cout << "1. Go to Room 2" << endl;
    cout << "2. Go to Room 3" << endl;
    int choice = getplayer();
    if (choice == 1) {
        room2();
    } else if (choice == 2) {
        room3();
    } else {
        cout << "Invalid choice. Try again." << endl;
        room1();
    }
}
void room2() {
    cout << "You are in Room 2. There are doors to Room 1 and Room 3." << endl;
    cout << "1. Go to Room 1" << endl;
    cout << "2. Go to Room 3" << endl;
    int choice = getplayer();
    if (choice == 1) {
        room1();
    } else if (choice == 2) {
        room3();
    } else {
        cout << "Invalid choice. Try again." << endl;
        room2();
    }
}
void room3() {
    cout << "You are in Room 3. There is a door to Room 1 and a hidden treasure here!" << endl;
    cout << "1. Go to Room 1" << endl;
    cout << "2. Take the treasure and win the game!" << endl;
    int choice = getplayer();
    if (choice == 1) {
        room1();
    } else if (choice == 2) {
        cout << "Congratulations! You found the hidden treasure and won the game!" << endl;
    } else {
        cout << "Invalid choice. Try again." << endl;
        room3();
    }
}
int main() {
    display();
    int m;
    cout<<"Enter the room number(1,2,3):"<<endl;
    cin>>m;
    if(m==1){
        room1();
    }
    else if(m==2){
        room2();
    }
    else if(m==3){
        room3();
    }
    else{
        cout<<"Invalid !"<<endl;
    }
    return 0;
}
