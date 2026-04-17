#include <bits/stdc++.h>
using namespace std;

void drawBoard(const vector<char>& board) {
    // Clear the terminal screen (works on Linux/Debian)
    system("clear"); 

    cout << "\n Tic-Tac-Toe\n";
    cout<<"___________________\n";
    cout<<"|     |     |     |\n";
    cout<<"|  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<"  |\n";
    cout<<"|_____|_____|_____|\n";
    cout<<"|     |     |     |\n";
    cout<<"|  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<"  |\n";
    cout<<"|_____|_____|_____|\n";
    cout<<"|     |     |     |\n";
    cout<<"|  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<"  |\n";
    cout<<"|_____|_____|_____|\n";
}

int main() {
    vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice;
    char player = 'x';
    bool gamerunning = true;
    
    drawBoard(board);
    
    cout << "Player " <<  player << ", enter your move (1-9): ";
    cin >> choice;

    if (choice >= 1 && choice <= 9 && board[choice - 1] != 'x' && board[choice - 1] != '0'){
        board[choice - 1] = player;
    }else{
        cout << "Invalid move, retry."<<endl;
    }
    


    return 0;
}