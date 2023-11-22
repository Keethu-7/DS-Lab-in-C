#include<stdio.h>
void main()
{
int n,i,j,temp,s=0;
printf("Enter no of elements: ");
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++)
{
	printf("Enter element: ");
	scanf("%d",&a[i]);
}
for (i=0;i<n-1;i++)
{
	for (j=0;j<n-i-1;j++)
	{
		if (a[j]<a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]= temp;
		}
	}
}
for (i=0;i<n;i++)
{
	s=(s*10)+a[i];
}
printf("%d",s);
}
