#ifndef TIC_TAC_TOE3_H
#define TIC_TAC_TOE3_H
#include "tic_tac_toe.h"

class tictactoe3:public TicTacToe
{   
    
public:
    tictactoe3():TicTacToe(3){};
    tictactoe3(std::vector<string>p, string winner):TicTacToe(pegs, winner){}
    

private:
    bool check_column_win();

    bool check_row_win();

    bool check_diagnol_win();

};
#endif