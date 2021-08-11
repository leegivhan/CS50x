// includes
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // instantiation syntax
    bool truthtable[3] = { false, true, true };

    // individual element syntax
    bool truthtable[3];
    truthtable[0] = false;
    truthtable[1] = true;
    truthtable[2] = true;

    // prints a certain element
    printf("%i", truthtable[0]);
}