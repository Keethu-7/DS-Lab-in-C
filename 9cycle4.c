#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *newnode,*ptr,*temp,*current;

void main()
{
	struct node *head=NULL;
	int i,n,key;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter the element: \n");
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
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
	
	//display linked list
	printf("Display the elements of linked list: \n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d -> ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	
	
	printf("Enter node data before which new node should be added: ");
	scanf("%d",&key);
	
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter data of new data: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	
	temp=head;
	while(temp->data != key)
	{
		temp=temp->next;
	}
	if(temp==head)   //if(key==head->data)
	{
		head->prev=newnode;
		newnode->next=head;
		newnode->prev=NULL;
		head=newnode;
	}
	else
	{
		temp->prev->next = newnode;
		newnode->prev=temp->prev;
		newnode->next=temp;
		temp->prev=newnode;
	}
	
	//display linked list
	printf("Display the elements of linked list: \n");
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d-> ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
