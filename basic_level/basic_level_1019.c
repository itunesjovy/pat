#include <stdio.h>

int main()
{
	int N, i, j, k, tmp, A, B, C;
	scanf("%d", &N);
	int array[4] = {0, 0, 0, 0};

	for(;;)
	{
		for (i = 0; i < 4; i++)
		{
			array[i] = N % 10;
			N = N / 10;
		}

		for (k = 3; k > 0; k--)
		{
			for (j = 0; j < k; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
				}
			}
		}

		A = array[3] * 1000 + array[2] * 100 + array[1] * 10 + array[0];
		B = array[0] * 1000 + array[1] * 100 + array[2] * 10 + array[3];
		C = A - B;

		printf("%04d - %04d = %04d\n", A, B, C);

		if ((C == 0) || (C == 6174))
			return 0;

		N = C;
	}
}