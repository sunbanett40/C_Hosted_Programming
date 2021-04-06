#include <stdio.h>
#include <ctype.h>

#define MAX_TERMINAL 200
#define max_text 10000

FILE *fp;
int alpha_array = 26;
const char *freq_samp = "file.txt";
const char *enc_text = "enciphered.txt";
int frequency[26];
float plot[26];

void calculateHistogram(const char *file, int *point, int offset);
void decipher(const char *c, char *p, const unsigned int offset);

int main()
{
    int 
    for (int offset = 0; offset < alpha_array; offset++)
    {

        for (int i = 0; i = < alpha_array; i++)
        {
            *(frequency + i) = 0;
            if (offset > 0)
            {
                calculateHistogram(enc_text, frequency, offset);
            }
            else
            {
                calculateHistogram(freq_samp, frequency, offset);
            }
        }
    }
    decipher(, , offset);
}

void calculateHistogram(const char *file, int *point, int offset)
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
        *(point + (int)letter + offset - 65) += 1; //add one to array position for letter
    }
    fclose(fp);
    int max_array = 1;
    for (int i = 0; i < alpha_array; i++)
    {
        if (frequency[i] > max_array)
        {
            max_array = frequency[i];
        }
    }
    for (int i = 0; i < alpha_array; i++)
    {
        frequency[i] = frequency / max_array;
    }
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

float compareFrequencies(float* normalizedDeciphered, float* sampleFreq)
{
    float output;
    for (int i=0; i<26; i++)
    {
        output += abs(normalizedDeciphered - sampleFreq);
    }
    return output / (float)26;
}