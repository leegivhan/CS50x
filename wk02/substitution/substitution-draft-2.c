#include <stdio.h> // for printf
#include <cs50.h> // for get_string
#include <string.h> // for strlen
#include <ctype.h> // for tolower, islower, toupper, isupper, isalpha

bool validateKey();
bool verifyKeyOnlyContainsLetters();
bool checkIfKeyContainsAllUniqueCharacters();
string convertToCipherText(string plaintext);

string key;

// Gets key from user at command line
int main(int argc, string argv[])
{
    // verifies that there is only on argument
    if (argc != 2)
    {
        printf("Error: Must have one argument.\n");
        return 1;
    }

    // Assigns key from command line to variable 'key'
    key = argv[1];

    // Checks if function validateKey returns false. See line 43 for function.
    if (!validateKey())
    {
        return 1;
    }

    // gets text from user
    string plaintext = get_string("Plaintext: ");

    // prints ciphertext
    printf("ciphertext: %s\n", convertToCipherText(plaintext)); // See line 97 for function

    // returns 0 to exit program successfully.
    return 0;
}

// Performs various checks to ensure key is valid.
bool validateKey()
{
    if (!verifyKeyOnlyContainsLetters()) // See line 67.
    {
        printf("Error: Key must be only letters.\n");
            return false;
    }
    
    if (strlen(key) != 26) // Esures argument is 26 characters long.
    {
        printf("Error: Argument must be exactly 26 characters long.\n");
        return false;
    }

    if (!checkIfKeyContainsAllUniqueCharacters()) // See line 79.
    {
        printf("No repeating characters allowed.\n");
        return false;
    }

    // If all tests pass, result is assigned to true and returned.
    return true;
}

bool verifyKeyOnlyContainsLetters()
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
    }
    return true;
}

bool checkIfKeyContainsAllUniqueCharacters()
{
    // Takes a letter starting from the beginning of the key.
    for (int i = 0; i < strlen(key); i++) 
    {
        // Looks at all the letters following that letter.
        for (int j = i + 1; j < strlen(key); j++) 
        {
            // If a duplicate is found, false is returned.
            if (tolower(key[i]) == tolower(key[j]))
            {
                return false;
            }
        }
    }
    return true;
}   

string convertToCipherText(string plaintext)
{
    string ciphertext = plaintext;

    // For each character in the plaintext input.
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // If plaintext char is an alphabetic character.
        if (isalpha(plaintext[i]))
        {
            // Checks if character is lowercase.
            if (islower(plaintext[i]))
            {
                // Converts character to its alphabetic index (see asciichart.com).
                // replaces plaintext char with ciphertext char from corresponding key index.
                ciphertext[i] = tolower(key[plaintext[i] - 97]); 
            }
            // Same as previous but for uppercase.
            if (isupper(plaintext[i]))
            {
                ciphertext[i] = toupper(key[plaintext[i] - 65]);
            }
        }

        // If block to leave punctuation.
        if (!isalpha(plaintext[i]))
        {
            ciphertext[i] = plaintext[i];
        }
    }
    return ciphertext;
}