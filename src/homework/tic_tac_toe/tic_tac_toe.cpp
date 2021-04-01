#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

//cpp

bool TicTacToe::game_over()
{
    int checkFullVal = check_board_full();
    return checkFullVal;
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

string TicTacToe::get_player()
{
    return player;
}

void TicTacToe::display_board()
{   
   
}

void TicTacToe::set_next_player()
{
    if (player == "X" )
    {
        player = "O";
    }
    else player = "X";
}

bool TicTacToe::check_board_full()
{
    for (int i = 0; i < 9; i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
        return true;
    }
    
    
}

void TicTacToe::clear_board()
{
     for (int i = 0; i < 9; i++)
    {
        pegs[i] = " ";
    }
     
}