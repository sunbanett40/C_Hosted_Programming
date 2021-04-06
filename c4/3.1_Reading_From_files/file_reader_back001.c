#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    fp = fopen("lazy_doggo.txt", "r"); //Opens file for reading

    for (;;)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        printf("%c", fgetc(fp)); //reads value from file, prints value, and position along
    }
    fclose(fp);
}