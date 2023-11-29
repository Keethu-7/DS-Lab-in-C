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
	int i,n,del;
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
	
	printf("Display the elements of linked list\n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	
	
	printf("Enter data value to delete: ");
	scanf("%d",&del);
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==del)
		{
			if(ptr==head)
			{
				head=ptr->next;
				head->prev=NULL;
				free(ptr);
				break;
			}
			else
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
				free(ptr);
				break;
			}
		}
		else
		{
			ptr=ptr->next;
		}
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
