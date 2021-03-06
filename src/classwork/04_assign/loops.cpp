#include "loops.h"//cpp

int factorial(int num )
{   
    int total;
    int factor = 1; 
    int accum = 1; 
    
    while (accum <= num)
    {
        total = factor * accum;
        accum++;
    }
    
    return total;
}