#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Checking user input an argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Checking for an expected argument
    for (int i = 0; argv[1][i]; i++)
    {
        if (!isdigit(argv[1][i]) || atoi(argv[1]) < 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    //Initializing argv[1] as an integer
    int k = atoi(argv[1]);

    //Getting the users plaintext to encrypt
    string p = get_string("Plaintext:  ");
    printf("Ciphertext: ");

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        //Checking for lowercase letters
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            printf("%c", (((p[i] - 'a') + k) % 26) + 'a');
        }
        //Checking for uppercase letters
        else if (p[i] >= 'A' && p[i] <= 'Z')
        {
            printf("%c", (((p[i] - 'A') + k) % 26) + 'A');
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}
