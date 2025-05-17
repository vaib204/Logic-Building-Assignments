#include <stdio.h>

int CountRange(int iNo)
{
  int iDigit = 0, iCnt = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if ((iDigit > 3) && (iDigit < 7))
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

  bRet = CountRange(iValue);
  printf("%d", bRet);

  return 0;
}