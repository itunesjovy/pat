#include <stdio.h>
#include <malloc.h>

#define MAX_SIZE 8000000

int main()
{
	int *p;
	p = (int*)malloc(sizeof(int) * MAX_SIZE);

	int i, j ,k;
	scanf("%d", &k);

	i = 0;
	scanf("%d", &j);
	while(j >= 0)
	{
		p[i] = j;
		i++;
		scanf("%d", &j);
	}

	if(k > i)
		printf("NULL");
	else
		printf("%d", p[i - k]);

	return 0;
}