#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
  int iCnt = 0, iDigit = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit == 0)
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
  BOOL bRet = FALSE;

  printf("enter number:");
  scanf("%d", &iValue);

  bRet = ChkZero(iValue);
  if (bRet == TRUE)
  {
    printf("it contains zero");
  }
  else
  {
    printf("there  is no zero");
  }
  return 0;
}
