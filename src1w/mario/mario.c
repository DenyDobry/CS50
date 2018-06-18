#include <cs50.h>
#include <stdio.h>

int GetCorrectInt(void);

int main(void) {	
	int height;
	height = GetCorrectInt();

}

int GetCorrectInt(void) {
	int corr;
	do {
		printf("Enter height: ");
		corr = GetInt();
	}
	while (corr < 1 || corr > 24);
	return corr;
}