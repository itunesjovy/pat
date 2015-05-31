#include <stdio.h>

int main()
{
    char a[100][19];
    int b[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int N;
    int i = 0, j = 0, sum = 0, flag = 0, global_flag = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
            scanf("%s", a[i]);

    for (i = 0; i < N; i++)
    {
        sum = 0;
        flag = 0;
        for (j = 0; j < 17; j++)
        {
            if ((a[i][j] < '0') || (a[i][j] > '9'))
            {
                flag = 1;
                break;
            }
            else
                sum += (a[i][j] - '0') * b[j];
        }

        if ((flag == 1) || (a[i][17] != M[(sum % 11)]))
        {
            global_flag = 1;
            printf("%s\n", a[i]);
        }
    }

    if (global_flag == 0)
        printf("All passed\n");
    return 0;
}