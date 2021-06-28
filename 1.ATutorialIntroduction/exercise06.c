#include <stdio.h>

int main()
{
    int c;
    int isboolean = 1;

    while(c = getchar() != EOF) // use ctrl + c to exit the loop in runtime
    {
        if(c == 1 || c == 0)
        {
            isboolean = 1;
        }
        else
        {
            isboolean = 0;
        }
    }
    if(isboolean == 1)
        printf("getchar() != EOF is 0 or 1\n");
    else
        printf("getchar() != EOF is not 0 or 1\n");
    return 0;
}