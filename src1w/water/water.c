#include <cs50.h>
#include <stdio.h>

int main(void) {
	int minutes;
	int botels;

	printf("Please enter the number of minutes: ");
	minutes = GetInt();
	botels = 12 * minutes;
	printf("You will need %i bottles\n", botels);
}