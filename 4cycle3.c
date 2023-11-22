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
			printf("Enter element:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				n++;
				printf("%d element: row index=%d\tcolumn index=%d",a[i][j],i,j);
				printf("\n");
			}
		}
	}
	printf("No of non zero elements: ",n);
}
