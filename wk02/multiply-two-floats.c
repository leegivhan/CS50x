#include <stdio.h>
#include <cs50.h>

// declare functions
float multiply_two_floats(float a, float b);

int main(void) 
{
    // Get floats from user
    float x = get_float("Enter first number: ");
    float y = get_float("Enter second number: ");

    // multiply numbers via function call
    float z = multiply_two_floats(x, y);

    // Output the result
    printf("The sum of %f and %f is %f\n", x, y, z);
}

float multiply_two_floats(float a, float b)
{
    float sum = a * b;
    return sum;
}