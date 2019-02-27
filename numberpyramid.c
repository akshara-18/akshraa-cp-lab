#include<stdio.h>
void main()
{
int i,j,limit;
printf("ENTER THE LIMIT OF YOUR PYRAMID:");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf("%d",j);
		}
	printf("\n");
	}
}

