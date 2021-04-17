#include "loops.h"//cpp

int factorial(int num )
{ 
    int factor = 1; 
    int accum = 1; 
    
    while (accum <= num)
    {
        factor = factor * accum;
        accum++;
    }
    
    return factor;
}