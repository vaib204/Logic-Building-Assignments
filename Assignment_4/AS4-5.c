#include <stdio.h>
int FactDiff(int iNo)
{
  int iCnt = 0;
  int iSumFact = 0;
  int iNonSumFact = 0;
  int iDiff = 0;
  for (iCnt = 1; iCnt < iNo; iCnt++)
  {
    if ((iNo % iCnt) == 0)
    {
      iSumFact += iCnt;
    }
    else
    {
      iNonSumFact += iCnt;
    }
  }
  iDiff = iSumFact - iNonSumFact;
  return iDiff;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  iRet = FactDiff(iValue);

  printf("%d", iRet);

  return 0;
}