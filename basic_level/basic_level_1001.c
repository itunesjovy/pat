#include <stdio.h>

int main()
{
	int input;
	int output = 0;
	scanf("%d", &input);
	while (input != 1)
	{
		if (input % 2 == 0)
			input = input / 2;
		else
			input = (input * 3 + 1) / 2;

		output ++;
	}
	printf("%d", output);
	return 0;
}