#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
using std::cin;

int main() 
{
	// create an instance of tictactoe
	TicTacToe game;
	
	//declare variable
	string first_player;
	
	//outer loop of game
	char prompt = 'y';
	while (prompt == 'y' || prompt == 'Y')
	{
		//prompt the user for first player
		cout<<"Player 1 enter a capital X or an O to select your choice: \n";
		cin>>first_player;
		while (first_player != "X" && first_player != "O")
		{
			cout<<"\n You did not enter a valid choice. PLease enter an X or O: ";
			cin>>first_player;
		}
		
	
		//start the game
		game.start_game (first_player);

		//marking the spots
		int position;
		cout<<"\nPlease enter a position to mark (1-9): \n";
		cin>>position;
		
		//input validation
		if (position < 1 || position > 9)
		{
			cout<<"\n You did not enter a valid number, Please enter a value between 1-9: ";
			cin>>position;
		}
		
		game.mark_board(position);
		
		//display the board
		game.display_board();
		if (game.game_over() == true)
		{
			cout<<"Game Over\n";
			cout<<game.get_winner()<< "Is the winner";
			prompt = 'n';
		}
		//condition controlled loop
		cout<<"Is next Player ready? Press Y or any other key to quit: \n";
		cin>>prompt;
		
	}
	

	return 0;
}