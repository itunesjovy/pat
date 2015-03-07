#include <stdio.h>
#include <math.h>

int main()
{
	int input;
	scanf("%d", &input);
	if (input < 5)
	{
		printf("0");
		return 0;
	}

	int output = 0;
	int i;
	for (i = 5; i <= input; i = i + 2)
	{
		int square_root = (int)sqrt(i);
		int j = 2;
		for (j = 2; j <= square_root; j++)
			if ((i % j) == 0)
				break;
			
		if (j <= square_root)
		{
			i = i + 2;
			continue;
		}

		square_root = (int)sqrt(i - 2);
		for (j = 2; j <= square_root; j++)
			if (((i - 2) % j) == 0)
				break;

		if (j > square_root)
			output++;
	}
	printf("%d", output);

	return 0;
}
