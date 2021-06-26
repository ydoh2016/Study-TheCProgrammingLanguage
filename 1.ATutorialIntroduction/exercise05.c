#include <stdio.h>

int main()
{
    float fahr;

    printf("fahr\tcelsius\n");
    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%4.0f\t%7.2f\n", fahr, (fahr - 32) * (5.0 / 9.0));
    }

    return 0;
}