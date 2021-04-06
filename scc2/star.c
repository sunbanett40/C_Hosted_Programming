#include <stdio.h>
#include <stdint.h>

#define FORE_COL "\x1B[33m" /*Colour solution from David Guyon on StackOverflow*/
#define REST_COL "\x1B[39m" /*0=black, 1=red, 2=green, 3=yellow, 4=blue, 5=magenta, 6=cyan, 7=white*/

int main()
{
    printf("What size would you like your star?\n");

    int st_size = 0;
    scanf("%d", &st_size); //Read size of square
    st_size++;

    for (int i = 0; i <= st_size; i++) //move down a row
    {
        for (int j = 0; j < (2*st_size - i); j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < (2 * i) + 1; j++) // print so many marks
        {
            printf(FORE_COL " *");
        }
        printf(REST_COL "\n");
    }
    for (int i = st_size; i >= 0; i--) //move down a row
    {
        for (int j = 0; j < (st_size - i); j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < ((2 * i) + 2 * st_size + 1); j++) // print so many marks
        {
            printf(FORE_COL " *");
        }
        printf(REST_COL "\n");
    }
    for (int i = 0; i <= st_size; i++) //move down a row
    {
        for (int j = 0; j < (st_size - i); j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < ((2 * i) + 2 * st_size + 1); j++) // print so many marks
        {
            printf(FORE_COL " *");
        }
        printf(REST_COL "\n");
    }
    for (int i = st_size; i >= 0; i--) //move down a row
  {
        for (int j = 0; j < (2*st_size - i); j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < (2 * i) + 1; j++) // print so many marks
        {
            printf(FORE_COL " *");
        }
        printf(REST_COL "\n");
    }
}