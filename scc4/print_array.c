/*
Project:    
Author:     Joseph Butterworth
License:    This work is licensed under the Creative Commons Attribution-ShareAlike License.
            View this license at https://creativecommons.org/licenses/
*/

#include <stdio.h>

int array[10];

void print_array(void);
void print_smallest(void);
void print_largest(void);
void position_smallest(void);
void position_largest(void);
void mean_array(void);

int main()
{
    printf("please input your 10 numbers.\n");
    scanf(" %d %d %d %d %d %d %d %d %d %d", 
            &array[0], &array[1], &array[2],
            &array[3], &array[4], &array[5],
            &array[6], &array[7], &array[8], &array[9]);

    print_array();
}

void print_array(void)
{
    printf("Your array is:\n");
    for(int i = 0; i < sizeof(array)/sizeof(*array); i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}