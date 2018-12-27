#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while( height < 0 || height > 23);
    
    for (int i= 0; i < height; i++) 
    {
        for(int n= 0; n < height * 2 + 2; n++)
        {
            if((n < height-i-1) || (n == height) || (n == height+1) || (n > height+i+2))
            {
                printf(" ");
            }else{
                printf("#");
            }
        }
        printf("\n");
    }
}
