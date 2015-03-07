#include <stdio.h>
#include <malloc.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* create_list(int length)
{
	int i;
	struct Node *head, *p;
	head = p = (struct Node*)malloc(sizeof(struct Node));

	for(i = 0; i < length; i++)
	{
		scanf("%d", &p->data);
		p->next = (struct Node*)malloc(sizeof(struct Node));
		p = p->next;
	}
	p = NULL;

	return head;
}

int main()
{
	struct Node *head1, *head2;
	struct Node* create_list(int length);
	int result[]
	int length, count, mid, i;

	scanf("%d", &length);
	head1 = create_list(length);
	head2 = create_list(length);
	merge = p = (struct Node*)malloc(sizeof(struct Node));

	count = 0;
	do
	{
		if(head1->data < head2->data)
		{
			p->data = head1->data;
			p->next = (struct Node*)malloc(sizeof(struct Node));
			p = p->next;
			head1 = head1->next;
		}
		else if(head1->data > head2->data)
		{
			p->data = head2->data;
			p->next = (struct Node*)malloc(sizeof(struct Node));
			p = p->next;
			head2 = head2->next;
		}
		else
		{
			count++;
			head1 = head1->next;
			head2 = head2->next;
		}
	}while((head1->next != NULL) && (head2->next != NULL));

	mid = length - count;
	for(i = 1; i < mid; i++)
	{
		merge = merge->next;
	}

	printf("%d", merge->data);

	return 0;
}