#include <stdio.h>
#include <stdlib.h>

void passByValue(int i);
void passByReference(int *i);

int main()
{
    int tuna = 20;

    passByValue(tuna);
    printf("Passing by value, tuna is now %d\n", tuna);

    passByReference(&tuna);
    printf("Passing by reference, tuna is now %d\n", tuna);

    return 0;
}

void passByValue(int i)
{
    i = 99;
    return;
}

void passByReference(int *i)
{
    *i = 64;
    return;
}