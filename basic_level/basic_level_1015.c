#include <stdio.h>

struct student{
	int id;
	int de;
	int cai;
};
struct student result[4][100000];

int main()
{
	int N, L, H;
	scanf("%d%d%d", &N, &L, &H);

	struct student tmp;
	int i, count = N;
	int number[4] = {0, 0, 0, 0};

	for(i = 0; i < N; i++)
	{
		scanf("%d%d%d", &tmp.id, &tmp.de, &tmp.cai);

		if ((tmp.de < L) || (tmp.cai < L))
		{
			count--;
		}
		else if ((tmp.de >= H) && (tmp.cai >= H))
		{
			result[0][number[0]] = tmp;
			number[0]++;
		}
		else if (tmp.de >= H)
		{
			result[1][number[1]] = tmp;
			number[1]++;
		}
		else if (tmp.de >= tmp.cai)
		{
			result[2][number[2]] = tmp;
			number[2]++;
		}
		else
		{
			result[3][number[3]] = tmp;
			number[3]++;
		}
	}

	printf("%d\n", count);

	int partition(struct student array[], int left, int right)
	{
		int index = left;
		struct student tmp;
		struct student key = array[right];
		int j;
		for (j = left; j < right; j++)
		{
			if ((array[j].de + array[j].cai > key.de + key.cai)
				 || ((array[j].de + array[j].cai == key.de + key.cai) && (array[j].de > key.de))
				 || ((array[j].de + array[j].cai == key.de + key.cai) && (array[j].de == key.de) && (array[j].id < key.id)))
			{
				tmp = array[j];
				array[j] = array[index];
				array[index] = tmp;
				index++;
			}
		}
		array[right] = array[index];
		array[index] = key;
		return index;
	}

	void sort(struct student array[], int left, int right)
	{
		if (left >= right)
			return;

		int index = partition(array, left, right);
		sort(array, left, index - 1); 
		sort(array, index + 1, right);
	}

	int k;
	for (i = 0; i < 4; i++)
	{
		sort(result[i], 0, number[i] - 1);
		for (k = 0; k < number[i]; k++)
			printf("%d %d %d\n", result[i][k].id, result[i][k].de, result[i][k].cai);
	}

	return 0;
}