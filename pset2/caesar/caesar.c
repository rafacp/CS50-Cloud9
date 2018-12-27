#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    int key = (atoi(argv[1]) %26);
    printf("plaintext:  ");
    string plaintext = get_string();
    int length = strlen(plaintext);
    char ciphertext[length];
    //string ciphertext[length];
    
    for(int i = 0; i < length; i++)
    {
        int c = plaintext[i];
        int shiftedLetter;
        if(c >= 65 && c <= 90)
        {
            shiftedLetter = c + key;
            if(shiftedLetter > 90)
            {
                shiftedLetter -= 26;
            }
        }
        else if(c >= 97 && c <=122)
        {
            shiftedLetter = c + key;
            if(shiftedLetter > 122)
            {
                shiftedLetter -= 26;
            }
        }
        else
        {
            shiftedLetter = plaintext[i];
        }
        
        ciphertext[i] = shiftedLetter;
    }
    printf("ciphertext: ");
    for(int j =0;j<length;j++)
    {
        printf("%c", ciphertext[j]);
    }
    printf("\n");
}