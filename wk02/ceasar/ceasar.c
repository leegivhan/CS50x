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
    printf("Success 2 arguments!\n");
    // printf("%s\n", argv[1]);

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: enter a numeric key\n");
            return 1;
        }
    }
    // cast datatype from string to int
    int int_input = atoi(argv[1]);
    // printf("%i", int_input);

    // if (isalpha(argv[1][i]))
    // string text = get_string("plaintext: ")
    
}