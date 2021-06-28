#include <stdio.h>

#define MAX_LENGTH  255
#define VERTICAL    1   /* 1 : show histogram in vertical
                         * 0 : show histogram in horizontal */

/* input should end with newline and EOF */

int main()
{
    int c;
    int length[MAX_LENGTH + 1] = {0,};
    int count = 0;
    int max_fq = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(count > 0 && count <= MAX_LENGTH)
            {
                if(++length[count] > max_fq)
                    ++max_fq;
            }
            count = 0;
        }
        else if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            ++count;
        }
    }
    if(VERTICAL)
    {
        for(int i = max_fq; i > 0; --i)
        {
            for(int j = 1; j <= MAX_LENGTH; ++j)
            {
                if(length[j] >= i)
                {
                    printf("   @ ");
                }
                else if(length[j] != 0)
                    printf("     ");
            }
            printf("\n");
        }
        for(int i = 1; i <= MAX_LENGTH; ++i)
        {
            if(length[i] > 0)
                printf("_%3d_", i);
        }
        printf("\n");
    }
    else
    {
        for(int i = 1; i <= MAX_LENGTH; ++i)
        {
            if(length[i] == 0) continue;
            printf("%3d : ", i);
            for(int j = 0; j < length[i]; ++j)
            {
                printf("@");
            }
            printf("\n");
        }
    }

    return 0;
}