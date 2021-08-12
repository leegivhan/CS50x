#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[]) 
{
	//checks if a letter repeats in string from command line argument
    // Take one letter
	for (int i = 0; i < strlen(argv[1]); i++)
	{
        // Compare that letter with every letter in the string
	    for (int j = i + 1; j < strlen(argv[1]); j++)
	    {
	        if (tolower(argv[1][i]) == tolower(argv[1][j]))
	        {
                printf("There is a repeat, ignoring case.\n");
	            return 1;
	        }
	    }
	}
    printf("No repeats.\n");
	return 0;
}