#include <stdio.h>

int Countfour(int iNo)
{
  int iCnt = 0, iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit == 4)
    {
      iCnt++;
    }
    iNo = iNo / 10;
  }
  return iCnt;
}

int main()
{
  int iValue = 0;
  int bRet = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  bRet = Countfour(iValue);
  printf("%d", bRet);
  return 0;
}
