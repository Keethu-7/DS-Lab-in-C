#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *newnode,*current,*ptr;

void main()
{
	struct node *head=NULL;
	int i,n,del,min;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			current=newnode;
		}
		else
		{
			current->next=newnode;
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
	
	ptr=head;
	min=ptr->data;
	while(ptr!=NULL)
	{
		if((ptr->data)<min)
		{
			min=ptr->data;
		}
		ptr=ptr->next;
	}
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->data==min)
		{
			if(ptr==head)
			{
				head=ptr->next;
				free(ptr);
				break;
			}
			else
			{
				current->next=ptr->next;
				free(ptr);
				break;
			}
		}
		else
		{
			current=ptr;
			ptr=ptr->next;
		}
	}
	
	printf("\nDisplay the elements of linked list\n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}
