#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name;
    //printf("Name: ");
    name = get_string();
    char lastChar = ' ';
    for(int i = 0, l = strlen(name); i < l; i++)
    {
        if(lastChar == ' ' && name[i] != ' ')
        {
            printf("%c", toupper(name[i]));
        }
        lastChar = name[i];
    }
    printf("\n");
}