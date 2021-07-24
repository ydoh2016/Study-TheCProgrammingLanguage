#include <stdio.h>

#define MAXLINE 1000
#define n_column 5

void fold(char s[], int len, int n);

int main()
{
    char c;
    int i = 0;

    while((c = getchar() != EOF))
    {
        char s[MAXLINE];

        if(c != '\n')
        {
            s[i++] = c;
        }
        else
        {
            s[i] = '\0';
        }        

        fold(s, i, n_column);
    }

    return 0;
}

void fold(char s[], int len, int n)
{
    int last;
    int cur = 0;

    for(int i = 0; s[i] != '\0';)
    {
        for(int j = 0; (j < n) && s[i + j] != '\0'; ++j)
        {
            if(s[j] != ' ' && s[j] != '\t')
            {
                last = j;
            }
        }
        if(last == n - 1 && ((last + 1 < len) && (s[last + 1] != ' ') && (s[last + 1] != '\t')))
        {
            --last;
        }
        for(int j = 0; j < last; ++j)
        {
            putchar(s[i++]);
        }
        putchar('\n');
    }

    return;
}