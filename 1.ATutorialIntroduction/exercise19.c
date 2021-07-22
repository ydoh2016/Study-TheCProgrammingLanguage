#include <stdio.h>

#define MAXLINE 1000

int tcpl_getline(char line[], int maxline);
void reverse(char to[], char from[], int len);

int main()
{
    int len;
    char line[MAXLINE];


    while((len = tcpl_getline(line, MAXLINE)) > 0)
    {
        char reversed_line[MAXLINE];
        reverse(reversed_line, line, len);
        printf("%s", reversed_line);
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

void reverse(char to[], char from[], int len)
{
    int i;
    len -= 2;
    for(i = 0; len >= 0; ++i)
    {
        to[i] = from[(len--)];
    }
    to[i++] = '\n';
    to[i] = '\0';

    return;
}