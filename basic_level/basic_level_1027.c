#include <stdio.h>

int main()
{
    int N, usedNum, i, j, k, l;
    char sand;
    scanf("%d %c", &N, &sand);
    usedNum = 1;
    i = 0;
    while (usedNum <= N)
    {
        i++;
        usedNum += (1 + 2 * i) * 2;
    }
    usedNum -= (1 + 2 * i) * 2;
    i--;

    for (j = i, k = i - j; j >= 0; j--, k++)
    {
        for (l = 0; l < k; l++)
            printf(" ");
        for (l = 0; l < (1+ 2 * j); l++)
            printf("%c", sand);
        printf("\n");
    }
    for (j = 1, k = i - j; j <= i; j++, k--)
    {
        for (l = 0; l < k; l++)
            printf(" ");
        for (l = 0; l < (1+ 2 * j); l++)
            printf("%c", sand);
        printf("\n");
    }
    printf("%d\n", N - usedNum);
    return 0;
}