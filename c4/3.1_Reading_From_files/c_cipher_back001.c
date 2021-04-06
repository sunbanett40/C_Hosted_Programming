#include <stdio.h>
#include <ctype.h>

#define max_text 10000;

FILE *fp;
int alpha_array = 26;
const char *filename = "lazy_doggo.txt";
const unsigned int offset = 3;
char plain[max_text];
char coded[max_text];

void encipher(const char *p, char *c, const unsigned int offset);
void decipher(const char *c, char *p, const unsigned int offset);

int main()
{
    fp = fopen(filename, "r"); //Opens file for reading

    for (int i = 0;; i++)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        *(plain + i) = fgetc(fp);  //reads value from file, prints value, and position along
        printf("%c", (plain + i)); //reads value from file, prints value, and position along
    }
    for (int i = 0; i < max_text; i++)
    {
        *(plain + i) = 0;
        *(coded + i) = 0;
    }
    fclose(fp);
    encipher(plain, coded, offset);
    decipher(coded, plain, offset);
}

void encipher(const char *p, char *c, const unsigned int offset)
{
    for (int i = 0;; i++)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        *(c + i) = *(p + i + offset); //reads value from file, prints value, and position along
        printf("%c", (c + i));        //reads value from file, prints value, and position along
    }
}
void decipher(const char *c, char *p, const unsigned int offset)
{
    for (int i = 0;; i++)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        *(p + i) = *(c + i - offset); //reads value from file, prints value, and position along
        printf("%c", (p + i));        //reads value from file, prints value, and position along
    }
}