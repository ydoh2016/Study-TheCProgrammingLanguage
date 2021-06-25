#include <stdio.h>

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
        celsius = (fahr - 32) * (5.0 / 9.0);
        printf("%4.0f\t%7.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}