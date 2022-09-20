#include <iostream>
using namespace std;

bool isWon(char, char[][3]);
bool isDraw(char[][3]);
void displayBoard(char[][3]);
void makeAMove(char[][3], char);

int main() {
	//
	//	PLEASE DO NOT CHANGE function main
	//
	char board[3][3] = { { ' ', ' ', ' ' },{ ' ', ' ', ' ' },{ ' ', ' ', ' ' } };
	displayBoard(board);

		while (true) {

			// The first player makes a move
			makeAMove(board, 'X');
			displayBoard(board);

			if (isWon('X', board)) {
				cout << "X player won" << endl;
				exit(0);
			}
			else if (isDraw(board)) {
				cout << "No winner" << endl;
				exit(0);
			}

			// The second player makes a move
			makeAMove(board, 'O');
			displayBoard(board);

			if (isWon('O', board)) {
				cout << "O player won" << endl;
				exit(0);
			}
			else if (isDraw(board)) {
				cout << "No winner" << endl;
				exit(0);
			}
	 }

	return 0;
}

void displayBoard(char board[][3])
{
	for (int row = 0; row < 3; row++)
	{
		cout << "|";
		for (int col = 0; col < 3; col++)
		{
			cout << board[row][col] << " |";
		}
		cout << "\n----------\n";

	}
};

void makeAMove(char board [][3], char c) 
{
	int row, col;
	cout << "Give me a row (0,1,2): ";
	cin >> row;
	cout << "Give me a col (0,1,2): ";
	cin >> col;
	board[row][col] = c;

	if (row < 0 || row > 2 || col < 0 || col > 2) 
	{ cout << "I said 0,1,2, why you type something other than that? Try again" << endl;}
}

bool isWon(char c, char board[][3]) 
{
	if (board[0][0] == c && board[0][1] == c && board[0][2] == c) {
		return true;
	}
	else if (board[1][0] == c && board[1][1] == c && board[1][2] == c) {
		return true;
	}
	else if (board[2][0] == c && board[2][1] == c && board[2][2] == c) {
		return true;
	}
	else if (board[0][0] == c && board[1][0] == c && board[2][0] == c) {
		return true;
	}
	else if (board[0][1] == c && board[1][1] == c && board[2][1] == c) {
		return true;
	}
	else if (board[0][2] == c && board[1][2] == c && board[2][2] == c) {
		return true;
	}
	else if (board[0][0] == c && board[1][1] == c && board[2][2] == c) {
		return true;
	}
	else if (board[2][0] == c && board[1][1] == c && board[0][2] == c) {
		return true;
	}
	return false;
}

bool isDraw(char[][3]) 
{
	return false;
}
