#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};


//push node at the front of the list
void push_front(struct node** head_ref, int new_data)
{
	//allocate a new node
	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	//put the data in the new node
	new_node->data = new_data;

	//make new node head of linked list
	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

//print the list
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

void insertAfter(struct node* prev_node, int new_data)
{
	if(prev_node == NULL)
	{
		printf("the given previous node cannot be NULL\n");
		return;
	}

	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

void append(struct node** head_ref, int new_data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	struct node* last = *head_ref;

	new_node->data = new_data;

	new_node->next = NULL;

	if(*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	//traverse list till the last node
	while(last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	return;

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

	push_front(&head,0);
	printList(head);

	append(&head,6);

	push_front(&head,7);
	insertAfter(head->next,8);


	printList(head);
	return 0;
}
