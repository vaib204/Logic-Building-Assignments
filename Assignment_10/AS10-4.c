#include <stdio.h>

int MultDigits(int iNo)
{
  int iDigit = 0;
  int iMul = 1;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iMul = iMul * iDigit;
    iNo = iNo / 10;
  }
  return iMul;
}

int main()
{
  int iValue = 0, iRet = 0;
  printf("enter number:");
  scanf("%d", &iValue);

  iRet = MultDigits(iValue);

  printf("%d", iRet);

  return 0;
}