#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<tic_tac_toe_3.h>
#include<memory>
#include<tic_tac_toe_4.h>
using std::cout;
using std::cin;
using std::make_unique;
using std::unique_ptr;

int main() 
{
	// create an instance of tictactoe manager
	TicTacToeManager manager;
	
	// variable controlling new games
	string prompt;
	unique_ptr<TicTacToe> game;
	//outer loop controlling new games
	do
	{
		int whichGame;
		cout<<"Would you like 3X3, or 4X4 Tic Tac Toe: ";
		cin>>whichGame;//ask user input number 
		//if 3
		if (whichGame == 3)
		{
			game = make_unique<tictactoe3>();

		}
	
		
		else if (whichGame == 4)
		{
			game = make_unique<TicTacToe4>();
			
		}
		//TicTacToe3 game;
		// else if 4
		//TicTacToe4 game;
		//else
		//cout error, invalid board size entered. Please try again
		// continue;
		// if game doesnt work, place cin game and cout game insinde if else statements
	 	do
		{
			cin>>*game;
	
	
    		cout<<*game;
    
	
		} while (game->game_over() == false);
	
		cout<<" the winner is "<<game->get_winner();
		manager.save_game(game);
	
		cout<<"\n Would you like to play again? press y or any other key to exit: ";
		cin>>prompt;
	
	} while (prompt == "y" || prompt == "Y");//create an instance of tictactoe
	cout<<"End of Game results:\n";
	cout<<manager;
}