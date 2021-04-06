#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    /* TODO */
    resistor,
    voltage,
    current
} CompType;

typedef struct
{
    /* TODO */
    char *name;
    unsigned int n1;
    unsigned int n2;
    double value;
    CompType type;
} Component;

int main()
{
    FILE *fp;
    Component p;

    fp = fopen("example1.txt", "r");

    fscanf(fp, "%s %u %u %lf", p.name, &p.n1, &p.n2, &p.value);

    printf("Read String1 |%s|\n", p.name);
    printf("Read String2 |%u|\n", &p.n1);
    printf("Read String3 |%u|\n", &p.n2);
    printf("Read Integer |%lf|\n", &p.value);

    fclose(fp);

    return (0);
}