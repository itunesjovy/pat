#include <stdio.h>

int main()
{
    int A, B, C, D;
    int result[32];
    int  i = 0;
    scanf("%d %d %d", &A, &B, &D);
    C = A + B;

    do
    {
        result[i++] = C % D;
        C = C / D;
    }while(C != 0);

    while(i >0)
        printf("%d", result[--i]);

    return 0;
}