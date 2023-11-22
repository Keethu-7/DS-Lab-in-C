#include <stdio.h>

//To read coeffecients of polynomials
void readpoly(int poly[],int n)
{
for(int i=0;i<=n;i++)
{
	printf("Enter coffecient of %d exponent: ",i);
	scanf("%d",&poly[i]);
}
}

//To print the polynomials
void printpoly(int poly[],int n)
{
for(int i=n;i>=0;i--)
{
	printf("x^%d",i);
	if (poly[i] != 0) 
	{
     	if (i < n) 
     	{
     		if (poly[i] > 0) 
     			{printf(" + ");}
     		else
     			{printf(" - ");}
        }
	}
	
}
printf("\n");
}


void main()
{
int n1,n2,max,i;
printf("Enter degree of 1st polynomial: ");
scanf("%d",&n1);
int poly1[n1];
readpoly(poly1,n1);
printf("Enter degree of 2nd polynomial: ");
scanf("%d",&n2);
int poly2[n2];
readpoly(poly2,n2);


if(n1>n2)
	{max=n1;}
else
	{max=n2;}
int poly3[max];


//To add two polynomials
int coeff1,coeff2;
for(i=0;i<=max;i++)
{
	if(i<=n1)
		{coeff1=poly1[i];}
	else
		{coeff1=0;}
	if(i<=n2)
		{coeff2=poly2[i];}
	else
		{coeff2=0;}
	poly3[i]=coeff1+coeff2;
}

printpoly(poly1,n1);
printpoly(poly2,n2);
printpoly(poly2,max);
}
