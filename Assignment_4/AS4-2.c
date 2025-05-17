#include <stdio.h>

void FactReverse(int iNo)
{
  int iCnt = 0;

  for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
  {
    if ((iNo % iCnt) == 0)
    {
      printf("%d\n", iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  FactReverse(iValue);

  return 0;
}