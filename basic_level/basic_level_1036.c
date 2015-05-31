#include <stdio.h>

int main()
{
    int N, row, i, j;
    char C;
    scanf("%d %c", &N, &C);
    row = (N + 1) / 2;
    for (i = 0; i < N; i++)
        printf("%c", C);
    printf("\n");
    for (i = 0; i < row - 2; i++)
    {
        printf("%c", C);
        for (j = 0; j < N - 2; j++)
            printf(" ");
        printf("%c\n", C);
    }
    for (i = 0; i < N; i++)
        printf("%c", C);
    printf("\n");
    return 0;
}