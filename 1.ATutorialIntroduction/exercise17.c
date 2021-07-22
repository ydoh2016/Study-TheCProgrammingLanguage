#include <stdio.h>

#define MAXLINE 1000
#define LONGERTHAN 5

int tcpl_getline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while((len = tcpl_getline(line, MAXLINE)) > 0)
    {
        if(len > LONGERTHAN)
        {
            printf("%s", line);
            char c;
        }
    }

    return 0;
}

 int tcpl_getline(char s[], int lim)
{
    int c;
    int i;

    for(i = 0; (c = getchar()) != EOF && c!= '\n'; ++i)
    {
        s[i] = c;
    }
    if(c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    
    return i;
}