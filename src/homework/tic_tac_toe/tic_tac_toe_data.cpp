//cpp
#include"tic_tac_toe_data.h"
#include<fstream>
using std::make_unique;


void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream out_file;
    out_file.open(file_name);//open file

    if (out_file.is_open())
    {
        for(auto&game : games)//for each vector of TicTacToe
        {
                for (auto& peg : game->get_pegs())//for each char in string
                {
                    out_file<<peg;//write char to file 
                }

            out_file<<game->get_winner();//write winner of game to file
            out_file<<"\n";
        }
    }    
    out_file.close();
}

std::vector<std::unique_ptr<TicTacToe>>TicTacToeData::get_games()
{
    std::ifstream in_file;
    
    vector<unique_ptr<TicTacToe>> boards;
    
    string line;//create a string line

    in_file.open(file_name);

    if (in_file.is_open())
    {
        while (std::getline(in_file, line))
        {
            vector<string> pegs;//create vector of string pegs

            for (size_t ch = 0; ch < (line.size()-1); ch++) //for each ch in line -1
            {
                string createAstring (1,line[ch]);

                pegs.push_back(createAstring); // add the string to the vector of pegs
            }

            string getTheWinner{line[line.size()-1]}; //last item in the vector of string   

            unique_ptr<TicTacToe> board;

            if (pegs.size() == 9)
            {
                board = std::make_unique<tictactoe3>(pegs, winner);//winner private variable but inherited class should still have access?
            }
            else if (pegs.size() == 16)
            {
                board = std::make_unique<TicTacToe4>(pegs, winner);
            }
            boards.push_back(std::move(board));
        }
        
        in_file.close();
    } 
    
    return boards;   
}