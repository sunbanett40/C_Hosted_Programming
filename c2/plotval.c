/*plotval.*/

/*libraries*/
#include <stdio.h>
#include <stdint.h>
#include <math.h>

/*definitions*/
#define MAX_TERMINAL 120

/*plotval function*/
int plotval(float ploti)                                        /*Declare plotval function and plot input*/
{
    for (int i = 0; i <= roundf(ploti * MAX_TERMINAL); i++)     /*Loop till at proportion of the screen to sin value*/
    {
        printf(" ");
    }
    printf("*\n");                                              /*Mark with an asterix*/
}