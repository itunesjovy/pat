#include <stdio.h>
#include <malloc.h>

int main()
{
    int flag[128] = {0};
    char *broken, *input;
    broken = malloc(41 * sizeof(char));
    input = malloc(100000 * sizeof(char));
    scanf("%[^\n]", broken);
    scanf("%s", input);
    while (*broken != '\0')
    {
        if (*broken == '+')
        {
            for (char i = 'A'; i <= 'Z'; i++)
                flag[i] = 1;
        }
        else if ((*broken >= 'A') && (*broken <= 'Z'))
        {
            flag[*broken] = 1;
            flag[*broken + 32] = 1;
        }
        else
        {
            flag[*broken] = 1;
        }
        broken++;
    }
    while (*input != '\0')
    {
        if (flag[*input] == 0)
            printf("%c", *input);
        input++;
    }
    return 0;
}