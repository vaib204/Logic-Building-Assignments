#include <stdio.h>
int MultFactor(int iNo)
{
  int iCnt = 0;
  int iMul = 1;

  for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
  {
    if (iNo % iCnt == 0)
    {
      printf("%d", iCnt);
      iMul *= iCnt;
    }
  }
  return iMul;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  printf("factors of number is:", iValue);
  iRet = MultFactor(iValue);
  printf(" multipiction is:%d\n", iRet);

  return 0;
}
