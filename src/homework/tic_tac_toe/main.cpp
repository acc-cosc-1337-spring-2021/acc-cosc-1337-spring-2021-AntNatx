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
using std::string;

int main() 
{
	// create an instance of tictactoe manager
	TicTacToeData data;
	
	unique_ptr<TicTacToe>game;
	
	TicTacToeManager manager(data);
	
	// variable controlling new games
	string prompt;
	
	//outer loop controlling new games
	do
	{
		int whichGame;
		cout<<"Would you like 3X3, or 4X4 Tic Tac Toe: ";
		cin>>whichGame;
		int o = 0;
		int x = 0;
		int t= 0;
		//ask user input number 
		//if 3
		if (whichGame == 3)
		{
			game = make_unique<tictactoe3>();

		}
	
		
		else if (whichGame == 4)
		{
			game = make_unique<TicTacToe4>();
			
		}
	 	do
		{
			cin>>*game;
	
	
    		cout<<*game;
    
	
		} while (game->game_over() == false);
	
		cout<<" the winner is "<<game->get_winner();
		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		cout<<"\n Would you like to play again? press y or any other key to exit: ";
		cin>>prompt;
	
	} while (prompt == "y" || prompt == "Y");
	
	cout<<manager;
}