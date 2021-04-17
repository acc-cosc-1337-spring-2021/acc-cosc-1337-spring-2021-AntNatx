#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cout;
using std::cin;

int main() 
{
	// create an instance of tictactoe
	TicTacToe game;
	TicTacToeManager board;

	do
	{
		cin>>game;
	
	
    	cout<<game;
    
	
	} while (game.game_over() == false);
	
	cout<<board;
	
	
	return 0;
	
}