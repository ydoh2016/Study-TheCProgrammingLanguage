#include <stdio.h>

#define MAXLINE 5

int tcpl_getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = tcpl_getline(line, MAXLINE)) > 0)
    {
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    
    if(max > 0)
    {
        printf("length : %d\ntext : %s\n", max, longest);
    }

    return 0;
}

int tcpl_getline(char s[], int lim)
{
    int c;
    int i;

    for(i = 0; (c = getchar()) != EOF && c!= '\n'; ++i)
    {
        if(i < lim - 1)
        {
            s[i] = c;
        }
    }
    if(c == '\n')
    {
        if(i < lim - 1)
        {
            s[i] = c;
        }
    }
    if(i < lim - 1)
    {
        s[i] = '\0';
    }
    else
    {
        s[lim - 1] = '\0';
    }
    
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }

    return;
}