/*
Project:    Higher or Lower
Author:     Joseph Butterworth
License:    This work is licensed under the Creative Commons Attribution-ShareAlike License.
            View this license at https://creativecommons.org/licenses/
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int prev_num = rand() % 11;
    for (;;)
    {
        int rand_num = rand() % 11; //thinks of number
        int input = 0;

        printf("Higher or lower than a %d (Enter 0 for higher and 1 for lower)\n", prev_num);
        scanf("%d", &input);

        if( (prev_num < rand_num) && (input == 1) ||
            (prev_num > rand_num) && (input == 0))
        {
            printf("Game over, the number was %d.", rand_num);
            break;
        }
        prev_num = rand_num;
    }
}