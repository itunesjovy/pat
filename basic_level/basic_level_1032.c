#include <stdio.h>

int main()
{
    int array[100001] = {0};
    int N, i, number, score;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &number, &score);
        array[number] += score;
    }
    number = 1;
    score = array[1];
    for (i = 2; i < N; i++)
    {
        if (array[i] > score)
        {
            number = i;
            score = array[i];
        }
    }
    printf("%d %d\n", number, score);
    return 0;
}