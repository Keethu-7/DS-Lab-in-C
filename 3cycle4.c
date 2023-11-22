#include<stdio.h>
#include<string.h>
struct Student{
	char name[200];
	int rollno;
	int marks;
};

void main()
{
struct Student s[200];
int i,n,k,rn,temp;
printf("Enter the number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter the student name: ");
	scanf("%s",&s[i].name);
	printf("Enter the student roll number: ");
	scanf("%d",&s[i].rollno);
	printf("Enter the student marks: ");
	scanf("%d",&s[i].marks);	
}
printf("1) read a rollno and display the student details\n"
  "2) display the list in the order of name\n"
  "3) print a rank list in the descending order of mark\n"
  "4) display the list of passed students\n");
 
printf("Enter number: ");
scanf("%d",&k);
switch(k)
{
case 1:
	printf("Enter roll no:");
	scanf("%d",&rn);
	for(i=0;i<n;i++)
	{
		if(s[i].rollno==rn)
		{
			printf("Name: %s",s[i].name);
			printf("Marks: %d",s[i].marks);
			
		}
	}
	break;
case 2:
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,s[i+1].name)<0)
		{
			printf("%d\n",s[i].name);
		}
		else
		{
			printf("%d\n",s[i+1].name);
			printf("%d\n",s[i].name);
			i++;
		}
	}
	break;
case 3:
	for(i=0;i<n;i++)
	{
		if(s[i].marks<s[i+1].marks)
		{
			printf("%d\n",s[i+1].name);
			printf("%d\n",s[i].name);
			i++;
		}
		else
		{
			printf("%d\n",s[i].marks);
		}
	}
	break;
case 4:
	printf("Passed students:\n");
	for(i=0;i<n;i++)
	{
		if(s[i].marks>=50)
		{
			printf("%s\n",s[i].name);
		}
	}
}

}

