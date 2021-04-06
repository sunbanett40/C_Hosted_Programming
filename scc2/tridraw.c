//tridraw, Larry Tang, 16/10/20
//SCC.110 practical 2

#include <stdio.h>
#include <math.h>

int main()
{
    //get triangle size
    puts("How tall would you like your triangle to be?");
    int triSize;
    scanf("%i", &triSize);

    //begin triangle print
    for (int i=0; i<triSize; i++)
    {
        //print the buffer spaces.
        int bufferMax = (1 + 2*(triSize-1)) / 2;
        for (int b=0; b< bufferMax - i; b++) { printf(" "); }

        //print the stars
        for (int j=0; j<(1 + 2*(i)); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}