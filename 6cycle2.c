#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*ptr,*already;

void main()
{
	struct node *head=NULL;
	//entering the data for already existing element
	already=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&already->data);
	already->next=NULL;
	head=already;
	
	//entering the data for new node
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	
	
	
	
	//creating alink between already and newnode
	already->next=newnode;
	
	printf("Display the elements of linked list\n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}

