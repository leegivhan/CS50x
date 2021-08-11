#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    // printf("Success 2 arguments!\n");
    // printf("%s\n", argv[1]);

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // Program terminates if command line argument is not a decimal digit
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: enter a numeric key\n");
            return 1;
        }
    }

    // cast datatype from string to int
    int int_input = atoi(argv[1]);

    // Gets text from user
    string text = get_string("plaintext: ");

    // encrypts message
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            printf("%c", text[i] + 1);
        }
    }
    printf("\n");
    // printf("%i", int_input);

    // if (isalpha(argv[1][i]))
    
    
}