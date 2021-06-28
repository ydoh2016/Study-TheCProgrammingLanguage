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
    int state = OUT;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(state == IN)
                putchar('\n');
            state = OUT;
        }
        else
        {
            state = IN;
            putchar(c);
        }
    }
    
    return 0;
}