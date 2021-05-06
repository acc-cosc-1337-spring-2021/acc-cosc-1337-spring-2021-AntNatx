#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
using std::string;
#include <vector>
#include <memory>
//h
class TicTacToe
{
public:

    TicTacToe(const std::vector<std::string>& p, const std::string& win){pegs = p; winner=win; };
    TicTacToe(int size):pegs(size*size, " "){};
    

    std::vector<std::string> get_pegs()const{ return pegs; };

    bool game_over();

    void start_game(std::string first_player);

    void mark_board(int position);


    std::string get_player() const;

    std::string get_winner() const;

    friend std::ostream& operator<<(std::ostream& out, TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:

    std::vector<std::string> pegs;

    virtual bool check_column_win() const;

    virtual bool check_row_win() const;

    virtual bool check_diagnol_win() const;

private:
    std::string winner;
    std::string player;
    
    void set_winner();

    void set_next_player();

    void clear_board();

    bool check_board_full();

};

#endif


