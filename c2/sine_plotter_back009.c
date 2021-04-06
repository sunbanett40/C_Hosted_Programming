/* sine_plotter.c */

/*Libraries*/
#include <stdio.h>
#include <stdint.h>
#include <math.h>

/*Definitions*/
#define SUCCESS 0
#define pi 3.14159265358979
#define FREQ 8
#define MAX_TERMINAL 120
int plotval(float);

/*Main code*/
int main()
{
    uint32_t x = 0;                             /*Declare x as fixed width unsigned variable, initialise equal to 0*/
    float y = 0;
    for (;;)                                    /*Endless loop*/
    {
        x++;                                    /*Increase x by 1*/
        printf("(%8.0d, ", x);                   /*Print value of x to command line*/
        y = (sin(FREQ * x * pi / 180) + 1) / 2; /*calculate value of y*/
        printf("%0.2f):", y);                    /*Print value of y to command line*/
        if (x % 10 == 0)                        /*If multiple of 10 ad tick*/
        {
            printf("_");
        }
        else                                    /*Otherwise add space, so function is aligned*/
        {
            printf(" ");
        }
        plotval(y);                             /*Call Plotval*/
    }
    return SUCCESS;
}

/*plotval function*/
int plotval(float ploti)                        /*Declare plotval function and plot input*/
{
    for (int i = 0; i <= roundf(ploti * MAX_TERMINAL); i++) /*Loop till at proportion of the screen to sin value*/
    {
        printf(" ");
    }
    printf("*\n");                              /*Mark with an asterix*/
}