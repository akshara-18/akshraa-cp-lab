# akshraa-cp-lab
/******************************************************************************

 program to add first seven terms of the following series 

1/1! + 1/2! + 1/3! + 1/4! + ..
                                            BY AKSHARA
                                            Date:6/3/19

*******************************************************************************/
#include <stdio.h>
int fact(number);
void main()
{
    int number;
    float sum=0;
    for(number=1;number<=7;number++)
    {
        sum=sum+1.0/fact(number);
    }
    printf("THE SUM OF THE GIVEN SERIES = %f",sum);
  
}
int fact(number)
{
    int factorial=1,count;
    for(count=1;count<=number;count++)
    {
        factorial=factorial*count;
    }
    return factorial;
}

