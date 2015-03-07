#include <stdio.h>

int main()
{
	int N, i;
	int A[5] = {0, 0, 0, 0, 0};
	int flag = 1, count = 0;
	int suck = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		int tmp;
		scanf("%d", &tmp);
		if ((tmp % 10) == 0)
			A[0] += tmp;
		else if ((tmp % 5) == 1)
		{
			A[1] += tmp * flag;
			flag = flag * (-1);
			suck ++;
		}
		else if ((tmp % 5) == 2)
			A[2]++;
		else if ((tmp % 5) == 3)
		{
			A[3] += tmp;
			count++;
		}
		else if ((tmp % 5) == 4)
		{
			if (tmp > A[4])
				A[4] = tmp;
		}
	}
	float A3 = 0;
	if (count != 0)
		A3 = (float)A[3] / count;
	if (A[0] == 0)
		printf("N ");
	else
		printf("%d ", A[0]);
	if (suck == 0)
		printf("N ");
	else
		printf("%d ", A[1]);
	if (A[2] == 0)
		printf("N ");
	else
		printf("%d ", A[2]);
	if (A3 == 0)
		printf("N ");
	else
		printf("%.1f ", A3);
	if (A[4] == 0)
		printf("N");
	else
		printf("%d", A[4]);
	return 0;
}