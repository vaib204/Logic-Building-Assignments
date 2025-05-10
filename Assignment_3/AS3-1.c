#include <stdio.h>
void PrintEven(int iNo)
{
  int iNum = 2;
  if (iNo <= 0)
  {
    return;
  }
  for (int i = 0; i < iNo; i++)
  {
    printf("%d ", iNum);
    iNum += 2;
  }
}

int main()
{
  int ivalue = 0;

  printf("enter number:");
  scanf("%d", &ivalue);

  PrintEven(ivalue);

  return 0;
}
