#include "dna.h"
#include <string>

using std::string;



double get_gc_content(const string& dna)
{
    
    
    double gAndc = 0;

    for (std::size_t count = 0; count < dna.size(); count++)
    {   
        if (dna [count] == 'G' || dna [count] == 'C')
        gAndc = gAndc + 1;

    }   
    return gAndc / dna.size();
}
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/


std::string get_reverse_string(string dna)
{
    string reverseDna;
    
    for (int count = (dna.size() - 1); count >= 0; count -- )
    {
        reverseDna.push_back( dna[count] );
    }

    return reverseDna;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_dna_complement(string dna)
{
    string reverseDNa = get_reverse_string(dna);

    for (std::size_t count = 0; count < dna.size(); count ++ )
    {
        if (reverseDNa[count] == 'A')
        {
            reverseDNa[count] == 'T';
        }
    
        else if (reverseDNa[count] == 'T')
        {
            reverseDNa[count] == 'A';
        }

        else if (reverseDNa[count] == 'C')
        {
            reverseDNa[count] == 'G';
        }

        else {reverseDNa[count] == 'C';
        }
    }
    
    return reverseDNa;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

