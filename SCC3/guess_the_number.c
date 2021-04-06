/*
Project:    Guess the Number
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
    int rand_num = rand() % 11; //thinks of number
 
    printf("I've thought of a number between 0 and 10\nEnter your guess...\n");
 
    for (;;)
    {
        int guess = 0;
        scanf("%d", &guess);
 
        if (guess < rand_num)
        {
            printf("higher\n");
        }
        if (guess > rand_num)
        {
            printf("lower\n");
        }
        if (guess == rand_num)
        {
            printf("Well done the number I thought of was %d.\n", rand_num);
            break;
        }
    }
}