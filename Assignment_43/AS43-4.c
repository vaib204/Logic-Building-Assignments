#include<stdio.h>

int Min(int no)
{
  int iDigit = 0;
  int imin = 1;

  if(no!=0)
  {
    iDigit = no % 10;
    imin = Min(no/10);
  }   
 
  if(iDigit < imin)
   {
      imin = iDigit;
   }
  return imin;
  }


int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number:\n");
  scanf("%d",&iValue);

  iRet = Min(iValue);
  printf("%d",iRet);
 
  return 0;
}