#include <stdio.h>
#include <math.h>

int main()
{
	int N, SquareRoot, p[30], k[30], i, j;
	scanf("%d", &N);

	if(N <= 3)
	{
		printf("%d=%d", N, N);
		return 0;
	}
	printf("%d=", N);
	SquareRoot = (int)sqrt(N);

	j = 0;
	for(i = 2; i <= SquareRoot; i++)
	{
		if((N % i) == 0)
		{
			p[j] = i;
			k[j] = 1;
			N = N / i;
			while((N % i) == 0)
			{
				k[j]++;
				N = N / i;
			}
			j++;
		}

		if(N == 1)
			break;
	}

	if(N != 1)
	{
		p[j] = N;
		k[j] = 1;
		j++;
	}

	if(k[0] == 1)
		printf("%d", p[0]);
	else
		printf("%d^%d", p[0], k[0]);

	for(i = 1; i < j; i++)
	{
		if(k[i] == 1)
			printf("*%d", p[i]);
		else
			printf("*%d^%d", p[i], k[i]);
	}
	return 0;
}