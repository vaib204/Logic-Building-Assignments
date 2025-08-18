#include<stdio.h>

int Mult(int no)
{
  int iDigit = 0;
  int mult = 1;
  int ino = 0;

  if(no!=0)
  {
    iDigit = no % 10;
    mult = iDigit * Mult(no/10);
   
  }
  return mult;
}


int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the Number:\n");
  scanf("%d",&iValue);

  iRet = Mult(iValue);
  printf("%d",iRet);
 
  return 0;
}