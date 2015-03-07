#include <stdio.h>
#include <malloc.h>

int main()
{
	char a[61], b[61], c[61], d[61];
	int i = 0;
	scanf("%s%s%s%s", a, b, c, d);
	do
	{
		if ((a[i] == b[i]) && (a[i] >= 'A') && (a[i] <= 'G'))
		{
			switch(a[i])
			{
				case 'A':
					printf("MON ");
					break;
				case 'B':
					printf("TUE ");
					break;
				case 'C':
					printf("WED ");
					break;
				case 'D':
					printf("THU ");
					break;
				case 'E':
					printf("FRI ");
					break;
				case 'F':
					printf("SAT ");
					break;
				case 'G':
					printf("SUN ");
					break;
				default:
					break;
			}
			i++;
			break;
		}
		i++;
	}while(a[i] != '\0');

	do
	{
		if ((a[i] == b[i]) && (((a[i] >= 'A') && (a[i] <= 'N')) || ((a[i] >= '0') && (a[i] <= '9'))))
		{
			if ((a[i] >= 'A') && (a[i] <= 'Z'))
				printf("%d:", a[i] - 'A' + 10);
			else
				printf("0%d:", a[i] - '0');
			break;
		}
		i++;
	}while(a[i] != '\0');

	i = 0;
	do
	{
		if (((c[i] >= 'a') && (c[i] <= 'z')) || ((c[i] >= 'A') && (c[i] <= 'Z')))
			if (c[i] == d[i])
			{
				if (i < 10)
					printf("0%d", i);
				else
					printf("%d", i);
				break;
			}
		i++;
	}while(c[i] != '\0');

	return 0;
}