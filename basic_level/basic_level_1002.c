#include <stdio.h>

int main()
{
	int Digit;
	int sum = 0;
	int result[3] = {0, 0, 0};
	while ((Digit = getchar()) != '\n')
	{
		sum += Digit - '0';
	}

	int i = 0;
	do
	{
		result[i] = sum % 10;
		sum = sum / 10;
		i++;
	}while (sum != 0);

	while (--i >= 0)
	{
		switch (result[i])
		{
			case 1: printf("yi");	break;
			case 2: printf("er");	break;
			case 3: printf("san");	break;
			case 4: printf("si");	break;
			case 5: printf("wu");	break;
			case 6: printf("liu");	break;
			case 7: printf("qi");	break;
			case 8: printf("ba");	break;
			case 9: printf("jiu");	break;
			case 0: printf("ling");	break;
			default:	break;
		}
		if (i != 0)
			printf(" ");
	}
	return 0;
}