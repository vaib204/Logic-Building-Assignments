#include <stdio.h>
int DollarToInr(int iNo)
{
  int DollarPrice = 70;
  if (DollarPrice == 70)
  {
    return DollarPrice * iNo;
  }
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  iRet = DollarToInr(iValue);

  printf("value of INR is:%d", iRet);
}