#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  // write updater
  while (iCnt < iNo)
  {
    printf("*\n");

    iCnt++;
  }
}
int main()
{
  int ivalue = 0;

  printf("enter number:");
  scanf("%d", &ivalue);

  Display(ivalue);

  return 0;
}