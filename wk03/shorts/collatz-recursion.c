#include <stdio.h>

int collatz(int n);

// int main(void)
// {
//     int positive_integer = 1;
//     int steps = collatz(positive_integer);
//     printf("It took %i step(s) to get to 1.\n", steps);
//     return 0;
// }

int collatz(int n)
{
    if (n == 1)
    {
        return 1;
    }
    /* exit case after doing checks so it won't return null 
    which is void data type */
    return 0;
}