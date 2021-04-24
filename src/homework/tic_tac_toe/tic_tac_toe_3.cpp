#include"tic_tac_toe_3.h"
/*class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool tictactoe3::check_column_win()
{
    
    if (pegs[0].compare(pegs[3]) == 0 &&  pegs[3].compare(pegs[6]) == 0 && pegs[0].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[1].compare(pegs[4]) == 0 && pegs[4].compare(pegs[7]) == 0 && pegs[1].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[2].compare(pegs[5]) == 0 && pegs[5].compare(pegs[8]) == 0 && pegs[2].compare(" ") != 0)
    {
        return true;
    }
}

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool tictactoe3::check_row_win ()
{
    if (pegs[0].compare(pegs[1]) == 0 && pegs[1].compare(pegs[2]) == 0 && pegs[0].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[3].compare(pegs[4]) == 0 && pegs[4].compare(pegs[5]) == 0 && pegs[3].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[6].compare(pegs[7]) == 0 && pegs[7].compare(pegs[8]) == 0 && pegs[0].compare(" ") != 0)
    {
        return true;
    }
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool tictactoe3::check_diagnol_win()
{
    if (pegs[0].compare(pegs[4]) == 0 && pegs[4].compare(pegs[5]) == 0 && pegs[0].compare(" ") != 0)
    {
        return true;
    }
    
    else if (pegs[2].compare(pegs[4]) == 0 && pegs[4].compare(pegs[6]) == 0 && pegs[2].compare(" ") != 0)
    {
        return true;
    }
}