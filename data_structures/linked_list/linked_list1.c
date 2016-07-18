#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};


void printList(struct node* head)
{
	//struct node* temp = head;
	while(head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

//program to create a simple linked list
int main()
{
	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third = NULL;

	//allocate 3 node in the heap
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	printList(head);
	printList(head);
	return 0;
}
