#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_4.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_data.h"
#include<iostream>

using std::cout;
using std::cin;
using std::make_unique;
using std::string;

int main() 
{
	TicTacToeData data;
	
	unique_ptr<TicTacToe>game;
	
	TicTacToeManager manager(data);
	
	string prompt;
	
	do
	{
		int whichGame =0;

		while (whichGame < 3 || whichGame > 4)
		{
			cout<<"Would you like 3X3, or 4X4 Tic Tac Toe: ";
			cin>>whichGame;
		}
		
		int o = 0;
		int x = 0;
		int t= 0;

		if (whichGame == 3)
		{
			game = make_unique<tictactoe3>();

		}
	
		
		else 
		{
			game = make_unique<TicTacToe4>();
		}
		
	 	do
		{
			cin>>*game;
	
	
    		cout<<*game;
    
	
		} while (game->game_over() == false);
	
		cout<<"The winner is "<<game->get_winner();
		manager.save_game(game);
		manager.get_winner_total(o, x, t);
		cout<<"\nO wins: "<<o<<"\nX wins: "<<x<<"\nTies: "<<t;
		cout<<"\n Would you like to play again? press y or any other key to exit: ";
		cin>>prompt;
	
	} while (prompt == "y" || prompt == "Y");
	
	cout<<manager;
}