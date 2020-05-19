#include<stdio.h>
#include<stdlib.h>

struct node
{

	int data;
	struct node* next;
};

int main()
{
	printf("testing forward declarations in c\n");
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->next = NULL;

	printf("some print tests\n");
	printf("*node = %d\n",*head);
	printf("(*node).data = %d\n",(*head).data);

	printf("print address\n");
	printf("node = %u\n", head);
	printf("&(node->data) = %u\n",&(head->data));

	return 0;
}
