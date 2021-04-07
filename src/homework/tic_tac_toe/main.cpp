#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;

int main() 
{
	// create an instance of tictactoe
	TicTacToe game;

	string first_player;
	//prompt the user for first player
	cout<<"Player 1 enter an X or an O to select your choice: \n";
	cin>>first_player;
	//start the game
	game.start_game (first_player);

	//condition for controlling loop 
	char prompt = 'y';
	while (prompt == 'y' || prompt == 'Y')
	{
		//marking the spots
		int position;
		cout<<"\nPlease enter a position to mark (1-9): \n";
		cin>>position;
		game.mark_board(position);
		
		//display the board
		game.display_board();
		if (game.game_over() == true)
		{
			cout<<"Game Over\n";
			prompt = 'n';
		}
		
		cout<<"Is next Player ready? Press Y or any other key to quit: \n";
		cin>>prompt;
		
	}
	

	return 0;
}