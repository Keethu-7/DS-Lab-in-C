#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode,*current,*ptr;

void main()
{
	struct node *head=NULL;
	int i,n,p;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			current=newnode;
		}
		else
		{
			current->next=newnode;
			newnode->prev=current;
			current=newnode;
		}
	}
	printf("Enter the position: ");
	scanf("%d",&p);
	if(p<1 || p>n)
	{
		printf("Invalid position");
	}
	else
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data for new node: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		newnode->prev=NULL;
		ptr=head;
		if(p==1)
		{
			newnode->next=head;
			head->prev=newnode;
			newnode->prev=NULL;
			head=newnode;
		}
		else
		{
			for(i=1;i<p-1;i++)
			{
				ptr=ptr->next;
			}
			ptr->next->prev = newnode;
			newnode->next=ptr->next;
			ptr->next=newnode;
			newnode->prev=ptr;
		} 
		//n++;
	}
	
	printf("Display the elements of linked list\n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
