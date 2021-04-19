#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h
#include "tic_tac_toe.h"
#include <vector>
#include<iostream>
using std::string;
using std::vector;

class TicTacToeManager 
{
friend std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager);

public:
    void save_game(TicTacToe b);

    void get_winner_total(int& o, int& x, int& t);

private:

    vector<TicTacToe> games;

    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count (string winner);
};

#endif