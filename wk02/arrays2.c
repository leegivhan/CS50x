// includes
#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int size = 100;
    int values[size];

    int the_value = 1;

    for (int i = 0; i < size; i++, the_value++)
    {
        values[i] = the_value;
        printf("%i\n", values[i]);
    }
}