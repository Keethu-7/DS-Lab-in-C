#include<stdio.h>
void main()
{
	int m,n,i,j,min,c,flag=0;
	printf("Enter no of rows:");
	scanf("%d",&m);
	printf("Enter no of columns:");
	scanf("%d",&n);
	int a[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		int min=a[i][0];
		int c=0;
		for(j=1;j<n;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				c=j;
			}
		}
		int max=a[0][c];
		for(int k=0;k<m;k++)
		{
			if(a[k][j]>max)
			{
				max=a[k][j];
			}
		}
		if(min==max)
		{
			printf("Saddle point is %d",max);
			flag=1;
		}
	}
	if(flag==0)
		{
			printf("No saddle point");
		}
}
