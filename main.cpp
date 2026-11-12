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
    char player = 'O';

    for (int turn = 0; turn < 9; turn++) {
        printBoard();

        int choice;
        cout << "Player " << player << ", pick a position (1-9): ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please type a number from 1 to 9." << endl;
            turn--;
            continue;
        }

        if (choice < 1 || choice > 9) {
            cout << "Pick a number from 1 to 9." << endl;
            turn--;
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == 'O' || board[row][col] == 'X') {
            cout << "Position already taken choose another position." << endl;
            turn--;
            continue;
        }

        board[row][col] = player;

        if (player == 'O') {
            player = 'X';
        } else {
            player = 'O';
        }
    }

    printBoard();
    cout << "Board is full. Game over!" << endl;

    return 0;
}