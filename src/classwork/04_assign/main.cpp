//write includes statements
#include "loops.h"
#include <iostream>
#include "loops.cpp"

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
	char choice = 'y';
	do
	{
		cout <<"Enter a number netween 1 and 10: ", '\n';
		cin>>num;
		if (num < 1 && num > 10)
			{
			cout<<"Not a valid number";
			}

		total = factorial(num);
		cout<<"The factorial of your number is "<<total;

		cout<<"\nWould you like to do another number, enter y for yes or n to exit: ";
		cin>>choice;
		

	} 
	while (choice == 'y' || choice == 'Y');
	
	
	return 0;
}