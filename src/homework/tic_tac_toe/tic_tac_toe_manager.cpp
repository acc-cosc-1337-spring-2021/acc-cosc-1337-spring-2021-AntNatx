#include "tic_tac_toe_manager.h"
using std::string;

TicTacToeManager::TicTacToeManager(TicTacToeData d)
: data{d}
{
    games = data.get_games();

    for(auto& game : games)
    {
        update_winner_count(game->get_winner());
    }
}

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
    out<<"\nGame History\n";

    for (auto& game : manager.games)
    {
        out<<*game;
    }

    out<<"\nX wins: "<<manager.x_win<<"\n";
    out<<"O wins: "<<manager.o_win<<"\n";
    out<<"Ties: "<<manager.ties<<"\n";

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

TicTacToeManager::~TicTacToeManager()
{
    std::cout<<"\n Save Games\n";
    data.save_games(games);
}