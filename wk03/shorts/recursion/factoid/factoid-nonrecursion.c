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
    int product = 1;
    while (n > 0)
    {
        product *= n;
        n--;
    }
    return product;
}