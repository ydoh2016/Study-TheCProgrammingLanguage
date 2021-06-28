#include <stdio.h>

#define MAX_LENGTH  26
#define VERTICAL    1   /* 1 : show histogram in vertical
                         * 0 : show histogram in horizontal */

/* input should end with newline and EOF */

int main()
{
    int c;
    int length[MAX_LENGTH + 1] = {0,};
    int max_fq = 0;

    while((c = getchar()) != EOF)
    {
        if(c >= 'A' && c <= 'Z')
            c = c - ('A' - 'a');
        if(c >= 'a' && c <= 'z')
            if(++length[c - 'a'] > max_fq)
                ++max_fq;
    }
    if(VERTICAL)
    {
        for(int i = max_fq; i > 0; --i)
        {
            for(int j = 1; j <= MAX_LENGTH; ++j)
            {
                if(length[j] >= i)
                {
                    printf(" @ ");
                }
                else if(length[j] != 0)
                    printf("   ");
            }
            printf("\n");
        }
        for(int i = 1; i <= MAX_LENGTH; ++i)
        {
            if(length[i] > 0)
                printf("_%c_", i + 'a');
        }
        printf("\n");
    }
    else
    {
        for(int i = 1; i <= MAX_LENGTH; ++i)
        {
            if(length[i] == 0) continue;
            printf("%c : ", i + 'a');
            for(int j = 0; j < length[i]; ++j)
            {
                printf("@");
            }
            printf("\n");
        }
    }

    return 0;
}