#include <stdio.h>

int main()
{
	float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);

	float calculate(float x, float y, int op);
	void output(int x, int y, int op);
	return 0;
}

float calculate(float x, float y, int op)
{
	switch(op)
	{
		case 0:
			return (x + y);
			break;
		case 1:
			return (x - y);
			break;
		case 2:
			return (x * y);
			break;
		case 3:
			return (x / y);
			break;
		case 4:
			return (y - x);
			break;
		case 5:
			return (y / x);
			break;
	}
}

void output(int x, int y, int op)
{
	switch(op)
	{
		case 0:
			return (x + y);
			break;
		case 1:
			return (x - y);
			break;
		case 2:
			return (x * y);
			break;
		case 3:
			return (x / y);
			break;
		case 4:
			return (y - x);
			break;
		case 5:
			return (y / x);
			break;
	}
}