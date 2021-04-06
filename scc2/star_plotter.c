#include <stdio.h>
#include <stdint.h>

void plotTri(int st_size, int spaces, int asterix);
void plotInv(int st_size, int spaces, int asterix);

int main()
{
    printf("How pointy would you like your star?\n");

    int st_size = 0;
    scanf("%d", &st_size); //Read size of square
    st_size++;

    printf("\x1B[33m"); //Colour solution from David Guyon on StackOverflow 33 = yellow

    plotTri(st_size, 2, 0);
    plotInv(st_size, 1, 2);
    plotTri(st_size, 1, 2);
    plotInv(st_size, 2, 0);
    
    printf("\x1B[39m"); //Colour solution from David Guyon on StackOverflow 39 = default
}

void plotTri(int st_size, int spaces, int asterix)
{
    for (int i = 0; i <= st_size; i++) //move down a row
    {
        for (int j = 0; j < spaces * st_size - i; j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < (2 * i) + 1 + asterix * st_size; j++) // print so many marks
        {
            printf(" *");
        }
        printf("\n");
    }
}

void plotInv(int st_size, int spaces, int asterix)
{
    for (int i = st_size; i >= 0; i--) //move down a row
    {
        for (int j = 0; j < (st_size - i); j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < ((2 * i) + 2 * st_size + 1); j++) // print so many marks
        {
            printf(" *");
        }
        printf("\n");
    }
}