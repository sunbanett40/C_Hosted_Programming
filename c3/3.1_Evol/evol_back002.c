// evol.c
// ELEC1201 Lab C3: Operators and Arrays
// Evolutionary Computing
// KPZ 2018, MIT License
//
//gcc F:\1201_Programming\c3\evol.c -lm -o evol

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

/*Definitions*/
#define EQUATION y = pow(x, 2) - 4
#define Y_TARGET 0.0
#define EPSILON 0.0001
#define POP_SIZE 100
#define MAX_GEN 10000
#define MUTATION_STRENGTH 0.1

void printheader(void);
float rnd(); // Random values 0.0 to 1.0
void initpop(float *pop, int size);
void offspring(float parent, float mutst, float *pop, int size);

/*Main code*/
int main()
{
    float population[POP_SIZE];
    int gen = 0;
    float best_ifit = FLT_MAX; // initialised with worst possible
    float best;
    float x, y;
    float ifit; // inverse fitness
    int i;

    printheader();

    int rand_seed; //
    printf("What seed do you want?\n");
    scanf("%i", &rand_seed);
    srand(rand_seed);

    initpop(population, POP_SIZE);

    while (best_ifit > EPSILON && gen < MAX_GEN)
    {

        for (i = 0; i < POP_SIZE; i++)
        {
            x = population[i];

            EQUATION; // y = f(x)

            ifit = fabs(y - Y_TARGET);

            printf("x= %f  =>  y=  %+f,    ifit = %f\n", x, y, ifit);

            // Is there a better one?
            if (ifit < best_ifit)
            {
                best_ifit = ifit;
                best = x;
            }
        }
        x = best;
        EQUATION; // y = f(x)

        printf("Generation %4d with best solution:  x= %f --> f(x)= %f\n\n",
               gen++, best, y);

        offspring(best, MUTATION_STRENGTH, population, POP_SIZE);
    }
}

void printheader() //Aesthetic
{
    printf("\n\n");
    printf("###############\n");
    printf("## Evolution ##\n");
    printf("###############\n");
    printf("\n\n");
}

// Returns a random value between 0.0 and 1.0
float rnd()
{
    return rand() / (float)RAND_MAX;
}

void initpop(float *pop, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(pop + i) = rnd();
    }
}

void offspring(float parent, float mutst, float *pop, int size)
{
    *pop = parent;
    //best (+ or -) rand() * MUT_STRENGTH
    for (int i = 1; i < size; i++)
    {
        float rand_mut = rnd() * mutst;
        if (rnd() < 0.5)
        {
            rand_mut = -rand_mut;
        }
        *(pop + i) = parent + rand_mut;
    }
    printf("offspring worked");
}