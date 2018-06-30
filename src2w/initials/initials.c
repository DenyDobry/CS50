#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define IN 1;
#define OUT 0;

string s;

int main(int argc, char const *argv[])
{
    s = GetString();  
    for(int i = 0; i < strlen(s); i++)
    { 
        if (i == 0 && s[i] != ' ')
        {
            printf("%c", toupper(s[i]));
        }
        
        if (i > 0 && s[i - 1] == ' ') 
        {
            printf("%c", toupper(s[i]));
        }
        
    }
    printf("\n");
    return 0;
}
