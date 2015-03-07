#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int M, N;
	scanf("%d%d", &M, &N);
	int j = 0, i = 2, count = 0;
	while(1)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if ((i % j) == 0)
				break;
		}

		if (j > sqrt(i))
		{
			count++;

			if ((count >= M) && (count < N))
			{
				if (((count - M + 1) % 10) == 0)
					printf("%d\n", i);
				else
					printf("%d ", i);
			}

			if (count == N)
			{
				printf("%d", i);
				break;
			}
		}

		i++;
	}
	return 0;
}