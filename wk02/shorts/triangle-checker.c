// includes
#include <cs50.h>
#include <stdio.h>

// declares functions
bool valid_triangle (float a, float b, float c);

int main(void)
{

    // Get user input
    float first_side = get_float("Enter first side of triangle: ");
    float second_side = get_float("Enter second side of triangle: ");
    float third_side = get_float("Enter third side of triangle: ");

    // Check if triangle is valid via function call
    bool  answer = valid_triangle(first_side, second_side, third_side);

    // Tells user if triangle is valid
    if (answer == 0)
    {
        printf("This is not a triangle\n");
    }
    if (answer == 1)
    {
        printf("This is a triangle\n");
    }
}

bool valid_triangle (float a, float b, float c)
{
    // check for all positive sides
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    // check that sum of any two sides is greater than third
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return false;
    }

    // if we passed both tests, we're good!
    return true;
}