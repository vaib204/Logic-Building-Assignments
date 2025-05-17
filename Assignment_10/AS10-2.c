#include <stdio.h>

int CountOdd(int iNo)
{
  int iDigit = 0, iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if ((iDigit % 2) != 0)
    {
      iCnt++;
    }
    iNo = iNo / 10;
  }
  return iCnt;
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