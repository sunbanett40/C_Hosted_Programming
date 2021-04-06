#include <stdio.h>

int main()
{
    printf("What size would you like your square?\n");

    int sq_size = 0;
    scanf("%d", &sq_size); //Read size of square

    for (int i = 0; i < sq_size; i++) //print so many across and so many down
    {
        for (int j = 0; j < sq_size; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}