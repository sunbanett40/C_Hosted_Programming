#include <stdio.h>

int main()
{
    printf("What size would you like your triangle?\n");

    int tr_size = 0;
    scanf("%d", &tr_size); //Read size of square

    for (int i = 0; i < tr_size; i++) //move down a row
    {
        for (int j = 0; j < tr_size - i; j++) //print so many blank space
        {
            printf(" ");
        }
        for (int j = 0; j < (2 * i) + 1; j++) // print so many marks 
        {
            printf("*");
        }
        printf("\n");
    }
}