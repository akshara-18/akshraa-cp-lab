/*program to find whether area is greater than perimeter*/

#include<stdio.h>
void main()
{
int area,perimeter,length,breadth;
printf("enter the lenth & breadth:");
scanf("%d%d",&length,&breadth);
area=length*breadth;
perimeter=2*length+2*breadth;
if(area>perimeter)
	{
	printf("area is greater than perimeter");
	}
else
	{
	printf("area is less than perimeter");
	}
}

