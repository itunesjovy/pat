#include <stdio.h>
#include <math.h>

int main()
{
	int input[10000], N, i;
	double sum, avg, output;
	scanf("%d", &N);
	sum = 0;
	for(i = 0; i < N; i++)
	{
		scanf("%d", &input[i]);
		sum += input[i];
	}
	avg = sum / N;
	output = 0;
	for(i = 0; i < N; i++)
	{
		output += pow(input[i] - avg, 2);
	}
	output = sqrt(output / N);
	printf("%.5f", output);
	return 0;
}