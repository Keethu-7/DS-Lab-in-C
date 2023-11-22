#include <stdio.h>
void main()
{
int n,i,value,j;
printf("Enter degree of polynomial: ");
scanf("%d",&n);
int poly[n];
for(int i=0;i<=n;i++)
{
	printf("Enter coffecient of x^%d: ",i);
	scanf("%d",&poly[i]);
}
printf("Enter the value for x: ");
scanf("%d",&value);
int sum=poly[0];

for(i=1;i<=n;i++)
{
	int exp=1;
	for(j=0;j<i;j++)
	{
		exp=exp*value;
	}
	sum=sum+(exp*poly[i]);
}
printf("Value after evaluation is: %d ",sum);
}


