// Filename: getnum.cpp
// By: Carlo Sgro
// Date: 9/18/2020
// Description: This program demonstrates how getNum() can be used in a program.
//		It is similar to, but not identical to, the Walkthrough videos 
//		that were created in Fall 2022.

#include <stdio.h>


int getNum(void);


int main()
{
	int myNumber = 0;
	while (myNumber != -1)
	{
		printf("Enter a number (-1 to quit): ");
		myNumber = getNum();
		if (myNumber != -1)
		{
			printf("You entered %d\n\n", myNumber);
		}
	}

	return 0;
}



#pragma warning(disable: 4996)
int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: indent and brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	 * corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		 * the system, set number to -1 */
		number = -1;
	}
	return number;
}
