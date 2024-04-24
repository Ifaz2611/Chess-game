#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Piece {
    char symbol;
    bool isWhite; 
};


vector<vector<Piece>> initializeBoard() {
    vector<vector<Piece>> board(8, vector<Piece>(8));

    for (int col = 0; col < 8; ++col) {
        board[1][col] = {'P', true};
        board[6][col] = {'P', false}; 
    }
    
    board[0][0] = {'R', true}; board[0][7] = {'R', true}; 
    board[7][0] = {'R', false}; board[7][7] = {'R', false}; 
    board[0][1] = {'N', true}; board[0][6] = {'N', true}; 
    board[7][1] = {'N', false}; board[7][6] = {'N', false}; 
    board[0][2] = {'B', true}; board[0][5] = {'B', true}; 
    board[7][2] = {'B', false}; board[7][5] = {'B', false}; 
    board[0][3] = {'Q', true}; board[7][3] = {'Q', false};
    board[0][4] = {'K', true}; board[7][4] = {'K', false}; 
    
    return board;
}

void printBoard(const vector<vector<Piece>>& board) {
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            if (board[row][col].symbol != '\0') {
                cout << board[row][col].symbol;
            } else {
                cout << '-';
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<Piece>> board = initializeBoard();

    printBoard(board);
    
    return 0;
}
