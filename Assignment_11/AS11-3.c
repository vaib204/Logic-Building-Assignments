#include <stdio.h>
void Pattern(int iNo)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d\t*\t", iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter Number of elements:");
  scanf("%d", &iValue);

  Pattern(iValue);
}