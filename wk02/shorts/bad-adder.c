// includes
#include <stdio.h>
#include <cs50.h>

// declare function
int add_two_ints(int a, int b);

int main(void)
{
    // Get numbers from user
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");
    // Call function
    int z = add_two_ints(x, y);

    // prints answer
    printf("The sum of %i and %i is %i\n", x, y, z);
}

int add_two_ints(int a, int b)
{
    int sum = 0;
    if (a > 0)
        for(int i = 0; i < a; sum++, i++);
    else
        for(int i = a; i < 0; sum--, i++);
    if(b > 0)
        for(int i = 0; i < b; sum++, i++);
    else
        for(int i = b; i < 0; sum--, i++);
    return sum;
}