#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	typedef struct stu
	{
		char name[20];
		char id[20];
		int score;
	}Student;

	int max = -1;
	int min = 101;
	Student student, best, worst;

	while (n != 0)
	{
		scanf("%s%s%d", student.name, student.id, &student.score);
		if (student.score > max)
		{
			strcpy(best.name, student.name);
			strcpy(best.id, student.id);
			max = best.score = student.score;
		}

		if (student.score < min)
		{
			strcpy(worst.name, student.name);
			strcpy(worst.id, student.id);
			min = worst.score = student.score;
		}
		n--;
	}

	printf("%s %s\n", best.name, best.id);
	printf("%s %s\n", worst.name, worst.id);
	return 0;
}