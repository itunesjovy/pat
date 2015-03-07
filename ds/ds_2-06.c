#include <stdio.h>

int main()
{
	int A, N, i, tmp, result[100000];
	scanf("%d%d", &A, &N);

	i = 0;
	tmp = 0;
	do
	{
		tmp += A * N;
		result[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
		N--;
	}while(N > 0);

	if(tmp != 0)
		printf("%d", tmp);

	i--;
	do
	{
		printf("%d", result[i]);
		i--;
	}while(i >= 0);

	return 0;
}