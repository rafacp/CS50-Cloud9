#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int length = get_int();
    printf("Bottles: %i\n", length * 12);
}