# akshraa-cp-lab
/******************************************************************************

PROGRAM TO FIND THE OCTAL EQUVALENT
                            BY AKSHARA
                            Date:6/3/19
*******************************************************************************/
#include <stdio.h>

void main()
{
  int octal=0,number,reminder,copy,reverse_octal=0,rev_oct_digit;
  printf("enter the number:");
  scanf("%d",&number);
  printf("THE OCTAL NUMBER OF %d = ",number);
  for(copy=number;copy!=0;copy=copy/8)
  {
      reminder=copy%8;
      printf("%d",reminder);
  }
 
}
