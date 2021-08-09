#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int getNumLetters(string text);
int getNumWords(string text);
int getNumScentences(string text);
int getGradeLevel(int numLetters, int numScentences, int numWords);
void printGradeLevel(int gradeLevel);

int main(int argc, string argv[])
{
    string text = get_string("Text: ");
    
    int numLetters = getNumLetters(text);
    int numWords = getNumWords(text);
    int numScentences = getNumScentences(text);
    
    int gradeLevel = getGradeLevel(numLetters, numScentences, numWords);
    
    printGradeLevel(gradeLevel);
}

void printGradeLevel(int gradeLevel)
{
    if (gradeLevel <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (gradeLevel >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", gradeLevel);
    }
}

int getGradeLevel(int numLetters, int numScentences, int numWords)
{
    float S = (numScentences / (float)numWords) * 100;
    
    float L = (numLetters / (float)numWords) * 100;
    
    return round(0.0588 * L - 0.296 * S - 15.8);
}

int getNumLetters(string text)
{

    int letter_count = 0;
    
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
    }
    return letter_count;
}

int getNumWords(string text)
{
    int white_space = 1;
    
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            white_space++;
        }
    }
    return white_space;
}

int getNumScentences(string text)
{
    // initialize scentence count
    int scentence_count = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        // Checks for symbols indicating the end of a scentence
        if ((text[i] == '!') || (text[i] == '.') || (text[i] == '?'))
        {
            scentence_count++;
        }
    }
    return scentence_count;
}