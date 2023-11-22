#include<stdio.h>

void rowsum(int r,int c,int a[][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
				sum=sum+a[i][j];
		}
		printf("Sum of %d row is %d",i+1,sum);
		printf("\n");
	}
}


void colsum(int r,int c,int a[][c])
{
	int i,j;
	for(i=0;i<c;i++)
	{
		int sum=0;
		for(j=0;j<r;j++)
		{
				sum=sum+a[j][i];
		}
		printf("Sum of %d column is %d",i+1,sum);
		printf("\n");
	}
}

void main()
{
	int r,c,i,j;
	printf("Enter no of rows:");
	scanf("%d",&r);
	printf("Enter no of columns:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element:");
			scanf("%d",&a[i][j]);
		}
	}
	rowsum(r,c,a);
	colsum(r,c,a);
}
