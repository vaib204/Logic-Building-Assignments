#include <stdio.h>

void OddDisplay(int iNO)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt < iNO; iCnt++)
  {
    if ((iCnt % 2) != 0)
    {
      printf("%d", iCnt);
    }
  }
}
int main()
{
  int iValue = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  OddDisplay(iValue);

  return 0;
}