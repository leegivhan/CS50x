#include <stdio.h>
#include <cs50.h>

// declare functions
double multiply_two_doubles(double a, double b);

int main(void) 
{
    // Get doubles from user
    double x = get_double("Enter first number: ");
    double y = get_double("Enter second number: ");

    // multiply numbers via function call
    double z = multiply_two_doubles(x, y);

    // Output the result
    printf("The sum of %f and %f is %f\n", x, y, z);
}

double multiply_two_doubles(double a, double b)
{
    return a * b;
}