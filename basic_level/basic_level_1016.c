#include <stdio.h>

int main()
{
	long long int A, DA, B, DB;
	scanf("%lld%lld%lld%lld", &A, &DA, &B, &DB);
	long long int i = 0, j = 0;
	do
	{
		if (A % 10 == DA)
			i++;
		A = A / 10;
	}while (A != 0);
	do
	{
		if (B % 10 == DB)
			j++;
		B = B / 10;
	}while (B != 0);
	A = 0;
	B = 0;
	while(i != 0)
	{
		A = A * 10 + DA;
		i--;
	}
	while(j != 0)
	{
		B = B * 10 + DB;
		j--;
	}
	printf("%lld", A + B);
	return 0;
}