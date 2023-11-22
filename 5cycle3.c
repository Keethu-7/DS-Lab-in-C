#include<stdio.h>
void main()
{
	int r,c,i,j,n=0;
	printf("Enter no of rows:");
	scanf("%d",&r);
	printf("Enter no of columns:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int size=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]=0)
			{
				size++;
			}
		}
	}
	int full=r*c;
	float sparsity=size/full;
	printf("Sparsity is: %.2f",sparsity);
}
