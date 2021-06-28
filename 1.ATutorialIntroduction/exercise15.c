#include <stdio.h>

float fahr_to_cel(float fahr);

int main()
{
    float fahr;
    float celsius;
    int lower = 0;
    int upper = 300;
    int step = 20;

    fahr = lower;
    printf("fahr\tcelsius\n");
    while(fahr <= upper)
    {
        printf("%4.0f\t%7.2f\n", fahr, fahr_to_cel(fahr));
        fahr = fahr + step;
    }

    return 0;
}

float fahr_to_cel(float fahr)
{
    return (fahr - 32) * (5.0 / 9.0);
}