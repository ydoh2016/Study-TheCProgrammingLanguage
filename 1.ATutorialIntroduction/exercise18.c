#include <stdio.h>

#define MAXLINE 5

int tcpl_getline(char line[], int maxline);
void copy(char to[], char from[], int lim);

int main()
{
    int t;
    char line[MAXLINE];
    char no_trailing[MAXLINE];

    while((t = tcpl_getline(line, MAXLINE)) >= -1)
    {
        if(t > -1)
        {
            if(t > 0)
            {
                copy(no_trailing, line, t);
                printf("%s", no_trailing);
            }  
            else
            {
                printf("%s", line);
            }
        }
    }

    return 0;
}

int tcpl_getline(char s[], int lim)
{
    int c;
    int i;
    int t = -1;

    for(i = 0; (i < lim - 1) &&(c = getchar()) != EOF && c!= '\n'; ++i)
    {
        s[i] = c;
        if((c == ' ') || (c == '\t'))
        {
            if(t < 1)
            {
                t = i;
            }
        }
        else
        {
            t = 0;
        }
    }
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    
    return t;
}

void copy(char to[], char from[], int lim)
{
    int i = 0;

    while((i < lim) && (to[i] = from[i]) != '\0')
    {
        ++i;
    }
    to[i] = '\0';

    return;
}