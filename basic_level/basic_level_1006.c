#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);

	int digit[3] = {0, 0, 0};
	int i = 0;
	do
	{
		digit[i] = input % 10;
		input = input / 10;
		i ++;
	}while(input != 0);

	if (i == 3)
	{
		i--;
		while(digit[i]-- != 0)
			printf("B");
	}
	if (i == 2)
	{
		i--;
		while(digit[i]-- != 0)
			printf("S");
	}
	int j = 1;
	i--;
	while(digit[i]-- != 0)
		printf("%d", j++);
	return 0;
}