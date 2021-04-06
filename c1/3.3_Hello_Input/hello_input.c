/* hello-input.c */
/* Ask for input. */

#include <stdio.h>

#define SUCCESS 0
#define NAME_BUFFSIZE 1

int main()
{
    char name[NAME_BUFFSIZE];

    printf("What is your name?  ");
    scanf("%s", name);
    printf("Hello %s!\n", name);
    return SUCCESS;
}