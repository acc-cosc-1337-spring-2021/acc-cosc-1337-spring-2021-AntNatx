#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
using std::string;
#include <vector>
#include <iostream>
//h
class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);



public:

    TicTacToe(int size):pegs(size*size, " "){};
    TicTacToe(std::vector<string> p, string win)
    {
        pegs = p;
        winner = win;
    };//this will initialize some_vector to s*s elemeents of " "

    std::vector<string> get_pegs()const;

    bool game_over();

    void start_game(string first_player);

    void mark_board(int position);


    string get_player()const;

    //void display board deleted

    string get_winner() const;

protected:

    std::vector<std::string> pegs;

    virtual bool check_column_win()const;

    virtual bool check_row_win()const;

    virtual bool check_diagnol_win()const;

private:
    
    void set_winner();
    string winner;

    void set_next_player();
    string player;

    bool check_board_full();

    void clear_board();

};
#endif


