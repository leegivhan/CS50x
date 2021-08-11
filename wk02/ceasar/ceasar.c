#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// gets the key from user at command line
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    // printf("Success 2 arguments!\n");
    // printf("%s\n", argv[1]);

    // Verifies that key is an integer
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        // Terminates program if key is not an integer
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./ceasar key\n");
            return 1;
        }
    }

    // converts key from string to number
    int int_input = atoi(argv[1]);

    // prompts user for plaintext
    string text = get_string("plaintext: ");

    // printf("cyphertext: ");

    // encypher plaintext
    for (int i = 0; i < strlen(text); i++)
    {
        // Encrypts alphabetical character
        if (isalpha(text[i]))
        {
            // Preserves lowercase
            if(islower(text[i]))
            {
                // converts to alphabetic index
                int alpha_index = text[i] - 97;
                // encrypts by key
                int encrypt = (alpha_index + int_input) % 26;
                // converts back to ascii value
                char back_to_ascii = encrypt + 97;
                printf("%c", back_to_ascii); 
            }
            // preserves uppercase
            if(isupper(text[i]))
            {
                int alpha_index = text[i] - 65;
                int encrypt = (alpha_index + int_input) % 26;
                char back_to_ascii = encrypt + 65;
                printf("%c", back_to_ascii); 
            }
               
        }
        // Prints non alphabetical character as is
        if (!isalpha(text[i]))
        {
            printf("%c", text[i]);
        }    
        // // Encrypts alphabetical character
        // if (isalpha(text[i]))
        //     {
        //         printf("%c", (text[i] + int_input) % 26);    
        //     }
        //     // Prints non alphabetical character as is
        //     if (!isalpha(text[i]))
        //     {
        //         printf("%c", text[i]);
        //     }  
        // if (islower(text[i]))
        // {
        //     printf("%c", islower(text[i]) + int_input);
        // }
        // if (isupper(text[i]))
        // {
        //     printf("%c", isupper(text[i]) + int_input);
        // }
    }
    printf("\n");
    // printf("%i", int_input);

    // if (isalpha(argv[1][i]))
    
    
}