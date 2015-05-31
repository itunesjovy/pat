#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);

    struct person
    {
        char name[6];
        char birth[11];
    };
    struct person oldest, youngest, tmp;
    strcpy(oldest.birth, "2014/09/06");
    strcpy(youngest.birth, "1814/09/06");
    int i = 0, count = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%s %s", tmp.name, tmp.birth);
        if ((strcmp(tmp.birth, "1814/09/06") >= 0) && (strcmp(tmp.birth, "2014/09/06") <= 0))
        {
            count++;
            if (strcmp(tmp.birth, youngest.birth) >= 0)
            {
                strcpy(youngest.name, tmp.name);
                strcpy(youngest.birth, tmp.birth);
            }
            if (strcmp(tmp.birth, oldest.birth) <= 0)
            {
                strcpy(oldest.name, tmp.name);
                strcpy(oldest.birth, tmp.birth);
            }
        }
    }
    if (count != 0)
        printf("%d %s %s\n", count, oldest.name, youngest.name);
    else
        printf("%d\n", count);
    return 0;
}