#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

string s;

int main(int argc, string argv[])
{
    if ( argc != 2)
    {
        return 1;
    }
    if ( atoi(argv[1]) == 0 )
    {
        return 1;
    }
    int k = atoi(argv[1]);
    printf ("Введите строку: ");
    s = GetString();
    int ch;
    
    for(int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]) != false)
        {
            if (isupper(s[i]))
            {
                ch = (int)s[i];
                ch = ch + k;
                if (ch > 90)
                {
                    ch = (ch - 26);
                    putchar(ch);
                }
                else
                {
                    putchar(ch);
                }
            }
            if (islower(s[i]))
            {
                ch = (int)s[i];
                ch = ch + k;
                if (ch > 122)
                {
                    ch = (ch - 26);
                    putchar(ch);
                }
                else
                {
                    putchar(ch);
                }
            }
        }
        else
        {
            putchar(s[i]);
        }
        
    }
    printf("\n");

    return 0;
}
