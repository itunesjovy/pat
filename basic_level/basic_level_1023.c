#include <stdio.h>

int main()
{
    int input[10];
    int i = 0, j = 0;
    for(i = 0; i < 10; i++)
        scanf("%d", &input[i]);

    i = 1;
    while(input[i] == 0)
        i++;

    printf("%d", i);
    input[i]--;
    for(j = 0; j < input[0]; j++)
        printf("0");
    do
    {
        for(j = 0; j < input[i]; j++)
            printf("%d", i);
        i++;
    }while(i < 10);
    return 0;
}