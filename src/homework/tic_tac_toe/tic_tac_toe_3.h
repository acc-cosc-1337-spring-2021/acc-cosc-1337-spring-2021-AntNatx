#ifndef TIC_TAC_TOE3_H
#define TIC_TAC_TOE3_H
#include "tic_tac_toe.h"

class tictactoe3:public TicTacToe
{   
    
public:
    tictactoe3():TicTacToe(3){};
    tictactoe3(const std::vector<std::string>& p, const std::string& w):TicTacToe(p, w){};
    

private:
    bool check_column_win() const override;

    bool check_row_win() const override;

    bool check_diagnol_win() const override;

};

#endif