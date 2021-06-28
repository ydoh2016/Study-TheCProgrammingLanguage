#include <stdio.h>

int main()
{
    while(1) // use ctrl + c to exit the loop in runtime
    {
        if((getchar() != EOF) == 1)
        {
            printf("getchar() != EOF is 1\n");
        }
        else if((getchar() != EOF) == 0)
        {
            printf("getchar() != EOF is 0\n");
        }
        else
        {
            printf("getchar() != EOF is neither 0 or 1\n");
        }
    }

    return 0;
}