#include <stdio.h>

void Display(int iNO)
{
  int iCnt = 0;

  for (iCnt = -iNO; iCnt <= iNO; iCnt++)
  {
    printf("%d", iCnt);
    {
      if (iCnt != iNO)
      {
        printf(",");
      }
    }
  }
}

int main()
{
  int iValue = 0;

  printf("enter number:");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}