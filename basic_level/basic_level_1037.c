#include <stdio.h>

int main()
{
    int P, A, Galleon, Sickle, Knut, diff;
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    P = Galleon * 17 * 29 + Sickle * 29 + Knut;
    scanf("%d.%d.%d", &Galleon, &Sickle, &Knut);
    A = Galleon * 17 * 29 + Sickle * 29 + Knut;

    if (P <= A)
    {
        diff = A - P;
    }
    else
    {
        diff = P - A;
        printf("-");
    }
    Galleon = diff / (17 * 29);
    diff = diff % (17 * 29);
    Sickle = diff / 29;
    Knut = diff % 29;
    printf("%d.%d.%d\n", Galleon, Sickle, Knut);
    return 0;
}