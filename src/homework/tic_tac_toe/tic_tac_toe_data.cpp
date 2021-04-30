//cpp
#include"tic_tac_toe_data.h"
#include<fstream>


void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    std::ofstream out_file;
    out_file.open("TicTacToe_Winner");//open file
    
    for (int i = 0; i < games.size() ; i++)//for each vector of TicTacToe
    {
        for (auto i = 0; i < TicTacToe->win[i]; i++)//for each char in string
        {
            out_file<<*games[i];//write char to file 
        }

        out_file<<get_winner()<<"\n";//write winner of game to file
        
    }    
    out_file.close();
}

std::vector<std::unique_ptr<TicTacToe>>TicTacToeData::get_games()
{
    std::ifstream in_file;
    
    vector<unique_ptr<TicTacToe>> boards;
    
    in_file.open("TicTacToe_Winner");

    if (in_file.is_open())
    {
        string line;//create a string line

        while (in_file>>line)
        {
            vector<string> pegs;//create vector of string pegs

            for (int ch = 0; ch < line.size()-1; ch++) //for each ch in line -1
            {
                string createAstring (1,line[ch]);    
            }
            
            pegs = createAstring;//add the string to the vector of pegs
        }
        
    }
    


    
}