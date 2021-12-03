#include <iostream>

using namespace std;
char square1 = ' ', square2 = ' ', square3 = ' ', square4 = ' ', square5 = ' ', square6 = ' ', square7 = ' ', square8 = ' ', square9 = ' ';
int j = 0;
void buildArea();
void main()
{
	int X, O;
	bool gameOver = false;
	int player_switch = 0;
	int current_array[10] = {}; //This array will be used to check which square is already filled.
	while (!gameOver)
	{
		buildArea();
		if (player_switch % 2 == 0) 
		{
			cout << "Player 1 turn (1 - 9): ";
			cin >> X;
			for (int i = 0; i < 10; i++)
			{
				if (current_array[i] == X || X < 1 || X > 9)
				{
					cout << "Wrong input. Try again: ";
					cin >> X;
				}
			}
			switch (X)
			{
			case 1:
				square1 = 'X';
				current_array[0] = 1;
				break;
			case 2:
				square2 = 'X';
				current_array[1] = 2;
				break;
			case 3:
				square3 = 'X';
				current_array[2] = 3;
				break;
			case 4:
				square4 = 'X';
				current_array[3] = 4;
				break;
			case 5:
				square5 = 'X';
				current_array[4] = 5;
				break;
			case 6:
				square6 = 'X';
				current_array[5] = 6;
				break;
			case 7:
				square7 = 'X';
				current_array[6] = 7;
				break;
			case 8:
				square8 = 'X';
				current_array[7] = 8;
				break;
			case 9:
				square9 = 'X';
				current_array[8] = 9;
				break;
			}
		}
		else
		{
			cout << "Player 2 turn (1 - 9): ";
			cin >> O;
			for (int i = 0; i < 10; i++)
			{
				if (current_array[i] == O || O < 1 || O > 9)
				{
					cout << "Wrong input. Try again: ";
					cin >> O;
				}
			}
			switch (O)
			{
			case 1:
				square1 = 'O';
				current_array[0] = 1;
				break;
			case 2:
				square2 = 'O';
				current_array[1] = 2;
				break;
			case 3:
				square3 = 'O';
				current_array[2] = 3;
				break;
			case 4:
				square4 = 'O';
				current_array[3] = 4;
				break;
			case 5:
				square5 = 'O';
				current_array[4] = 5;
				break;
			case 6:
				square6 = 'O';
				current_array[5] = 6;
				break;
			case 7:
				square7 = 'O';
				current_array[6] = 7;
				break;
			case 8:
				square8 = 'O';
				current_array[7] = 8;
				break;
			case 9:
				square9 = 'O';
				current_array[8] = 9;
				break;
			}
		}
		player_switch++;
		system("cls");
		if (square1 == 'X' && square2 == 'X' && square3 == 'X' || square1 == 'X' && square4 == 'X' && square7 == 'X' || square3 == 'X' && square6 == 'X' && square9 == 'X' || square1 == 'X' && square5 == 'X' && square9 == 'X' || square3 == 'X' && square5 == 'X' && square7 == 'X' || square4 == 'X' && square5 == 'X' && square6 == 'X' || square7 == 'X' && square8 == 'X' && square9 == 'X' || square2 == 'X' && square5 == 'X' && square8 == 'X')
		{
			gameOver = true;
			buildArea();
			cout << "Game Over! Player 1 won!";
		}
		else if (square1 == 'O' && square2 == 'O' && square3 == 'O' || square1 == 'O' && square4 == 'O' && square7 == 'O' || square3 == 'O' && square6 == 'O' && square9 == 'O' || square1 == 'O' && square5 == 'O' && square9 == 'O' || square3 == 'O' && square5 == 'O' && square7 == 'O' || square4 == 'O' && square5 == 'O' && square6 == 'O' || square7 == 'O' && square8 == 'O' && square9 == 'O' || square2 == 'O' && square5 == 'O' && square8 == 'O')
		{
			gameOver = true;
			buildArea();
			cout << "Game Over! Player 2 won!";
		}
	}
}
void buildArea()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "-----------------------------------";
		cout << endl;
		for (j = 0; j < 4; j++)
		{
			if (i == 0 && j == 2)
			{
				cout << "     " << square7 << "    |     " << square8 << "     |     " << square9 << "     |";
				cout << endl;
			}
			if (i == 1 && j == 2)
			{
				cout << "     " << square4 << "    |     " << square5 << "     |     " << square6 << "     |";
				cout << endl;
			}
			if (i == 2 && j == 2)
			{
				cout << "     " << square1 << "    |     " << square2 << "     |     " << square3 << "     |";
				cout << endl;
			}
			cout << "          |           |           |";
			cout << endl;
		}
	}
	cout << "-----------------------------------";
	cout << endl;
}
