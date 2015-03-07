#include <stdio.h>

struct object
{
	int size;
	int box_number;
};
struct object objects[1000];

int main()
{
	int N, i, j;
	int box[1001] = {100};
	int box_count = 1;

	for(i = 1; i <= 1000; i ++)
	{
		box[i] = 100;
	}

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &objects[i].size);

		for(j = 1; j <= box_count; j++)
		{
			if(objects[i].size <= box[j])
			{
				objects[i].box_number = j;
				box[j] -= objects[i].size;
				break;
			}
		}

		if(j > box_count)
		{
			objects[i].box_number = ++box_count;
			box[box_count] -= objects[i].size;
		}
	}

	for(i = 0; i < N; i++)
	{
		printf("%d %d\n", objects[i].size, objects[i].box_number);
	}
	printf("%d", box_count);
	return 0;
}