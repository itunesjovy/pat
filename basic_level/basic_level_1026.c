#include <stdio.h>

int main()
{
    int C1, C2, tick, second, hh, mm, ss;
    scanf("%d %d", &C1, &C2);

    tick = C2 - C1;
    second = tick / 100;
    if ((tick % 100) >= 50)
        second++;
    hh = second / 3600;
    second = second % 3600;
    mm = second / 60;
    second = second % 60;
    ss = second;
    
    if (hh > 9)
        printf("%d:", hh);
    else
        printf("0%d:", hh);
    if (mm > 9)
        printf("%d:", mm);
    else
        printf("0%d:", mm);
    if (ss > 9)
        printf("%d", ss);
    else
        printf("0%d", ss);
    return 0;
}