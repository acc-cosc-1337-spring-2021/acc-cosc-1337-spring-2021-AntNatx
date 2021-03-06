#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include<memory>

using std::unique_ptr;
using std::make_unique;
using std::cout;

//cpp

std::ostream& operator<<(std::ostream& out, TicTacToe& game)
{
    
    if (game.pegs.size() == 9)
    {
        for (std::size_t i = 1; i <= game.pegs.size(); i++)
        {
            if(i % 3 == 0)
            {
                out << game.pegs[i - 1];
                out << std::endl;
            }
            else
            {
                out << game.pegs[i - 1];
            }
        }
    }
    else if (game.pegs.size() == 16)
    {
        for (std::size_t i = 1; i <= game.pegs.size(); i++)
        {
            if(i % 4 == 0)
            {
                out << game.pegs[i - 1];
                out << std::endl;
            }
            else
            {
                out << game.pegs[i - 1];
            }
        }
    }

    out << std::endl;
    
    return out;

}
    

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    //declare variable
	string first_player;
    
    
	
	//prompt the user for first player
	std::cout<<"Player 1 enter a capital X or an O to select your choice: ";
	in>>first_player;
	if (first_player != "X" && first_player != "O")
	{
		cout<<"\n You did not enter a valid choice. Please enter an X or O: ";
		std::cin>>first_player;	
	}
	//start the game

	game.start_game(first_player);
	//marking the spots
	int position;

    do
    {
        cout<<"\nPlease enter a position to mark (1-9, or 16 if playing 4X4): ";
	    in>>position;
		
	    //input validation
	    if (position < 1 || position > 16)
	    {
		    cout<<"\nYou did not enter a valid number, Please enter a value between 1-9: ";
		    std::cin>>position;
	    }
        game.mark_board(position);
        
        cout<<game;
        
        cout<<"Next player, its your turn! \n";
    } while (game.game_over()== false);
    
	
	
    return in;
}


bool TicTacToe::game_over()
{
    if (this->check_row_win() == true)
    {
        this->set_winner();
        return true;
    }
    
    else if (this->check_column_win() == true)
    {
        this->set_winner();
        return true;
    }
    
    else if (this->check_diagnol_win() == true)
    {
        this->set_winner();
        return true;
    }
    
    else if (this->check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    
    else 
    {
        return false;
    }
}


void TicTacToe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
        clear_board();
    }

}

void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}

string TicTacToe::get_player()const 
{
    return player;
}


void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    
    else player = "X";
}

bool TicTacToe::check_board_full()
{
    for (size_t i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
        
    }
    return true;
}

void TicTacToe::clear_board()
{
     for (std::size_t i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
     
}
std::string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_column_win() const
{
    return false;
}

bool TicTacToe::check_row_win() const
{
    return false;
}

bool TicTacToe::check_diagnol_win() const
{   
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}


