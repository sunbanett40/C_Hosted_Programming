/* sine_plotter.c */

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <time.h> 

#define SUCCESS 0
  
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
} 
  
int main() {
    int x = 0;
for(;;){
    x++;
    delay(1); 
    printf("%d\n", x);
}
    
    return SUCCESS;
}