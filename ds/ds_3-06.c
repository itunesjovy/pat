#include <stdio.h>

int main()
{
	char op[20], ch, pre;
	int j = 0;

	pre = getchar();
	if(pre == '-' || (pre >= '0' && pre <= '9'))
		putchar(pre);
	else if(pre == '(')
		op[j++] = pre;

	while((ch = getchar()) != '\n')
	{
		if((ch >= '0' && ch <= '9') || (ch == '.'))
		{
			putchar(ch);
		}
		else if(ch == '+' || ch == '-')
		{
			if((pre >='0' && pre <='9') || pre == ')')
			{
				putchar(' ');
				while(j > 0)
				{
					j--;
					if(op[j] != '(')
					{
						putchar(op[j]);
						putchar(' ');
					}
					else
					{
						j++;
						break;
					}
				}
				op[j++] = ch;
			}
			else if(ch == '-')
				putchar(ch);
		}
		else if(ch == '*' || ch == '/')
		{
			putchar(' ');
			while(j > 0)
			{
				j--;
				if(op[j] == '*' || op[j] == '/')
				{
					putchar(op[j]);
					putchar(' ');
				}
				else
				{
					j++;
					break;
				}
			}

			op[j++] = ch;
		}
		else if(ch == '(')
		{
			op[j++] = ch;
		}
		else if(ch == ')')
		{
			while(j > 0)
			{
				j--;
				if(op[j] != '(')
				{
					putchar(' ');
					putchar(op[j]);
				}
				else
				{
					op[j] = '\0';
					break;
				}
			}
		}
		pre = ch;
	}

	while(j > 0)
	{
		putchar(' ');
		putchar(op[--j]);
	}
	return 0;
}