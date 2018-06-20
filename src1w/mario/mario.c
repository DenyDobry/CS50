#include <cs50.h>
#include <stdio.h>

int GetCorrectInt(void);

int main(void) {	
	int height; 
	int countString;
	int backCountString;
	int spaces;
	int sharps;

	height = GetCorrectInt();
	backCountString = height;
	for (countString = 1; countString <= height; countString++)
	{
		for (spaces = 1; spaces < backCountString; spaces++)
		{
			printf(" ");
		}
		for (sharps = 0; sharps <= countString; sharps++)
		{
			printf("#");
		}
		printf("\n");
		backCountString--;
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