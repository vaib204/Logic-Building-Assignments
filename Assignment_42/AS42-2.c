#include<stdio.h>

int Sum(int no)
{
  int iDigit = 0;
  int isum = 0;
  int ino = 0;

  if(no!=0)
  {
    iDigit = no % 10;
    isum = iDigit + Sum(no/10);
   
  }
  return isum;
}

int main()
{
  int ivalue = 0,iRet = 0;

  printf("Enter NUmber:");
  scanf("%d",&ivalue);

  iRet = Sum(ivalue);

  printf("Summation is :%d",iRet);

  return 0;
}