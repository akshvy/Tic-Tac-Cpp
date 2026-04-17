#include <bits/stdc++.h>
using namespace std;


void drawBoard(const vector<char>& board) {
    system("clear"); 
    cout << "\n Tic-Tac-Toe\n";
    cout<<"___________________\n"
        <<"|     |     |     |\n"
        <<"|  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<"  |\n"
        <<"|_____|_____|_____|\n"
        <<"|     |     |     |\n"
        <<"|  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<"  |\n"
        <<"|_____|_____|_____|\n"
        <<"|     |     |     |\n"
        <<"|  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<"  |\n"
        <<"|_____|_____|_____|\n";
}

bool checkWin(const vector<char>& board) {
  
    if (board[0] == board[1] && board[1] == board[2]) return true;
    if (board[3] == board[4] && board[4] == board[5]) return true;
    if (board[6] == board[7] && board[7] == board[8]) return true;
    if (board[0] == board[3] && board[3] == board[6]) return true;
    if (board[1] == board[4] && board[4] == board[7]) return true;
    if (board[2] == board[5] && board[5] == board[8]) return true;
    if (board[0] == board[4] && board[4] == board[8]) return true;
    if (board[2] == board[4] && board[4] == board[6]) return true;
    return false;
}

bool checkDraw(const vector<char>& board) {
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') return false;
    }
    return true;
}

int main() {
    vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice;
    char player = 'X'; 
    bool gamerunning = true;
    
    while (gamerunning) {
        drawBoard(board);
        
        cout << "Player " <<  player << ", enter your move (1-9): ";
        cin >> choice;

        int index = choice - 1;

        
        if (choice >= 1 && choice <= 9 && board[index] != 'X' && board[index] != 'O') {
            board[index] = player;

            
            if (checkWin(board)) {
                drawBoard(board);
                cout << "Player " << player << " WINS! 🎉\n";
                gamerunning = false; 
            } 
            else if (checkDraw(board)) {
                drawBoard(board);
                cout << "It's a DRAW! 🤝\n";
                gamerunning = false;
            } 
            else {
                
                player = (player == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move, press Enter to retry.";
            cin.ignore();
            cin.get();
        }
    }

    return 0;
}