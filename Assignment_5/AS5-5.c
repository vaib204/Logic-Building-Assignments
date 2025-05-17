#include <stdio.h>

void MultipleDisplay(int iNO)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNO; iCnt++)
  {
    printf("%d\n", iCnt * iNO);
  }
}

int main()
{
  int iValue = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  MultipleDisplay(iValue);

  return 0;
}