#include <stdio.h>

int main()
{
    int array[1001][2];
    int coef, expo;

    int i = 0;
    while (scanf("%d %d", &coef, &expo) != EOF)
    {
        if (expo == 0)
            continue;
        else
        {
            array[i][0] = coef * expo;
            array[i][1] = expo - 1;
            i++;
        }
    }

    if (i == 0)
    {
        printf("0 0");
    }
    else
    {
        printf("%d %d", array[0][0], array[0][1]);
        for (int j = 1; j < i; j++)
            printf(" %d %d", array[j][0], array[j][1]);
    }
    return 0;
}