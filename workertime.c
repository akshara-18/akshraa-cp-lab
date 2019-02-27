#include<stdio.h>
void main()
{
int time,choice;
printf("choose the time:\n1. 2-3\n2. 3-4\n3. 4-5\n4. more than 5\n:");
scanf("%d",&choice);
switch(choice)
{
case 1:
	{
	printf("the worker is highly efficient");
	break;
	}
case 2:
	{
	printf("the worker should improve the speed");
	break;
	}
case 3:
	{
	printf("the worker is given training to improve the speed");
	break;
	}
case 4:
	{
	printf("the worker is terminated");
	break;
	}
}
}


