#include <stdio.h>
#include <ctype.h>

#define MAX_TERMINAL 200

FILE *fp;
int alpha_array = 26;
const char *filename = "file.txt";
int frequency[26];
float plot[26];

void calculateHistogram(const char *file, int *point);
void printHistogram(const int array[]);
void graphHistogram(const int array[]);

int main()
{
    for (int i = 0; i < alpha_array; i++)
    {
        *(frequency + i) = 0;
    }
    calculateHistogram(filename, frequency);
    printHistogram(frequency);
}

void calculateHistogram(const char *file, int *point)
{
    fp = fopen(file, "r"); //Opens file for reading

    for (;;)
    {
        if (feof(fp)) //Makes sure it is not end of the file
        {
            break;
        }
        char letter = toupper(fgetc(fp)); //reads value from file, prints value, and position along
        if (isalpha(letter) != 1)         //makes sure is a letter
        {
            continue;
        }
        *(point + (int)letter - 65) += 1; //add one to array position for letter
    }
    fclose(fp);
}

void printHistogram(const int array[])
{
    for (int i = 0; i < alpha_array; i++)
    {
        printf("%c = %i\n", (char)(i+65), *(frequency + i));
    }
}