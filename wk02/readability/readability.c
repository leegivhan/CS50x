// Takes a text and determines its reading level
// includes
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// returns number of letters in string.
int count_letters(string letters);

// returns number of words in string
int count_words(string words);

// 

int main(void)
{
    // prompts user for text
    string text = get_string("Text: ");
    
    // gets letter count via letter_count function
    int letter_count = count_letters(text);
    
    // gets word count via word_count function
    int word_count = count_words(text);
    
    // prints number of letters in text
    printf("%i letter(s)\n", letter_count);
    
    // prints number of words in text
    printf("%i word(s)\n", word_count);
}

int count_letters(string letters)
{
    // number of letters count
    int letter_count = 0;
    
    for (int i = 0, len = strlen(letters); i < len; i++)
    {
        if (isalpha(letters[i]))
        {
            letter_count++;
        }
    }
    return letter_count;
}

int count_words(string words)
{
    // number of white space characters
    int white_space = 1;
    
    for (int i = 0, len = strlen(words); i < len; i++)
    {
        if (isspace(words[i]))
        {
            white_space++;
        }
    }
    return white_space;
}
