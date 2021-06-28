#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */

/*
 * test with
 *
   "Hello, World!
    I   like    C Programming.
    Jin likes   Teaching students."
 * 
 * should print 10
 */

int main()
{
    int c;
    int nl = 0;
    int nw = 0;
    int nc = 0;
    int state = OUT;

    while((c = getchar()) != EOF)
    {
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d", nl, nw, nc);

    return 0;
}