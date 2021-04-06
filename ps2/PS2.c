#include <stdio.h>

double u1 = 0;
double u2 = -1;
double v1, v2;
int m1 = 1;
long long int m2 = 100000000000000;
unsigned long long int collisions = 0;

void block_collision(void);
void wall_collision(void);

int main()
{
    while (u1 > u2)
    {
        block_collision();

        if (v1 < 0)
        {
            wall_collision();
        }

        //update new initial velocities
        u1 = v1;
        u2 = v2;
    }

    printf("The number of collisions is: %llu\n", collisions);
}

void block_collision(void)
{
    v1 = (u1 * (m1 - m2) + 2 * m2 * u2) / (m1 + m2);
    v2 = (u2 * (m2 - m1) + 2 * m1 * u1) / (m1 + m2);
    collisions++;
}

void wall_collision(void)
{
    v1 *= -1;
    collisions++;
}