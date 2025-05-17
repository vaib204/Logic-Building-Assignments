#include <stdio.h>
void NonFact(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if ((iNo % iCnt) != 0)
    {
      printf("non factors are:%d\n", iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  NonFact(iValue);

  return 0;
}