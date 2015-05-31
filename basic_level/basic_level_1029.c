#include <stdio.h>

int main()
{
    char expect[81], real[81];
    char *p, *q;
    int flag[128] = {0};
    scanf("%s", expect);
    scanf("%s", real);
    p = expect;
    q = real;

    while (*p != '\0')
    {
        if (*p == *q)
            q++;
        else
        {
            if ((*p >= 'a') && (*p <= 'z'))
            {
                if (flag[*p - 32] == 0)
                {
                    printf("%c", *p - 32);
                    flag[*p - 32] = 1;
                }
            }
            else
            {
                if (flag[*p] == 0)
                {
                    printf("%c", *p);
                    flag[*p] = 1;
                }
            }
        }

        p++;
    }
    return 0;
}