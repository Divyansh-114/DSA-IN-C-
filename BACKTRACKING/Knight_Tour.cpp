#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<int>>& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

bool isSafe(vector<vector<int>>& board, int x, int y, int n) {
    return x >= 0 && x < n &&
           y >= 0 && y < n &&
           board[x][y] == -1;
}

void KnightTour(vector<vector<int>>& board, int x, int y, int n, int move) {

    // Mark the current square
    board[x][y] = move;

    // Base case
    if (move == n * n - 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << board[i][j] << "\t";
            }
            cout << endl;
        }
        return;
    }

    // All 8 possible knight moves
    int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[] = { 1, -1,  2, -2, 2,-2, 1,-1};

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (isSafe(board, nx, ny, n)) {
            KnightTour(board, nx, ny, n, move + 1);
        }
    }

    // Backtrack
    board[x][y] = -1;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n, -1));

    KnightTour(board, 0, 0, n, 0);

    return 0;
}