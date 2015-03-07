#include <stdio.h>

int main()
{
	struct moon_cake{
		float stock;
		float worth;
		float price;
	};
	int N, D, i, j, k;
	struct moon_cake cake[1000], tmp;
	float total_stock, result;
	scanf("%d %d", &N, &D);
	total_stock = 0;
	result = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%f", &cake[i].stock);
		total_stock += cake[i].stock;
	}
	for (i = 0; i < N; i++)
	{
		scanf("%f", &cake[i].worth);
		result += cake[i].worth;
		cake[i].price = cake[i].worth / cake[i].stock;
	}
	if (D >= total_stock)
	{
		printf("%.2f", result);
		return 0;
	}
	for (j = N - 1; j > 0; j--)
	{
		for (k = 0; k < j; k++)
		{
			if (cake[k].price > cake[k+1].price)
			{
				tmp = cake[k];
				cake[k] = cake[k+1];
				cake[k+1] = tmp;
			}
		}
	}
	result = 0;
	i--;
	while (i >= 0)
	{
		if (D >= cake[i].stock)
		{
			result += cake[i].worth;
			D -= cake[i].stock;
		}
		else
		{
			result += cake[i].price * D;
			printf("%.2f", result);
			return 0;
		}
		i--;
	}
}