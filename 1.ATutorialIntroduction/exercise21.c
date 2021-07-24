#include <stdio.h>

#define n_tab 8

int entab(int count, int spaces, int n);

int main()
{
    char c;
    int count = 0;
    int spaces = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n' || c == '\t')
        {
            count = 0;
        }
        if(c != ' ' && c != '\t')
        {
            if(spaces != 0)
            {
                count += entab(count, spaces, n_tab);
                spaces = 0;
            }
            ++count;
            putchar(c);
        }
        else
        {
            if(c == '\t')
            {
                spaces += n_tab - ((count + spaces) % n_tab);
            }
            else
            {
                ++spaces;
            }
        }
    }

    return 0;
}

int entab(int count, int spaces, int n)
{
    for(int i = count; i < count + spaces;)
    {
        if(n - (i % n) <= spaces - (i - count))
        {
            putchar('\t');
            i += (n - (i % n));
        }
        else
        {
            putchar(' ');
            ++i;
        }
    }

    return spaces;
}