#include<stdio.h>
void main()
{
	int i,j,k=1,r;
	printf("Enter no of rows:");
	scanf("%d",&r);
	int a[r][3],b[r][3];
	for(i=0;i<r;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	b[0][0]=a[0][1];
	b[0][1]=a[0][0];
	b[0][2]=a[0][2];
	
	for(int z=0;z<a[0][1];z++)
	{
		for(int i=0;i<=a[0][2];i++)
		{
			if(a[i][1]==z)
			{
				b[k][0]=a[i][1];
				b[k][1]=a[i][0];
				b[k][2]=a[i][2];
				k++;
			}
		}
	}
	printf("TRANSPOSE\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
