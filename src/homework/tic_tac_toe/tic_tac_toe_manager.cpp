#include"tic_tac_toe_manager.h"
#include<iostream>

TicTacToeManager::TicTacToeManager(TicTacToeData d): data{d}
{
    games = data.get_games();

    for(auto& game: games)
    {
        update_winner_count(game->get_winner());
    }
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;

    x = x_win;

    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto& game: manager.games)
    {
        out<<*game;
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

TicTacToeManager::~TicTacToeManager()
{
    std::cout<<"\n Save Games\n";
    data.save_games(games);
}