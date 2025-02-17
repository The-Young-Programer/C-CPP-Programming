// Autor : OM ROY
// Title: Stone Paper Scissor Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL
//I make two different code

// #include<iostream>
// using namespace std;
// struct Game{
//     char player1;
//     char player2;
// };
// Game games(){
//     Game a;
//     cout<<"Game (C= Scissor,S=Stone,P=Paper)"<<endl;
//     cout<<"Player 1(C or S or P)"<<endl;
//     cin>>a.player1;
//     cout<<"Player 2(C or S or P)"<<endl;
//     cin>>a.player2;
//     return a;
// }
// void winner(Game a){
//     if(a.player1 =='C'&& a.player2 =='P'){
//         cout<<"Player 1 is winner"<<endl;
//     }
//     else if(a.player1 ='P'&& a.player2 =='C'){
//         cout<<"Player 2 is winner"<<endl;
//     }
//     else if(a.player1 =='P'&& a.player2 =='S'){
//         cout<<"Player 1 is winner"<<endl;
//     }
//      else if(a.player1 =='S'&& a.player2 =='P'){
//         cout<<"Player 2 is winner"<<endl;
//     }
//      else if(a.player1 =='C'&& a.player2 =='S'){
//         cout<<"Player 2 is winner"<<endl;
//     }
//      else if(a.player1 =='S'&& a.player2 =='C'){
//         cout<<"Player 1 is winner"<<endl;
//     }
//      else if(a.player1 =='P'&& a.player2 =='P'||a.player1 =='S'&& a.player2 =='S'||a.player1 =='C'&& a.player2 =='C'){
//         cout<<"Player 2 is winner"<<endl;
//     }
// }
// int main(){
//     cout<<"Start the GAME:"<<endl;
//     Game g[1];
//     g[0] = games();
//     winner(g[0]);
    
//     return 0;
// }
// #include<iostream>
// using namespace std;

// // Define struct for Game
// struct Game {
//     char player1;
//     char player2;
// };

// // Function to play a single game round and return a Game object
// Game games() {
//     Game a;
//     cout << "Game (C= Scissor, S= Stone, P= Paper)" << endl;
//     cout << "Player 1 (C or S or P): ";
//     cin >> a.player1;
//     cout << "Player 2 (C or S or P): ";
//     cin >> a.player2;
//     return a;
// }

// // Function to determine and print the winner
// void winner(Game a) {
//     if ((a.player1 == 'C' && a.player2 == 'P') ||
//         (a.player1 == 'P' && a.player2 == 'S') ||
//         (a.player1 == 'S' && a.player2 == 'C')) {
//         cout << "Player 1 is the winner!" << endl;
//     } else if ((a.player1 == 'P' && a.player2 == 'C') ||
//                (a.player1 == 'S' && a.player2 == 'P') ||
//                (a.player1 == 'C' && a.player2 == 'S')) {
//         cout << "Player 2 is the winner!" << endl;
//     } else {
//         cout << "It's a draw!" << endl;
//     }
// }

// int main() {
//     cout << "Start the GAME:" << endl;
    
//     // Array to hold multiple games (currently set to hold 1 game)
//     Game g[1];
    
//     // Play one round of the game
//     g[0] = games();
    
//     // Determine and print the winner
//     winner(g[0]);
    
//     return 0;
// }

#include<iostream>
using namespace std;
void win(string ans1, string ans2){
    if(ans1=="rock" and ans2 == "paper"){
        cout<<"Person with paper sign won"<<endl;
    }
    else if(ans1=="rock" and ans2 == "scissor"){
        cout<<"Person with rock sign won"<<endl;
    }
    else if(ans1=="paper" and ans2 == "rock"){
        cout<<"Person with paper sign won"<<endl;
    }
    else if(ans1=="scissor" and ans2 == "rock"){
        cout<<"Person with rock sign won"<<endl;
    }
    else if(ans1=="paper" and ans2 == "scissor"){
        cout<<"Person with scissor won"<<endl;
    }
    else if(ans1=="scissor" and ans2 == "paper"){
        cout<<"Person with rock sign won"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}
int main(){
    string ans1, ans2;
    cout<<"Enter the possibility1: "<<endl;
    cin>>ans1;
    cout<<"Enter the possibility2: "<<endl;
    cin>>ans2;
    win(ans1,ans2);
}