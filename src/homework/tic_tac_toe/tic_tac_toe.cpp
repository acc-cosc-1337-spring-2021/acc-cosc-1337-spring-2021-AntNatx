#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

//cpp

std::ostream& operator<<(std::ostream& out, TicTacToe& game)
{
    cout<<game.pegs[0]<<" | "<<game.pegs[1]<<" | "<<game.pegs[2]<<"\n";
    cout<<game.pegs[3]<<" | "<<game.pegs[4]<<" | "<<game.pegs[5]<<"\n";
    cout<<game.pegs[6]<<" | "<<game.pegs[7]<<" | "<<game.pegs[8]<<"\n";
    
    return out;

}
    

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    //declare variable
	string first_player;
    
    
	
	//prompt the user for first player
	std::cout<<"Player 1 enter a capital X or an O to select your choice: \n";
	in>>first_player;
	if (first_player != "X" && first_player != "O")
	{
		cout<<"\n You did not enter a valid choice. Please enter an X or O: ";
		std::cin>>first_player;	
	}
	//start the game

	game.start_game (first_player);
	//marking the spots
	int position;

    do
    {
        cout<<"\nPlease enter a position to mark (1-9): \n";
	    in>>position;
		
	    //input validation
	    if (position < 1 || position > 9)
	    {
		    cout<<"\n You did not enter a valid number, Please enter a value between 1-9: ";
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
    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    
    else if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    
    else if (check_diagnol_win() == true)
    {
        set_winner();
        return true;
    }
    
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    
    else return false;
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
    for (int i = 0; i < 9; i++)
    {
        if (pegs[i] == "")
        {
            return false;
        }
        
    }
    return true;
}

void TicTacToe::clear_board()
{
     for (int i = 0; i < 9; i++)
    {
        pegs[i] = "";
    }
     
}
string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
    {
        return true;
    }
    
    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
    {
        return true;
    }
    
    else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
    {
        return true;
    }
      
    else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
    {
        return true;
    }
    
    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
    {
        return true;
    }
    
    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
    {
        return true;
    }
    
    else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
    {
        return true;
    }
    
    else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
    {
        return true;
    }
      
    else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
    {
        return true;
    }
    
    else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
    {
        return true;
    }
    
    else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagnol_win()
{
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    
    else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        return true;
    }
      
    else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    
    else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    
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


