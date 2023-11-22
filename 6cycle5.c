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
	int i,n,del;
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
	
	printf("Display the elements of linked list\n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
}
