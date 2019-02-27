#include<stdio.h>
void main()
{
int i,j,limit;
printf("ENTER THE LIMIT OF YOUR PYRAMID:");
scanf("%d",&limit);
for(i=limit;i>0;i--)
	{
	for(j=i;j>0;j--)
		{
		printf("*");
		}
	printf("\n");
	}
}

