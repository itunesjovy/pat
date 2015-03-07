#include <stdio.h>
#include <malloc.h>

int main()
{
    char* decimal = (char*)malloc(10000);
    char* exponent = (char*)malloc(4);
    int i = 0, j = 0, k = 0, expo = 0;
    char integer, tmp, flag;

    if (getchar() == '-')
        printf("-");

    integer = getchar() ;
    getchar();

    while ((tmp = getchar()) != 'E')
    {
        decimal[i++] = tmp;
    }

    flag = getchar();
    while ((tmp = getchar()) != '\n')
    {
        exponent[j++] = tmp;
    }

    for (k = 0; k < j; k++)
    {
        expo = expo * 10 + (exponent[k] - '0');
    }

    if (flag == '-')
    {
        printf("0.");
        while (--expo)
            printf("0");

        printf("%c", integer);
        for (k = 0; k < i; k++)
            printf("%c", decimal[k]);
    }
    else
    {
        printf("%c", integer);
        if (expo >= i)
        {
            for (k = 0; k < i; k++)
                printf("%c", decimal[k]);
            for (; k < expo; k++)
                printf("0");
        }
        else
        {
            for (k = 0; k < expo; k++)
                printf("%c", decimal[k]);
            printf(".");
            for (; k < i; k++)
                printf("%c", decimal[k]);
        }
    }
 
    return 0;
}