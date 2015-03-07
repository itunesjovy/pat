#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int T, i;
	scanf("%d", &T);
	bool result[10];

	for (i = 0; i < T; i++)
	{
		double A, B, C;
		scanf("%lf%lf%lf", &A, &B, &C);
		if ((A + B) > C)
			result[i] = true;
		else
			result[i] = false;
	}
	for (i = 0; i < T; i++)
	{
		if (result[i])
			printf("Case #%d: true\n", i + 1);
		else
			printf("Case #%d: false\n", i + 1);
	}
	return 0;
}