#include <stdio.h>
#include <ctype.h>

#define max_text 10000

FILE *fp;
int offset = 3;
const char *filename = "lazy_doggo.txt";

void encipher(const char *p, char *c, const unsigned int offset);
void decipher(const char *c, char *p, const unsigned int offset);

int main()
{
    char plain[max_text];
    char coded[max_text];
    for (int i = 0; i < max_text; i++)
    {
        *(plain + i) = 0;
        *(coded + i) = 0;
    }

    for (int i;;i++)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        *(plain + i) = fgetc(fp);

        printf("%c", (plain + i)); //reads value from file, prints value, and position along
    }
    fclose(fp);

    encipher(plain, coded, offset);
    decipher(coded, plain, offset);
}

void encipher(const char *p, char *c, const unsigned int offset)
{
 printf("\n");
}

void decipher(const char *c, char *p, const unsigned int offset)
{
    printf("\n");
}
