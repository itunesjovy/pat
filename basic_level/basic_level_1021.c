#include <stdio.h>

int main()
{
    int output[10];
    char input;
    int i = 0;

    for(i = 0; i < 10; i++)
        output[i] = 0;

    while((input = getchar()) != '\n')
        output[(input - '0')]++;

    for(i = 0; i < 10; i++)
    {
        if(output[i] != 0)
            printf("%d:%d\n", i, output[i]);
    }
    return 0;
}