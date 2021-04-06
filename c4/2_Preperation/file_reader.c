#include <stdio.h>
 
int main()
{
    FILE *fp;
 
    fp = fopen("test.txt", "r");
    while (!feof(fp))
    {
        char letter = fgetc(fp);
        printf("%s", letter);
    }
    fclose(fp);
}