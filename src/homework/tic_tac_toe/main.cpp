#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout;
using std::cin;

int main() 
{
	// create an instance of tictactoe manager
	TicTacToeManager manager;
	
	// variable controlling new games
	string prompt;
	
	//outer loop controlling new games
	do
	{
		//create an instance of tictactoe
		TicTacToe game;
		do
		{
			cin>>game;
	
	
    		cout<<game;
    
	
		} while (game.game_over() == false);
	
		cout<<" the winner is "<<game.get_winner();
	
		//overloaded tictactoemanager should display the total wins?
		cout<<manager;
		cout<<"\n Would you like to play again? press y or any other key to exit: ";
		cin>>prompt;
	
	} while (prompt == "y" || prompt == "Y");
	return 0;
	
}