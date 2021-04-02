#include <string>
using std::string;
#include <vector>
#include <iostream>
//h
class TicTacToe
{
public:
    bool game_over();


    void start_game(string first_player);


    void mark_board(int position);


    string get_player()const;


    void display_board()const;

private:
    void set_next_player();
    string player;

    bool check_board_full();

    void clear_board();
    std::vector<string> pegs {9, ""};
};