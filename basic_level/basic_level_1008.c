#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d%d", &N, &M);
	if (M >= N)
		M = M % N;
	int array[100];
	int i;
	for (i = 0; i < N; i++)
		scanf("%d", &array[i]);
	for (i = N - M; i < N; i++)
		printf("%d ", array[i]);
	for (i = 0; i < N - M - 1; i++)
		printf("%d ", array[i]);
	printf("%d", array[(N - M -1)]);

	return 0;
}