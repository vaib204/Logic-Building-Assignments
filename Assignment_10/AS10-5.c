#include <stdio.h>

int CountOdd(int iNo)
{
  int iDigit = 0;
  int iEven = 0;
  int iOdd = 0;
  int iDiff = 0;
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    if ((iDigit % 2) == 0)
    {
      iEven += iDigit;
    }
    else
    {
      iOdd += iDigit;
    }
  }
  iDiff = iEven - iOdd;
  return iDiff;
}

int main()
{
  int iValue = 0, bRet = 0;
  printf("enter number:");
  scanf("%d", &iValue);

  bRet = CountOdd(iValue);
  printf("%d", bRet);

  return 0;
}