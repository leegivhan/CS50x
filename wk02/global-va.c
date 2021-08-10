#include <stdio.h>

float global = 0.5050;
void triple(void);

int main(void)
{
    triple();
    printf("%f\n", global);
}

void triple(void)
{
    // float global = 2.1;
    global *= 3;
}