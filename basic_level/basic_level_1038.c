#include <stdio.h>

int main()
{
    int N, i, score, K;
    int count[101] = {0};

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &score);
        count[score]++;
    }

    scanf("%d", &K);
    scanf("%d", &score);
    printf("%d", count[score]);
    for (i = 1; i < K; i++)
    {
        scanf("%d", &score);
        printf(" %d", count[score]);
    }
    return 0;
}