#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    if (pegs[0].compare(pegs[4]) == 0 &&  pegs[4].compare(pegs[8]) == 0 && pegs[8].compare(pegs[12]) && pegs[0].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[1].compare(pegs[5]) == 0 && pegs[5].compare(pegs[9]) == 0 && pegs[9].compare(pegs[13]) && pegs[1].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[2].compare(pegs[6]) == 0 && pegs[6].compare(pegs[10]) == 0 && pegs[10].compare(pegs[14]) && pegs[2].compare(" ") != 0)
    {
        return true;
    }
    else if (pegs[3].compare(pegs[7]) == 0 && pegs[7].compare(pegs[11]) == 0 && pegs[11].compare(pegs[15]) && pegs[3].compare(" ") != 0)
    {
        return true;
    }

}


bool TicTacToe4::check_row_win()
{
    if (pegs[0].compare(pegs[1]) == 0 &&  pegs[1].compare(pegs[2]) == 0 && pegs[2].compare(pegs[3]) && pegs[0].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[4].compare(pegs[5]) == 0 && pegs[5].compare(pegs[6]) == 0 && pegs[6].compare(pegs[7]) && pegs[4].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[8].compare(pegs[9]) == 0 && pegs[9].compare(pegs[10]) == 0 && pegs[10].compare(pegs[11]) && pegs[8].compare(" ") != 0)
    {
        return true;
    }
    else if (pegs[12].compare(pegs[13]) == 0 && pegs[13].compare(pegs[14]) == 0 && pegs[14].compare(pegs[15]) && pegs[12].compare(" ") != 0)
    {
        return true;
    }
}
/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/


bool TicTacToe4::check_diagnol_win()
{
    if (pegs[0].compare(pegs[5]) == 0 &&  pegs[5].compare(pegs[10]) == 0 && pegs[10].compare(pegs[15]) && pegs[0].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[3].compare(pegs[6]) == 0 && pegs[6].compare(pegs[9]) == 0 && pegs[9].compare(pegs[12]) && pegs[3].compare(" ") != 0)
    {
        return true;
    }
}
/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
