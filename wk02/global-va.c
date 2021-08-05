#include <stdio.h>

float global = 0.5050;
// float triple(float x);

int main(void)
{
    // void triple();
    global = triple(global);
    printf("%f\n", global);
}

void triple(void)
{
    global *= 3;
}