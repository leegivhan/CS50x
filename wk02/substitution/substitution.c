#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

// Gets key from user at command line
int main(int argc, string argv[])
{
    // verifies that there is only on argument
    if (argc != 2)
    {
        printf("Error: Must have one argument.\n");
        return 1;
    }
    // verifies that argument is 26 characters long
    if (strlen(argv[1]) != 26)
    {
        printf("Error: Argument must be 26 characters long.\n");
        return 1;
    }
    // verifies that all characters are alphabetic
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // terminates program if char in key is not alphabetic
        if (!isalpha(argv[1][i]))
        {
            printf("Error: Key must be only letters.\n");
            return 1;
        }
    }
    // verifies that there are no repeating characters (case-insensitive)
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // string s1 = argv[1][i];
        for (int j = 1; i < strlen(argv[1]); j++)
        {
            // string s2 = argv[1][j];
            if (argv[1][i] == argv[1][j])
            {
                printf("Error: Characters cannot repeat.\n");
                return 1;    
            }
            
        }
    }
}