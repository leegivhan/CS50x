// includes
#include <cs50.h>
#include <stdio.h>

// declares functions
bool valid_triangle (float a, float b, float c);

int main(void)
{
    // Declare sides of triangle
    float first_side, second_side, third_side, two_sides;

    // Ask user for input
    do
    {
        first_side = get_float("Enter first side of triangle: ");
    }
    while (first_side <= 0);

    do
    {
        second_side = get_float("Enter second side of triangle: ");
    }
    while (second_side <= 0);

    do
    {
        third_side = get_float("Enter third side of triangle: ");
    }
    while (third_side <= 0);

    bool  answer = valid_triangle (first_side, second_side, third_side);
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