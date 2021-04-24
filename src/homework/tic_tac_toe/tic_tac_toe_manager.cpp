#include "tic_tac_toe_manager.h"
using std::string;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    games.push_back(move(b));

    update_winner_count(b->get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;

    x = x_win;

    t = ties;
}

std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager)
{
    for (size_t i = 0; i < manager.games.size(); i++)
    {
        out<<*manager.games[i];
    }
    return out;
    
}

void TicTacToeManager::update_winner_count (string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    
    else if (winner == "O")
    {
        o_win++;
    }
    
    else
    {
        ties++;
    }
}