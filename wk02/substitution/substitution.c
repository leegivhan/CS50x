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
        for (int j = i + 1; j < strlen(argv[1]); j++)
        {
            if (tolower(argv[1][i]) == tolower(argv[1][j]))
            {
                printf("No repeating characters allowed.\n");
                return 1;
            }
        }
    }
    // gets text from user
    string text = get_string("Plaintext: ");
    
    printf("ciphertext: ");
    // for each character in the plaintext input
    for (int i = 0; i < strlen(text); i++)
    {
        // If it is an alphabetic character
        if (isalpha(text[i]))
        {
            // If character is lowercase
            if (islower(text[i]))
            {
                // Convert character to its alphabetic index
                int alpha_index = text[i] - 97;
                // Print the character at that alpha_index
                printf("%c", tolower(argv[1][alpha_index]));
            }
            // If character is uppercase
            if (isupper(text[i]))
            {
                // Convert character to its alphabetic index
                int alpha_index = text[i] - 65;
                // Print plaintext character at that alpha_index
                printf("%c", toupper(argv[1][alpha_index]));
            }
        }
        // Leave non-alphabetic characters as-is, printing them.
        if (!isalpha(text[i]))
        {
            printf("%c", text[i]);
        }
    }
    // print a new line at end of ciphered text
    printf("\n");
}