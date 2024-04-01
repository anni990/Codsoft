// Tic-tac-Toe Game using C++.

#include <iostream>
using namespace std;

// Function to draw the Tic Tac Toe board--->
void drawBoard(char board[3][3])
{
    cout << "--------------" << endl;  // Horizontal line of the borad-->
    for (int i = 0; i < 3; i++)
    {
        cout << "| "; // Top vertical line of the borad-->
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " | ";   // Middle vertical lines of the borad--->
        }
        cout << endl;
        cout << "-------------" << endl;  // Horizontal Lines-->
    }
}

// Function to check if the move is valid or not--->
bool isValidMove(char board[3][3], int row, int col)
{
    return board[row - 1][col - 1] == ' ';
}

// Function to check if the game is over --->
bool isGameOver(char board[3][3], char player)
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
        {
            return true;
        }
    }
    // Check columns
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
        {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
    {
        return true;
    }
    return false;
}

// Checking the board is full or not--->
bool isBoardFull(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return false;
            }
        }
    }
    return true;
}

// Main function Starts from here--> 
int main()
{
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';
    bool gameOver = false;

    while (!gameOver)
    {
        drawBoard(board);

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || !isValidMove(board, row, col))
        {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;

        if (isGameOver(board, currentPlayer))
        {
            cout << "Player " << currentPlayer << " wins!" << endl;
            gameOver = true;
        }
        else if (isBoardFull(board))
        {
            cout << "It's a tie!" << endl;
            gameOver = true;
        }
        else
        {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    drawBoard(board);

    return 0;
}
