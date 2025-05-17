#include <stdio.h>

int Count(int iNo)
{
  int iCnt = 0, iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit < 6)
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

  bRet = Count(iValue);
  printf("%d", bRet);
  return 0;
}
