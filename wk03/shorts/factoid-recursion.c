#include <stdio.h>

int fact(int n);

int main(void)
{
    int factorial = 5;
    int answer = fact(factorial);

    printf("The factorial of %i is %i.\n", factorial, answer);
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n-1);
}