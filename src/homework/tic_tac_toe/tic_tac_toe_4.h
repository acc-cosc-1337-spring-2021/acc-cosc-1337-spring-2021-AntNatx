#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4
#include"tic_tac_toe.h"

class TicTacToe4: public TicTacToe
{
    public:
        TicTacToe4(const std::vector<std::string>& p, std::string& w):TicTacToe(p, w){};
        TicTacToe4() : TicTacToe(4){};
        

    private:
        bool check_column_win() const override;

        bool check_row_win() const override;

        bool check_diagnol_win() const override;
};
#endif
//h
