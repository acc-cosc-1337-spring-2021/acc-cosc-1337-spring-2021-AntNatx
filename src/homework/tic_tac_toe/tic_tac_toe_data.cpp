//cpp
#include"tic_tac_toe_data.h"
#include<fstream>
#include<memory>


void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>> &games)
{
    std::ofstream out_file;
    out_file.open(file_name);

    if (out_file.is_open())
    {
        for(auto &game: games)//for each vector of TicTacToe
        {
                for (auto peg: game->get_pegs())//for each char in string
                {
                    out_file<<peg;//write char to file 
                }

                out_file<<game->get_winner()<<"\n";//write winner of game to file
        }
    }    
    out_file.close();
}

std::vector<std::unique_ptr<TicTacToe>>TicTacToeData::get_games()
{
    std::ifstream in_file;
    
    std::vector<std::unique_ptr<TicTacToe>> games;
    
    string line;//create a string line

    in_file.open(file_name);

    if (in_file.is_open())
    {
        while (std::getline(in_file, line))
        {
            std::vector<std::string> pegs;//create vector of string pegs

            for (std::size_t i = 0; i < (line.size()-1); i++) //for each ch in line -1
            {
                std::string ch (1,line[i]);

                pegs.push_back(ch); // add the string to the vector of pegs
            }

            std::string getTheWinner{line[line.size()-1]}; //last item in the vector of string   

            std::unique_ptr<TicTacToe> game;

            if (pegs.size() == 9)
            {
                game = std::make_unique<tictactoe3>(pegs, getTheWinner);
            }
            else if (pegs.size() == 16)
            {
                game = std::make_unique<TicTacToe4>(pegs, getTheWinner);
            }
            games.push_back(std::move(game));
        }
        
        in_file.close();
    } 
    
    return games;   
}