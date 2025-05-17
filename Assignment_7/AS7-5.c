#include <stdio.h>
int OddFactorial(int iNo)
{
  int iCnt = 1;
  int EveniFact = 1;
  int iFact = 1;
  int iDiff = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 2; iCnt <= iNo; iCnt += 2)
  {
    EveniFact = EveniFact * iCnt;
  }
  for (iCnt = 1; iCnt <= iNo; iCnt += 2)
  {
    iFact = iFact * iCnt;
  }
  iDiff = EveniFact - iFact;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  iRet = OddFactorial(iValue);

  printf("factorial of number is:%d", iRet);
}