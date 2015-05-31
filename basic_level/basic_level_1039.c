#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int count[128] = {0};

    scanf("%s", a);
    int i = 0;
    int length1 = strlen(a);
    for (i = 0; i < length1; i++)
    {
        count[a[i]]++;
    }

    scanf("%s", a);
    int lack = 0;
    int length2 = strlen(a);
    for (i = 0; i < length2; i++)
    {
        if (count[a[i]] == 0)
            lack++;
        else
            count[a[i]]--;
    }

    if (lack == 0)
        printf("Yes %d", length1 - length2);
    else
        printf("No %d", lack);
    return 0;
}