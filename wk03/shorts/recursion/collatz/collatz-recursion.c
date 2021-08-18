#include <stdio.h>

int collatz(int n);

int steps = 0;

int main(void)
{
    int number = 4;
    printf("The number %i takes %i steps to 1.\n", number, collatz(4));
    return 0;
}

int collatz(int n)
{
    // base case
    if (n == 1)
        return steps;
    steps++;
    // even numbers
    if (n % 2 == 0)
        return collatz(n/2);
    // odd numbers
    else
        return collatz((3*n) + 1);
}