#include <iostream>
#include <vector>
#include <string>
using namespace std;

// this project is a simple implementation of the tic-tac-toe game (also known as XO game) in C++
vector<char> createBoard() {

cout << "Welcome to the XO game!\n\n";
cout << "The board is numbered as follows:\n\n";
cout << "        1 | 2 | 3 \n";
cout << "       ---+---+---\n";
cout << "        4 | 5 | 6 \n";
cout << "       ---+---+---\n";
cout << "        7 | 8 | 9 \n\n";
vector<char> board(9, ' '); // initialize the board with empty spaces
return board;

}

int main() {
vector<char> board = createBoard();
cout << "The board has been created. Let's start the game!\n";

// The game logic will be implemented here below right now



// X is the first player and its logic is below and then Y's logic will be implemented after that
for(int i = 0; i < board.size(); i++) {

    cout << "Player X, please enter your move (1-9): \n";
int move;
cin >> move;

if (move < 1 || move > 9) {
    cout << "Invalid move. Please enter a number between 1 and 9.\n";
} else if (board[move - 1] != ' ') {
    cout << "That spot is already taken. Please choose another move.\n";
} else if(move ==1 || move == 2 || move == 3 || move == 4 || move == 5 || move == 6 || move == 7 || move == 8 || move == 9){
    board[move - 1] = 'X';
    cout << "Player X has made a move at position " << move << ".\n\n";}

    
     cout << "Player Y, please enter your move (1-9): \n";
int move2;
cin >> move2;

// Y is the second player and its logic is below
    if(move2 < 1 || move2 > 9) {
    cout << "Invalid move. Please enter a number between 1 and 9.\n";}
    else if (board[move2 - 1] != ' ') {
    cout << "That spot is already taken. Please choose another move.\n";}
    else if(move2 ==1 || move2 == 2 || move2 == 3 || move2 == 4 || move2 == 5 || move2 == 6 || move2 == 7 || move2 == 8 || move2 == 9){
    board[move2 - 1] = 'O';
    cout << "Player Y has made a move at position " << move2 << ".\n\n";}

   
    // Check for a winner or a draw after each move
    if(board[0] == 'X' && board[1] == 'X' && board[2] == 'X') {
        cout << "Player X wins!";
    } else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
        cout << "Player X wins!";
        return 0;
    } else if(board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
        cout << "Player Y wins!";
        return 0;
    } else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
        cout << "Player Y wins!" ;
        return 0;
    }  }

        cout << "It's a draw!";
    }