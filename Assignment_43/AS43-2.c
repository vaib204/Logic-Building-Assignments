#include<stdio.h>

int Max(int no)
{
  int iDigit = 0;
  int imax = 0;
  int ino = 0;

  if(no!=0)
  {
    iDigit = no % 10;
    imax = Max(no/10);
  }   

  if(iDigit > imax)
   {
      imax = iDigit;
   }
  return imax;
  }


int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number:\n");
  scanf("%d",&iValue);

  iRet = Max(iValue);
  printf("%d",iRet);
 
  return 0;
}