#include<stdio.h>

void multiply(int r,int c,int s,int a[][c],int v[s][1])
{
	int m[r][1],i,j,k;
	if(c!=s)
	{
		printf("Multiplication not possible");
	}
	else
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<1;j++)
			{
				m[i][j]=0;
				for(k=0;k<c;k++)
				{
					m[i][j]+=a[i][k]*v[k][j];
				}
			}
			printf("%d\t",m[i][j]);
			printf("\n");
		}
		
	}
}
void main()
{
	int r,c,i,j,s;
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
	printf("Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter no of terms in a vector:");
	scanf("%d",&s);
	int v[s][1];
	for(i=0;i<s;i++)
	{
		printf("Enter term of vector:");
		scanf("%d",&v[i][1]);
	}
	printf("Vector: \n");
	for(i=0;i<s;i++)
	{
		printf("%d",v[i][1]);
		printf("\n");
	}
	multiply(r,c,s,a,v);
	
}
