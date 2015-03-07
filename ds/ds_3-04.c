#include <stdio.h>
#include <malloc.h>

struct Node
{
	int coef;
	int expo;
	struct Node* next;
};

struct Node* create_list(int length)
{
	if(length <= 0)
		return NULL;

	int i;
	struct Node *head, *p;
	head = p = (struct Node*)malloc(sizeof(struct Node));

	for(i = 0; i < length - 1; i++)
	{
		scanf("%d %d", &p->coef, &p->expo);
		p->next = (struct Node*)malloc(sizeof(struct Node));
		p = p->next;
	}
	scanf("%d %d", &p->coef, &p->expo);
	p->next = NULL;

	return head;
}

struct Node* plus(struct Node *para1, struct Node *para2)
{
	while(1)
	{
		if(para1 == NULL)
			return para2;
		else if(para2 == NULL)
			return para1;

		if((para1->expo == para2->expo) && ((para1->coef + para2->coef) == 0))
		{
			para1 = para1->next;
			para2 = para2->next;
		}
		else
			break;
	}

	struct Node *sum, *p;
	sum = p = (struct Node*)malloc(sizeof(struct Node));

	while(1)
	{
		if(para1->expo > para2->expo)
		{
			p->coef = para1->coef;
			p->expo = para1->expo;
			para1 = para1->next;
		}
		else if(para1->expo < para2->expo)
		{
			p->coef = para2->coef;
			p->expo = para2->expo;
			para2 = para2->next;
		}
		else
		{
			p->coef = para1->coef + para2->coef;
			p->expo = para1->expo;
			para1 = para1->next;
			para2 = para2->next;
		}

		if(para1 == NULL)
		{
			p->next = para2;
			break;
		}
		else if(para2 == NULL)
		{
			p->next = para1;
			break;
		}
		else if((para1->expo == para2->expo) && ((para1->coef + para2->coef) == 0))
		{
			para1 = para1->next;
			para2 = para2->next;
			if(para1 == NULL)
			{
				p->next = para2;
				break;
			}
			else if(para2 == NULL)
			{
				p->next = para1;
				break;
			}
		}
		else
		{
			p->next = (struct Node*)malloc(sizeof(struct Node));
			p = p->next;
		}
	}
	return sum;
}

struct Node* multiply(struct Node *para1, struct Node *para2, int length1, int length2)
{
	if((length1 <= 0) || (length2 <= 0))
		return NULL;

	struct Node *product, *record, *a, *tmp;
	int i, j;

	product = NULL;
	record = para1;
	a = tmp = (struct Node*)malloc(sizeof(struct Node));
	for(i = 0; i < length2; i++)
	{
		for(j = 0; j < length1 - 1; j++)
		{
			a->coef = para1->coef * para2->coef;
			a->expo = para1->expo + para2->expo;
			a->next = (struct Node*)malloc(sizeof(struct Node));
			a = a->next;
			para1 = para1->next;
		}
		a->coef = para1->coef * para2->coef;
		a->expo = para1->expo + para2->expo;
		a->next = NULL;

		product = plus(product, tmp);
		para1 = record;
		para2 = para2->next;
		a = tmp = (struct Node*)malloc(sizeof(struct Node));
	}

	return product;
}

void output(struct Node *output)
{
	if(output == NULL)
	{
		printf("0 0");
		return;
	}
	printf("%d %d", output->coef, output->expo);
	output = output->next;
	while(output != NULL)
	{
		printf(" %d %d", output->coef, output->expo);
		output = output->next;
	}
}

int main()
{
	struct Node *head1, *head2, *result;
	int length1, length2;
	struct Node* create_list(int length);
	struct Node* plus(struct Node *para1, struct Node *para2);
	struct Node* multiply(struct Node *para1, struct Node *para2, int length1, int length2);
	void output(struct Node *output);

	scanf("%d", &length1);
	head1 = create_list(length1);
	scanf("%d", &length2);
	head2 = create_list(length2);

	result = multiply(head1, head2, length1, length2);
	output(result);
	printf("\n");
	result = plus(head1, head2);
	output(result);

	return 0;
}