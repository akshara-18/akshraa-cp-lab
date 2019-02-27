#include<stdio.h>
void main()
{
int ram,shyam,ajay;
printf("enter the age of ram:\n");
scanf("%d",&ram);
printf("enter the age of shyam:\n");
scanf("%d",&shyam);
printf("enter the age of ajay:\n");
scanf("%d",&ajay);
if(ram<shyam&&ram<ajay)
	{
	printf("ram is younger");
	}
if(shyam<ram&&shyam<ajay)
	{
	printf("shyam is younger");
	}
if(ajay<ram&&ajay<shyam)
	{
	printf("ajay is younger");
	}
}
