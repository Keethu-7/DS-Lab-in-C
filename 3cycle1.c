#include<stdio.h>
void main()
{
int n,i,j,temp,min,k;
printf("Enter no of elements: ");
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++)
{
	printf("Enter element: ");
	scanf("%d",&a[i]);
}
printf("Enter the position k: ");
scanf("%d",&k);
for(i=0;i<k;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[min]>a[j])
		{
			temp=a[min];
			a[min]=a[j];
			a[j]=temp;
		}
	}
}
printf("The %dth smallest element is %d",k,a[k-1]);
}

