#include <stdio.h>

int main()
{
    int c;
    int nb = 0; // nums of blanks
    int nt = 0; // nums of tabs
    int nl = 0; // nums of newlines

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            ++nb;
        else if(c == '\t')
            ++nt;
        else if(c == '\n')
            ++nl;
    }
    printf("%d\n", nb + nt + nl);

    return 0;
}