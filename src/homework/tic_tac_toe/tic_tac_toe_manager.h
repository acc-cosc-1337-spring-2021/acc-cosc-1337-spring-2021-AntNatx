#ifndef tic_tac_toe_manager_h
#define tic_tac_toe_manager_h
#include "tic_tac_toe.h"
#include"tic_tac_toe_data.h"
#include<vector>
#include<iostream>
#include<memory>
#include<utility>

using std::string;
using std::vector;
using std::unique_ptr;

class TicTacToeManager 
{
public:
    void save_game(unique_ptr<TicTacToe>& b);

    friend std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager);

    TicTacToeManager(TicTacToeData data);

    void get_winner_total(int& o, int& x, int& t);

    ~TicTacToeManager();
private:

    vector<unique_ptr<TicTacToe>> games;

    TicTacToeData data;

    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count (std::string winner);
};

#endif