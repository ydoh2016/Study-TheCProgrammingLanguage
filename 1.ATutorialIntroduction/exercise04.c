#include <stdio.h>

int main()
{
    float fahr;
    float celsius;
    int lower = -20;
    int upper = 300;
    int step = 20;

    fahr = lower;
    printf("celsius\t  fahr\n");
    while(fahr <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%7.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}