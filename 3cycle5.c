#include<stdio.h>
void main()
{
int n,i,j,a=0,b=0,c=0,x;
printf("Enter no of elements: ");
scanf("%d",&n);
int ar[n],ar0[n],ar1[n],ar2[n];
for (i=0;i<n;i++)
{
	printf("Enter element 0,1 or 2 : ");
	scanf("%d",&ar[i]);
}

for (i=0;i<n;i++)
{
	if(ar[i]==0)
	{
		ar0[a]=ar[i];
		a++;
	}
	else if(ar[i]==1)
	{
		ar1[b]=ar[i];
		b++;
	}
	else if(ar[i]==2)
	{
		ar2[c]=ar[i];
		c++;
	}
	else
	{
		printf("Invalid entry");
	}	
}

for (i=0;i<a;i++)
{
	ar[i]=ar0[i];
}
x=i;
for (i=0;i<b;i++)
{
	ar[x]=ar1[i];
	x++;
}
for (i=0;i<c;i++)
{
	ar[x]=ar2[i];
	x++;
}
for (i=0;i<n;i++)
{
	printf("%d\t",ar[i]);
}
}
