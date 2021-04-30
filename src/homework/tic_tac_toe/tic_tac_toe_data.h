//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include"tic_tac_toe.h"
#include<vector>
#include<memory>


using std::vector;
using std::unique_ptr;

class TicTacToeData:public TicTacToe
{
    public:
        void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);


    private:

};




#endif