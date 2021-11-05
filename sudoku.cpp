#include <bits/stdc++.h>
using namespace std;

bool isValid(int board[9][9], int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == num) return false;
        if (board[i][col] == num) return false;
    }
    int r = row / 3 * 3;
    int c = col / 3 * 3;
    for (int i = r; i < r + 3; i++) {
        for (int j = c; j < c + 3; j++) {
            if (board[i][j] == num) return false;
        }
    }
    return true;
}

void solve(int board[9][9], int row, int col) {
    if (row == 9) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return;
    }
    if (col == 9) {
        solve(board, row + 1, 0);
        return;
    }
    if (board[row][col] != 0) {
        solve(board, row, col + 1);
        return;
    }
    for (int i = 1; i <= 9; i++) {
        if (isValid(board, row, col, i)) {
            board[row][col] = i;
            solve(board, row, col + 1);
        }
    }
    board[row][col] = 0;
}

void solveSudoku(int board[9][9]) {
    solve(board, 0, 0);
}

int main() {
    int board[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9},
    };
    solveSudoku(board);
    return 0;
}