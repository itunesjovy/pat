#include <stdio.h>

int main()
{
	int D, P;
	scanf("%d%d", &D, &P);
	if(P == 3)
		printf("%d", D - 1);
	else
		printf("%d", D - ((P - 2) / 2 + 2));
	return 0;
}