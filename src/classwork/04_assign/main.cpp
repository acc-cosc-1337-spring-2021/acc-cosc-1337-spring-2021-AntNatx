//write includes statements
#include "loops.h"
#include <iostream>

//write using statements for cin and cout
using std::cout; 
using std::cin;


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{	
	int num;
	int total;
	char choice;
	do
	{
		cout <<"Enter a number netween 1 and 10: ", '\n';
		cin>>num;
		
		while (num >= 1 && num <= 10)
		{
			cout<<"The factorial of your number is " , total = factorial(num), '\n';
		}

		cout<<"Would you like to do another number, enter y for yes or n to exit: ";

	} 
	while (choice == 'y' || choice == 'Y' );
	
	return 0;
}