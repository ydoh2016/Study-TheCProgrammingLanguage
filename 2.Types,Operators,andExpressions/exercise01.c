#include <stdio.h>
#include <limits.h>
#include <float.h>

void print_range(char type[], char min[], char max[]);

int main()
{
    print_range("signed char", "SCHAR_MIN", "SCHAR_MAX");

    return 0;
}

void print_range(char type[], char min[], char max[])
{
    printf("[%s] ranges from [%s] [%s]\n", type, min, max);

    return;
}