#include <stdio.h>
#include <string.h>

int main()
{
	int n, i;
	char result[10][4];
	char input[101];

	char* YesOrNo(char input[])
	{
		char a[101] = "";
		char b[101] = "";
		char c[101] = "";
		char x[101] = "";
		if (input[0] == 'A')
		{
			return ;
		}else if (input [0] == 'P')
		{
			return ;
		}else
			return "NO";
	}

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%s", input);
		strcpy(result[i], YesOrNo(input));
	}

	for (i = 0; i < n; i++)
	{
		printf("%s\n", result[i]);
	}
	return 0;
}