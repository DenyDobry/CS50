#include <cs50.h>
#include <stdio.h>

int GetCorrectInt(void);

int main(void) {	
	int height; // Variable of the given height
	int countString; //line number counter
	int backCountString; //reverse row counter
	int spaces; //variable for drawing spaces
	int sharps; //variable for drawing grids

	height = GetCorrectInt(); //check the correctness of the entered data
	backCountString = height; //give the reciprocal counter the highest point
	for (countString = 1; countString <= height; countString++) //run a loop on each line
	{
		for (spaces = 1; spaces < backCountString; spaces++) //run a loop of drawing spaces
		{
			printf(" ");
		}
		for (sharps = 0; sharps <= countString; sharps++) //run a loop of drawing grids
		{
			printf("#");
		}
		printf("\n"); //move the line
		backCountString--; //subtracts a drawn line
	}

}

int GetCorrectInt(void) 
{
	int corr;
	do {
		printf("Enter height: ");
		corr = GetInt();
	}
	while (corr < 1 || corr > 23);
	return corr;
}