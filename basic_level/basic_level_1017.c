#include <stdio.h>

int main()
{
	char tmp[1001];
	int A, B, Q, R, i;

	scanf("%s%d", tmp, &B);
	A = tmp[0] - '0';

	Q = A / B;
	R = A % B;
	if (Q != 0)
		printf("%d", Q);

	i = 1;
	while (tmp[i] != '\0')
	{
		A = R * 10 + (tmp[i] - '0');
		Q = A / B;
		R = A % B;
		printf("%d", Q);
		i++;
	}

	if ((i == 1) && (Q == 0))
		printf("0");
	
	printf(" %d", R);
	return 0;
}