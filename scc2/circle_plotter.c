#include <stdio.h>
#include <math.h>

int main()
{
    printf("What radius would you like your circle?\n");

    int rad = 0;
    scanf("%d", &rad); //Read size of square

    for (int i = 0; i <= 2 * rad; i++) //move down a row
    {
        float x = pow(pow(rad, 2) - pow(i - rad, 2), 0.5);
        
        for (int j = 0; j < rad - round(x); j++) //print so many blank space
        {
            printf("  ");
        }
        for (int j = 0; j < 2*round(x); j++) // print so many marks
        {
            printf("* ");
        }
        printf("\n");
    }
}