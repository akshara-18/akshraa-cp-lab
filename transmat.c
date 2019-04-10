#include<stdio.h>
void transpose(int arr[100][100]);
void main()
{
	int array[100][100],i,j;
	
	printf("enter the elements\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("(%d,%d):",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("transpose of the matrix***\n");
	transpose(array);
}
void transpose(int arr[100][100])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
}
