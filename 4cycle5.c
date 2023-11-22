#include<stdio.h>
void main()
{
	int n,a[10][10],i,j,r,c,count=0,b[10][10],flag=0,sum=0,edge;
	printf("Enter number of nodes:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("d",&a[i][j]);
		}
	}
}
