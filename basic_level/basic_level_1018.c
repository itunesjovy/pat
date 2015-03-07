#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int i = 0;
	char A, B;
	int count[3] = {0, 0, 0}, countA[3] = {0, 0, 0}, countB[3] = {0, 0, 0};
	for (i = 0; i < N; i++)
	{
		scanf("\n%c %c", &A, &B);

		switch(A)
		{
			case 'B':
				switch(B)
				{
					case 'C':
						count[0]++;
						countA[0]++;
						break;
					case 'B':
						count[1]++;
						break;
					case 'J':
						count[2]++;
						countB[2]++;
						break;
				}
				break;

			case 'C':
				switch(B)
				{
					case 'J':
						count[0]++;
						countA[1]++;
						break;
					case 'C':
						count[1]++;
						break;
					case 'B':
						count[2]++;
						countB[0]++;
						break;
				}
				break;

			case 'J':
				switch(B)
				{
					case 'B':
						count[0]++;
						countA[2]++;
						break;
					case 'J':
						count[1]++;
						break;
					case 'C':
						count[2]++;
						countB[1]++;
						break;
				}
				break;
		}
	}

	printf("%d %d %d\n", count[0], count[1], count[2]);
	printf("%d %d %d\n", count[2], count[1], count[0]);

	int max, maxIndex;
	max = countA[0];
	maxIndex = 0;
	for (i = 1; i < 3; i++)
		if (countA[i] > max)
		{
			max = countA[i];
			maxIndex = i;
		}

	switch(maxIndex)
	{
		case 0:
			printf("B");
			break;
		case 1:
			printf("C");
			break;
		case 2:
			printf("J");
			break;
	}

	printf(" ");

	max = countB[0];
	maxIndex = 0;
	for (i = 1; i < 3; i++)
		if (countB[i] > max)
		{
			max = countB[i];
			maxIndex = i;
		}

	switch(maxIndex)
	{
		case 0:
			printf("B");
			break;
		case 1:
			printf("C");
			break;
		case 2:
			printf("J");
			break;
	}
	return 0;
}