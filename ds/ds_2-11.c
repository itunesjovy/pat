#include <stdio.h>
#include <malloc.h>

struct Node
{
	unsigned int data;
	struct Node* next;
};

struct Node* create_list()
{
	struct Node *head, *p;
	head = p = (struct Node*)malloc(sizeof(struct Node));

	scanf("%d", &p->data);
	while(p->data != -1)
	{
		p->next = (struct Node*)malloc(sizeof(struct Node));
		p = p->next;
		scanf("%d", &p->data);
	}
	p->next = NULL;

	return head;
}

int main()
{
	struct Node *head1, *head2;
	struct Node* create_list();

	head1 = create_list();
	head2 = create_list();

	if((head1->data == -1) && (head2->data == -1))
	{
		printf("NULL");
		return 0;
	}

	if(head1->data < head2->data)
	{
		printf("%d", head1->data);
		head1 = head1->next;
	}
	else
	{
		printf("%d", head2->data);
		head2 = head2->next;
	}

	while((head1->data != -1) && (head2->data != -1))
	{
		if(head1->data < head2->data)
		{
			printf(" %d", head1->data);
			head1 = head1->next;
		}
		else
		{
			printf(" %d", head2->data);
			head2 = head2->next;
		}
	}

	while(head1->data != -1)
	{
		printf(" %d", head1->data);
		head1 = head1->next;
	}
	while(head2->data != -1)
	{
		printf(" %d", head2->data);
		head2 = head2->next;
	}

	return 0;
}