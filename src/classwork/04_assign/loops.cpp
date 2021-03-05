#include "loops.h"//cpp

int factorial(int num )
{   int total;
    int factor = 1; 
    int accum = 1; 
    
    do 
    {   
        total = factor * accum;
        accum++;
        /* code */
    }
    while (accum <= num);
    
    return total;
}