#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int hash;
    do
    {
        hash = get_int("Enter a number between 1 and 8: ");
    }
    while (hash < 1 || hash > 8);
    // Rows
    for (int i = 0; i < hash; i++)
    {

        // Spaces
        for (int space = 0; space < hash - i - 1; space++)
        {
            printf(" ");
        }

        //Columns
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
