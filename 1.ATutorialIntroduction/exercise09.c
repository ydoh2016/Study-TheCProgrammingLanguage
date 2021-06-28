#include <stdio.h>

int main()
{
    int c;
    int firstblank = 1;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            if(firstblank == 1)
            {
                putchar(c);
                firstblank = 0;
            }
        }
        else
        {
            putchar(c);
            firstblank = 1;
        }
    }
    
    return 0;
}