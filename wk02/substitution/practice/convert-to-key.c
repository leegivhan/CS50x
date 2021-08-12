#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // gets text from user
    string text = get_string("plainttext: ");

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