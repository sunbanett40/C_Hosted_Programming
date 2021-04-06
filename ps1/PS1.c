#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = 2;

    if (a != b) //if a and b are different
    {
        if (a) //if a is non zero print A
        {
            printf("A");
        }
        else if (a = b)     //set a to the value of b and if a is now non zero print A
        {
            printf("B");
        }
        else               //otherwise print C 
        {
            printf("C");
        }
    }
    if (a && c) //if a and c are both non zero then print AC
    {
        printf("AC");
    }
    else    //otherwise print !
    {
        printf("!");
    }
    return 0;
}