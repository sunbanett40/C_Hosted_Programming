/* sine_plotter.c */

#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SUCCESS 0
#define pi 3.14159265358979

int main()
{
    uint32_t x = 0;         /*Declare x as fixed width unsigned variable, initialise equal to 0*/
    float y = 0;
    for (;;)                /*Endless loop*/
    {
        x++;                /*Increase x by 1*/
        printf("%d, ", x);  /*Print value of x to command line*/
        y = sin(x*pi/180);         /*calculate value of y*/
        printf("%lf\n", roundf(y * 1000) / 1000); /*Print value of y to command line*/
    }
    return SUCCESS;
}