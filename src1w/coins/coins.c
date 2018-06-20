#include <cs50.h>
#include <stdio.h>

float GetPositiveFloat(void);

int main(void)
{
	float cost;
	int coins = 0;
	int change;

	cost = GetPositiveFloat();
	cost = cost * 100;
	change = (int)cost;
	
	while (change >= 25) {
		coins++;
		change = change - 25;
	}
	while (change >= 10) {
		coins++;
		change = change - 10;
	}
	while (change >= 5) {
		coins++;
		change = change - 5;
	}
	while (change >= 1) {
		coins++;
		change = change - 1;
	}

	printf("%i\n", coins);
}

float GetPositiveFloat(void) 
{
	float how;
	do
	{
		printf("How much change?: \n");
		how = GetFloat();
	}
	while (how <= 0);
	return how;
}