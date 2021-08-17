#include <stdio.h>

int math_func(int low, int high);

int main(void)
{
    printf("%i\n", math_func(2, 4));
}

int math_func(int low, int high)
{
    return low + (high - 1) / 2;
}