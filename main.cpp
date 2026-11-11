#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void printBoard() {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    printBoard();

    int choice;
    cout << "Player X, pick a square (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    board[row][col] = 'X';

    printBoard();
    return 0;
}