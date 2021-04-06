#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define max_text 10000

void encipher(const char *p, char *c, const unsigned int offset);
void decipher(const char *c, char *p, const unsigned int offset);

int main()
{
    FILE *fp;
    fp = fopen("lazy_doggo.txt", "r"); //Opens file for reading
    char plain[max_text];
    char coded[max_text];
    int offset = 17;

    for (int i = 0;; i++)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        char text = toupper(fgetc(fp));
        plain[i] = (isalpha(text)== 1) ? text: ' ';
        printf("%c", plain[i]); //reads value from file, prints value, and position along
    }
    fclose(fp);
    printf("\n\n");

    encipher(plain, coded, offset);
    decipher(coded, plain, offset);
}

void encipher(const char *p, char *c, const unsigned int offset)
{
    for (int i = 0; i < strlen(p); i++)
    {
        if (isalpha(p[i]) != 1) //makes sure is a letter
        {
            c[i] = p[i];
            continue;
        }
        c[i] = (p[i] + offset) % 26 + 65;
        printf("%c", c[i]);
    }
    printf("\n\n");
}

void decipher(const char *c, char *p, const unsigned int offset)
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]) != 1) //makes sure is a letter
        {
            p[i] = c[i];
            printf("%c", p[i]);
            continue;
        }
        p[i] = (c[i] - offset) % 26 + 65;
        printf("%c", p[i]);
    }
    printf("\n");
}