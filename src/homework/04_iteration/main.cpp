//write include statements
#include "dna.h"
#include <string>
#include <iostream>
//write using statements
using std::string;
using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	std::string dna;
	int decision;
	char keepGoing = 'y';

	while (keepGoing == 'y' || keepGoing == 'Y')

	{
	
		cout<<"Please enter 1 for get GC content, or 2 for Get DNA Complement: \n";
		cin>>decision;

		if (decision == 1)
		{
			cout<<"Please enter a DNA string: \n";
			cin>>dna;
			cout<<"the GC content is: "<< get_gc_content(dna)<<"\n";

			cout<<"Would you like to run a different test? Enter Y or any other key to exit: \n";
			cin>>keepGoing;
		}
		else if (decision == 2)
		{
			cout<<"Please enter a DNA string: \n";
			cin>>dna;
			cout<<"The DNA complement is: "<<get_dna_complement(dna)<<"\n";
			cout<<"Would you like to run a different test? Enter Y or any other key to exit: \n";
			cin>>keepGoing;
		}
		else{
			cout<<"You have entered an invalid selection.\n";
			cout<<"Would you like to run a different test? Enter Y or any other key to exit: \n";
			cin>>keepGoing;
		}
	}
	
	return 0;
}