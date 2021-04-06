/* sine_plotter.c */

#include <stdio.h>
#include <stdint.h>
#include <math.h>

#define SUCCESS 0
  
int main() {
   uint32_t x = 0;          /*Declare x as fixed width unsigned variable, initialise equal to 0*/
for(;;){                    /*Endless loop*/
    x++;                    /*Increase x by 1*/
    printf("%d\n", x);      /*Print value of x to command line*/
}
    return SUCCESS;
}