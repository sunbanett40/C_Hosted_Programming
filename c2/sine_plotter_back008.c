/* sine_plotter.c */

#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SUCCESS 0
#define pi 3.14159265358979
#define FREQ 5
#define MAX_TERMINAL 120

int plotval(float);
int main()
{
    uint32_t x = 0; /*Declare x as fixed width unsigned variable, initialise equal to 0*/
    float y = 0;
    for (;;) /*Endless loop*/
    {
        x++;                                    /*Increase x by 1*/
        printf("%8.0d, ", x);                   /*Print value of x to command line*/
        y = (sin(FREQ * x * pi / 180) + 1) / 2; /*calculate value of y*/
        printf("%0.2f:", y);                    /*Print value of y to command line*/
        plotval(y);
    }
    return SUCCESS;
}

int plotval(float ploti)
{
    for (int i = 0; i <= roundf(ploti * MAX_TERMINAL); i++)
    {
        printf(" ");
    }
    printf("*\n");
}