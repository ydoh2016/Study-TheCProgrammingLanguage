#include <stdio.h>

#define n_tab 8

int detab(int count, int n);

int main()
{
    char c;
    int count = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            count = -1;
        }
        if(c != '\t')
        {
            ++count;
            putchar(c);
        }
        else
        {
            count += detab(count, n_tab);
        }
    }

    return 0;
}

int detab(int count, int n)
{
    int spaces = 0;

    for(int i = count % n; i < n; ++i)
    {
        ++spaces;
        putchar(' ');
    }

    return spaces;
}