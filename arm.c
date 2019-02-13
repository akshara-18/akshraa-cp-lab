
/*PROGRAM TO FIND AMSTRONG NUMBER*/

#include<stdio.h>
void main()
{
int num,copy,rem,sum=0;
printf("enter the number:");
scanf("%d",&num);
copy=num;
while(num>0)
	{
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
	}
if(sum==copy)
	{
	printf("the given number is amstrong number");
	}
else
	{
	printf("not an amstrong number");
	}
}
